# App B — Academico/Vagas (academic_service)
# Le inbox/, valida, decide matricular ou recusar e escreve em outbox/
#
# Uso (tempo real):  python academic_service.py 1
# Uso (lote):        python academic_service.py 120
# Tambem aceita a variavel de ambiente POLL_SECONDS.
# Pare com Ctrl+C.

import json, os, sys, time, shutil
from datetime import datetime, timezone

try:
    sys.stdout.reconfigure(encoding="utf-8")
except Exception:
    pass

BASE = os.path.dirname(os.path.abspath(__file__))
INBOX = os.path.join(BASE, "inbox")
OUTBOX = os.path.join(BASE, "outbox")
PROCESSED = os.path.join(BASE, "processed")
DEAD = os.path.join(BASE, "deadletter")


def now_iso():
    return datetime.now(timezone.utc).isoformat()


def ensure_dirs():
    for p in [INBOX, OUTBOX, PROCESSED, DEAD]:
        os.makedirs(p, exist_ok=True)


def load_json(path):
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)


def write_outbox(evt: dict):
    """Tambem escreve de forma atomica, para o App C nunca ler arquivo pela metade."""
    fname = f"{evt['ts'].replace(':', '-')}_{evt['event_id']}.json"
    final_path = os.path.join(OUTBOX, fname)
    tmp_path = final_path + ".tmp"
    with open(tmp_path, "w", encoding="utf-8") as f:
        json.dump(evt, f, ensure_ascii=False)
    os.replace(tmp_path, final_path)


def move(path, folder):
    """Move tolerante a nome repetido (no Windows shutil.move falha se ja existir)."""
    os.makedirs(folder, exist_ok=True)
    dest = os.path.join(folder, os.path.basename(path))
    n = 1
    while os.path.exists(dest):
        raiz, ext = os.path.splitext(os.path.basename(path))
        dest = os.path.join(folder, f"{raiz}__{n}{ext}")
        n += 1
    shutil.move(path, dest)


def main():
    ensure_dirs()

    # Modo: "tempo real" -> 1 segundo | "lote" -> 120 segundos
    if len(sys.argv) > 1:
        POLL_SECONDS = int(sys.argv[1])
    else:
        POLL_SECONDS = int(os.getenv("POLL_SECONDS", "1"))

    # Vagas por disciplina (memoria: reiniciar o App B RESETA as vagas)
    seats = {"BD101": 5, "ENG200": 3, "MAT150": 2}

    # Idempotencia: event_id ja processados
    processed_ids_path = os.path.join(BASE, "processed_ids.txt")
    processed_ids = set()
    if os.path.exists(processed_ids_path):
        with open(processed_ids_path, "r", encoding="utf-8") as f:
            processed_ids = set(line.strip() for line in f if line.strip())

    modo = "TEMPO REAL" if POLL_SECONDS <= 5 else "LOTE"
    print(f"academic_service iniciado. Modo={modo} POLL_SECONDS={POLL_SECONDS}. "
          f"Vagas iniciais={seats}")
    print("Pare com Ctrl+C.")

    while True:
        # Ignora .tmp: arquivo ainda sendo escrito pelo App A
        files = sorted(f for f in os.listdir(INBOX) if f.endswith(".json"))

        if not files:
            time.sleep(POLL_SECONDS)
            continue

        print(f"[B] Rodada: {len(files)} arquivo(s) na fila de inbox/")

        for fname in files:
            path = os.path.join(INBOX, fname)
            try:
                evt = load_json(path)

                # Validacao minima
                if evt.get("type") != "SolicitacaoMatriculaCriada":
                    raise ValueError("Evento desconhecido")
                for k in ["event_id", "request_id", "student_id",
                          "course_id", "term", "credits"]:
                    if k not in evt:
                        raise ValueError(f"Campo obrigatorio ausente: {k}")
                if not isinstance(evt["credits"], int) or evt["credits"] <= 0:
                    raise ValueError("credits invalido (deve ser inteiro > 0)")

                # Idempotencia: ignora reenvio do mesmo event_id
                if evt["event_id"] in processed_ids:
                    print(f"[B] IGNORADO (duplicado) event_id={evt['event_id']} "
                          f"request_id={evt['request_id']}")
                    move(path, PROCESSED)
                    continue

                course = evt["course_id"]
                available = seats.get(course, 0)

                if available > 0:
                    seats[course] = available - 1
                    status = "Matriculado"
                    approved = True
                else:
                    status = "SemVagas"
                    approved = False

                out_evt = {
                    "event_id": evt["event_id"],       # rastreabilidade
                    "type": "ResultadoMatricula",
                    "ts": now_iso(),
                    "ts_solicitacao": evt["ts"],       # para medir latencia
                    "request_id": evt["request_id"],
                    "student_id": evt["student_id"],
                    "course_id": evt["course_id"],
                    "term": evt["term"],
                    "credits": evt["credits"],
                    "approved": approved,
                    "status": status,
                    "seats_after": seats.get(course, 0),
                }
                write_outbox(out_evt)

                processed_ids.add(evt["event_id"])
                with open(processed_ids_path, "a", encoding="utf-8") as f:
                    f.write(evt["event_id"] + "\n")

                print(f"[B] {evt['request_id']} -> {status} approved={approved} "
                      f"seats_after={out_evt['seats_after']}")
                move(path, PROCESSED)

            except Exception as e:
                print(f"[B] ERRO em {fname}: {e}")
                move(path, DEAD)

        time.sleep(POLL_SECONDS)


if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print("\nacademic_service encerrado pelo usuario.")
