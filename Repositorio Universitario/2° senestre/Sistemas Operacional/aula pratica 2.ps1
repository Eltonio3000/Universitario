#1° função - exibir data e hora
function ExibirDataHora {
    white-host "data e hora atual: $(get-date)" -foregroundcolor yellow
}

#2° função - listar serviços do windows
function listarServico {
    white-host "servico do windows (top 10):" -foregroundcolor yellow
    get-service | Select-Object -First 10 | format-table -AutoSize
}

#3° função - 