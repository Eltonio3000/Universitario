public class ContaBancaria {
    protected String titular;
    protected double saldo;

    public ContaBancaria(String titular, double saldoInicial) {
        this.titular = titular;
        this.saldo = saldoInicial;
    }

    public void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            System.out.println("Depósito de R$" + valor + " realizado.");
        } else {
            System.out.println("Valor inválido para depósito.");
        }
    }

    public boolean sacar(double valor) {
        if (valor > 0 && saldo >= valor) {
            saldo -= valor;
            System.out.println("Saque de R$" + valor + " realizado.");
            return true;
        } else {
            System.out.println("Saldo insuficiente ou valor inválido.");
            return false;
        }
    }

    public void exibirSaldo() {
        System.out.println("Titular: " + titular);
        System.out.println("Saldo: R$" + saldo);
    }
}
