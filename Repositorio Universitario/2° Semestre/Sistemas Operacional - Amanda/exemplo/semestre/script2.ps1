#1° função - exibir data e hora
function ExibirDataHora {
    write-host "data e hora atual: $(get-date)" -foregroundcolor yellow
}

#2° função - listar serviços do windows
function listarServico {
    write-host "servico do windows (top 10):" -foregroundcolor yellow
    get-service | Select-Object -First 10 | format-table -AutoSize
}

#3° função - verificar conexão com a internet
function verificarConexaoInternet {
    write-host "verificando conexao com a internet..." -ForegroundColor Yellow
    $ping = test-connection -ComputerName 8.8.8.8 -count 1 -Quiet
    if($ping){
        Write-Host "conexao ativa com  a internet" -ForegroundColor Green
    } else {
        Write-Host "sem conexao com a internet" -ForegroundColor Red
    }
}

#4° função - monitorar uso da CPU
function monitorarCPU {
    $cpu = Get-WmiObject -Class win32_Processor | Select-Object -ExpandProperty loadPercentage
    Write-Host "uso da cpu atual: $cpu%" -ForegroundColor Cyan
}

#5° função - lisatr processo em execução
function listarProcessos {
    Write-Host "processo em execucao(top 10 por uso de cpu):" -ForegroundColor Cyan
    Get-Process | Sort-Object -property CPU  -Descending | Select-Object -First 10 name, CPU, id |
    format-table -AutoSize 
}

#6° função - exibir espaço disponivel em disco
function espacoDisco {
    Write-Host "Espaço disponível em disco:" -ForegroundColor Yellow
    Get-PSDrive -PSProvider FileSystem | Select-Object Name,
    @{Name="FreeSpace(GB)"; Expression={[math]::round($_.Free/1GB, 2)}} | Format-Table -AutoSize
}

#7° função - criar uma nova pasta
function criarPasta {
    $nomePasta = Read-Host "digite o nome da nova pasta"
    $caminho = Join-Path -Path (Get-Location) -ChildPath $nomePasta
    if (-not (Test-Path -Path $caminho)) {
        New-Item -Path $caminho -ItemType Directory | Out-Null
        Write-Host "pasta '$nomePasta' criada com sucesso!" -ForegroundColor Green
    } else {
        Write-Host "pasta '$nomePasta' Já existente" -ForegroundColor Red
    }
}

#8° função - sair do script
function sair {
    Write-Host "saindo... ate logo!" -ForegroundColor Green
    exit
}

do {
    Clear-Host
    Write-Host "===== Menu Avançado ======= " -ForegroundColor Cyan
    Write-Host "1 exibir data e horas atual"
    Write-Host "2 listar serviços do windows"
    Write-Host "3 verificar conexxao a internet"
    Write-Host "4 monitorar uso da cpu"
    Write-Host "5 listar processos em execucao"
    Write-Host "6 exibir espaco disponivel em disco"
    Write-Host "7 criar uma nova pasta"
    Write-Host "8 sair "
    Write-Host "================"
    $opcao = read-host "escolha uma opcao (1-8)"

    switch ($opcao) {
        1 { ExibirDataHora }
        2 { listarServico }
        3 { verificarConexaoInternet }
        4 { monitorarCPU }
        5 { listarProcessos }
        6 { espacoDisco }
        7 { criarPasta }
        8 { sair }
        Default { Write-Host "opcao invalida! tente novamente." -ForegroundColor Red }
    }
    Start-Sleep -Seconds 3

}while ($true)

# 5 e 7 corrijir estao erradas