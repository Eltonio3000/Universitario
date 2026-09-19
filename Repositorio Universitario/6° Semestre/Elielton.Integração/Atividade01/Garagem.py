import json

with open('integração.json', 'r', encoding='utf-8') as f:
    contrato = json.load(f)

print("NOVA VENDA RECEBIDA")
print(f"Veículo: {contrato['veiculo']}")
print(f"Cliente: {contrato['comprador']}")