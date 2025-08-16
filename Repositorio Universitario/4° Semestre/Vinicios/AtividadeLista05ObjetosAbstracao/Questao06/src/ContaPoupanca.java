public class ContaPoupanca extends Conta {
    public ContaPoupanca(String nome, String numeroConta, double saldoInicial) {
        super(nome, numeroConta, saldoInicial);
    }

    @Override
    public void depositar(double valor) {
        double taxa = valor * 0.04;
        saldo += valor - taxa;
        System.out.println("Depósito de R$" + valor + " realizado com taxa de R$" + taxa);
    }

    @Override
    public void sacar(double valor) {
        double taxa = valor * 0.02;
        double total = valor + taxa;

        if (total > saldo) {
            System.out.println("Saldo insuficiente para saque!");
        } else {
            saldo -= total;
            System.out.println("Saque de R$" + valor + " realizado com taxa de R$" + taxa);
        }
    }

    @Override
    public void verificarSaldo() {
        System.out.println("Saldo atual da Conta Poupança: R$" + saldo);
    }
}
