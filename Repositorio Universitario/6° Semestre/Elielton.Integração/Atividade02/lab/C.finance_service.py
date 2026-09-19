# App C — Financeiro (finance_service)
# Le outbox/ e registra o resultado final em finance_log.csv
#
# Uso:  python finance_service.py
# Pare com Ctrl+C.

import json, os, sys, time, shutil
from datetime import datetime, timezone

try:
    sys.stdout.reconfigure(encoding="utf-8")
except Exception:
    pass

BASE = os.path.dirname(os.path.abspath(__file__))
OUTBOX = os.path.join(BASE, "outbox")
PROCESSED = os.path.join(BASE, "processed")


def now_iso():
    return datetime.now(timezone.utc).isoformat()


def ensure_dirs():
    for p in [OUTBOX, PROCESSED]:
        os.makedirs(p, exist_ok=True)


def load_json(path):
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)


def move(path, folder):
    os.makedirs(folder, exist_ok=True)
    dest = os.path.join(folder, os.path.basename(path))
    n = 1
    while os.path.exists(dest):
        raiz, ext = os.path.splitext(os.path.basename(path))
        dest = os.path.join(folder, f"{raiz}__{n}{ext}")
        n += 1
    shutil.move(path, dest)


def latencia_segundos(ts_solicitacao, ts_resultado):
    try:
        t1 = datetime.fromisoformat(ts_solicitacao)
        t2 = datetime.fromisoformat(ts_resultado)
        return round((t2 - t1).total_seconds(), 1)
    except Exception:
        return ""


def main():
    ensure_dirs()
    poll = int(sys.argv[1]) if len(sys.argv) > 1 else int(os.getenv("FIN_POLL_SECONDS", "1"))
    log_path = os.path.join(BASE, "finance_log.csv")

    if not os.path.exists(log_path):
        with open(log_path, "w", encoding="utf-8") as f:
            f.write("ts,request_id,student_id,course_id,term,approved,status,"
                    "credits,ts_solicitacao,latencia_seg\n")

    print(f"finance_service iniciado. FIN_POLL_SECONDS={poll}. Log: finance_log.csv")
    print("Pare com Ctrl+C.")

    while True:
        files = sorted(f for f in os.listdir(OUTBOX) if f.endswith(".json"))

        for fname in files:
            path = os.path.join(OUTBOX, fname)
            # Um arquivo problematico NAO pode derrubar o servico inteiro
            try:
                evt = load_json(path)
            except Exception as e:
                print(f"[C] ERRO ao ler {fname}: {e} (sera tentado de novo)")
                continue

            if evt.get("type") == "ResultadoMatricula":
                lat = latencia_segundos(evt.get("ts_solicitacao", ""), evt.get("ts", ""))
                with open(log_path, "a", encoding="utf-8") as f:
                    f.write(f"{now_iso()},{evt['request_id']},{evt['student_id']},"
                            f"{evt['course_id']},{evt['term']},{evt['approved']},"
                            f"{evt['status']},{evt['credits']},"
                            f"{evt.get('ts_solicitacao','')},{lat}\n")
                print(f"[C] Registrado: {evt['request_id']} approved={evt['approved']} "
                      f"status={evt['status']} latencia={lat}s")
                move(path, PROCESSED)
            else:
                print(f"[C] Ignorado (tipo desconhecido): {fname}")
                move(path, PROCESSED)

        time.sleep(poll)


if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print("\nfinance_service encerrado pelo usuario.")
