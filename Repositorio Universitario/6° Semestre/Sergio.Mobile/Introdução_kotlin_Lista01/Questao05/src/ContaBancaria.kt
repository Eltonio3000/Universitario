class ContaBancaria {
    var numeroConta : String
    var titular : String
    private var saldo : Double


    constructor(numeroConta : String, titular : String, saldoInicial : Double) {
        this.numeroConta = numeroConta
        this.titular = titular
        this.saldo = saldoInicial
    }


    fun depositar(valor : Double) : Boolean {
        return if (valor > 0) {
            this.saldo += valor
            println("[Depósito] R$ $valor depositado na conta ${this.numeroConta} (${this.titular}). Saldo: R$ ${this.saldo}")
            true
        } else {
            println("[Depósito] Valor de depósito inválido")
            false
        }
    }


    fun sacar(valor : Double) : Boolean {
        return if (valor < this.saldo) {
            this.saldo -= valor
            println("[Saque] R$ $valor sacado da conta ${this.numeroConta} (${this.titular}). Saldo: R$ ${this.saldo}")
            true
        } else {
            println("[Saque] saldo insuficiente")
            false
        }
    }


    fun transferir(destino : ContaBancaria, valor : Double) : Boolean {
        return if (this.numeroConta != destino.numeroConta  && valor < this.saldo) {
            this.saldo -= valor
            destino.saldo += valor
            println("[Transferência] R$ $valor Transferido de ${this.numeroConta}  para ${destino.numeroConta}.")
            true
        } else {
            println("[Transferência] Tranferência recusada!")
            false
        }
    }


    fun consultarSaldo() {
        println("Conta ${this.numeroConta} (${this.titular}): ${this.saldo}")
    }
}
