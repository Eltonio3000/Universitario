# App A — Matriculas (enrollment_service)
# Gera solicitacoes de matricula como arquivos JSON em inbox/
#
# Uso:
#   python enrollment_service.py
#   python enrollment_service.py 50 1     -> 50 eventos, 1 segundo de intervalo

import json
import os
import sys, time, uuid, random
from datetime import datetime, timezone

# Garante acentuacao correta no terminal do Windows
try:
    sys.stdout.reconfigure(encoding="utf-8")
except Exception:
    pass

BASE = os.path.dirname(os.path.abspath(__file__))
INBOX = os.path.join(BASE, "inbox")


def now_iso():
    return datetime.now(timezone.utc).isoformat()


def write_event(evt: dict):
    """Escrita ATOMICA: grava em .tmp e so depois renomeia para .json.

    Sem isso, o App B pode abrir o arquivo enquanto ele ainda esta sendo
    escrito e receber um JSON pela metade (o evento iria parar em deadletter/
    sem motivo real). Em integracao por arquivo isso e um problema classico.
    """
    os.makedirs(INBOX, exist_ok=True)
    fname = f"{evt['ts'].replace(':', '-')}_{evt['event_id']}.json"
    final_path = os.path.join(INBOX, fname)
    tmp_path = final_path + ".tmp"
    with open(tmp_path, "w", encoding="utf-8") as f:
        json.dump(evt, f, ensure_ascii=False)
    os.replace(tmp_path, final_path)


def main():
    # Ajustes didaticos (podem vir da linha de comando)
    total_events = int(sys.argv[1]) if len(sys.argv) > 1 else 20
    interval_seconds = float(sys.argv[2]) if len(sys.argv) > 2 else 4
    duplicate_rate = 0.20   # 20% dos eventos sao reenviados (duplicidade)
    invalid_rate = 0.10     # 10% dos eventos saem invalidos (credits = 0)

    print(f"enrollment_service iniciado. {total_events} eventos, "
          f"intervalo de {interval_seconds}s. Gerando solicitacoes em inbox/ ...")

    students = ["A100", "A101", "A102", "A103", "A104"]
    courses = ["BD101", "ENG200", "MAT150"]
    terms = ["2026.1"]

    for i in range(total_events):
        evt = {
            "event_id": str(uuid.uuid4()),
            "type": "SolicitacaoMatriculaCriada",
            "ts": now_iso(),
            "request_id": f"R{2000 + i}",
            "student_id": random.choice(students),
            "course_id": random.choice(courses),
            "term": random.choice(terms),
            "credits": random.choice([2, 4, 6]),
        }

        # Evento invalido de proposito (credits <= 0) -> vai para deadletter/
        if random.random() < invalid_rate:
            evt["credits"] = 0

        write_event(evt)
        print(f"[A] Solicitacao -> {evt['request_id']} aluno={evt['student_id']} "
              f"curso={evt['course_id']} credits={evt['credits']}")

        # Duplicidade: mesmo event_id reenviado (o App B deve ignorar)
        if random.random() < duplicate_rate:
            dup = dict(evt)
            dup["ts"] = now_iso()
            write_event(dup)
            print(f"[A] DUPLICADO -> request_id={dup['request_id']} "
                  f"event_id={dup['event_id']}")

        time.sleep(interval_seconds)

    print("enrollment_service finalizado.")


if __name__ == "__main__":
    main()
