import json

novaVenda = {
    "comprador": "João Silva",
    "veiculo": "Toyota Corolla",
    "valorContrato": "120000.00",
    "statusPagamento": "aprovado"
}

with open('integração.json', 'w', encoding='utf-8') as f:
    json.dump(novaVenda, f, indent=4)

print("Arquivo de integração gerada!")