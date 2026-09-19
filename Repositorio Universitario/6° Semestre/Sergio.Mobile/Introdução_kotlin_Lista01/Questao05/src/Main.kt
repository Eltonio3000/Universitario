fun main() {
    val c1 : ContaBancaria = ContaBancaria("101-X","Sergio", 1000.0)
    val c2 : ContaBancaria = ContaBancaria("202-Y","Ana", 500.0)


    c1.depositar(200.0)
    c2.sacar(150.0)
    c1.transferir(c2,300.0)


    println("--- Saldo Final ---")
    c1.consultarSaldo()
    c2.consultarSaldo()
}
