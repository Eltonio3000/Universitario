# Limpa o laboratorio para comecar um experimento do zero.
# Use ENTRE o teste de tempo real e o teste de lote, senao as contagens se misturam.
#
# Uso:  python reset.py

import os, shutil, sys

try:
    sys.stdout.reconfigure(encoding="utf-8")
except Exception:
    pass

BASE = os.path.dirname(os.path.abspath(__file__))
PASTAS = ["inbox", "outbox", "processed", "deadletter"]
ARQUIVOS = ["processed_ids.txt", "finance_log.csv"]

apagados = 0
for p in PASTAS:
    caminho = os.path.join(BASE, p)
    if os.path.isdir(caminho):
        for nome in os.listdir(caminho):
            os.remove(os.path.join(caminho, nome))
            apagados += 1
    else:
        os.makedirs(caminho, exist_ok=True)

for a in ARQUIVOS:
    caminho = os.path.join(BASE, a)
    if os.path.exists(caminho):
        os.remove(caminho)
        apagados += 1

print(f"Laboratorio limpo. {apagados} arquivo(s) removido(s).")
print("Pastas prontas: " + ", ".join(PASTAS))
print("ATENCAO: pare o App B e o App C (Ctrl+C) antes de rodar o reset.")
