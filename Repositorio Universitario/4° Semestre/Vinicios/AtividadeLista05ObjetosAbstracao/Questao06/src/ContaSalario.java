public class ContaSalario extends Conta {
    public ContaSalario(String nome, String numeroConta, double saldoInicial) {
        super(nome, numeroConta, saldoInicial);
    }

    @Override
    public void depositar(double valor) {
        System.out.println("Não é possível realizar depósitos em Conta Salário!");
    }

    @Override
    public void sacar(double valor) {
        if (valor > saldo) {
            System.out.println("Saldo insuficiente para saque!");
        } else {
            saldo -= valor;
            System.out.println("Saque de R$" + valor + " realizado sem taxa.");
        }
    }

    @Override
    public void verificarSaldo() {
        System.out.println("Saldo atual da Conta Salário: R$" + saldo);
    }
}
