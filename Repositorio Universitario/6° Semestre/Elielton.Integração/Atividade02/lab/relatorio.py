# Gera os numeros da Tarefa T1 automaticamente.
# Rode DEPOIS que o App A terminar e a fila de inbox/ estiver vazia.
#
# Uso:  python relatorio.py

import os, csv, sys

try:
    sys.stdout.reconfigure(encoding="utf-8")
except Exception:
    pass

BASE = os.path.dirname(os.path.abspath(__file__))


def conta(pasta):
    caminho = os.path.join(BASE, pasta)
    if not os.path.isdir(caminho):
        return 0
    return len([f for f in os.listdir(caminho) if f.endswith(".json")])


print("=" * 52)
print("RELATORIO DO LABORATORIO — Integracao de Matriculas")
print("=" * 52)
print(f"Na fila agora   inbox/      : {conta('inbox')}")
print(f"Aguardando      outbox/     : {conta('outbox')}")
print(f"Concluidos      processed/  : {conta('processed')}")
print(f"Com erro        deadletter/ : {conta('deadletter')}")

log = os.path.join(BASE, "finance_log.csv")
if not os.path.exists(log):
    print("\nfinance_log.csv ainda nao existe — o App C nao registrou nada.")
    raise SystemExit

with open(log, encoding="utf-8") as f:
    linhas = list(csv.DictReader(f))

if not linhas:
    print("\nfinance_log.csv esta vazio.")
    raise SystemExit

matriculados = sum(1 for l in linhas if l["status"] == "Matriculado")
sem_vagas = sum(1 for l in linhas if l["status"] == "SemVagas")

lat = []
for l in linhas:
    try:
        lat.append(float(l.get("latencia_seg") or ""))
    except ValueError:
        pass

print(f"\nRegistros no finance_log.csv : {len(linhas)}")
print(f"  Matriculado : {matriculados}")
print(f"  SemVagas    : {sem_vagas}")

if lat:
    print("\nLatencia solicitacao -> resultado (segundos):")
    print(f"  minima : {min(lat):.1f}")
    print(f"  media  : {sum(lat) / len(lat):.1f}")
    print(f"  maxima : {max(lat):.1f}")
    print("\nCompare este bloco entre o modo TEMPO REAL e o modo LOTE.")
