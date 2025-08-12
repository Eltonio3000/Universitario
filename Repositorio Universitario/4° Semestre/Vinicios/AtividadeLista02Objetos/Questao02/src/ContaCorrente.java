public class ContaCorrente extends ContaBancaria {
    private double limiteChequeEspecial;

    public ContaCorrente(String titular, double saldoInicial, double limiteChequeEspecial) {
        super(titular, saldoInicial);
        this.limiteChequeEspecial = limiteChequeEspecial;
    }

    @Override
    public boolean sacar(double valor) {
        if (valor > 0 && saldo + limiteChequeEspecial >= valor) {
            saldo -= valor;
            System.out.println("Saque de R$" + valor + " realizado (com cheque especial se necessário).");
            return true;
        } else {
            System.out.println("Saldo + limite insuficiente.");
            return false;
        }
    }

    @Override
    public void exibirSaldo() {
        super.exibirSaldo();
        System.out.println("Limite Cheque Especial: R$" + limiteChequeEspecial);
    }
}
