public class ContaPoupanca extends ContaBancaria {
    private double taxaRendimento;

    public ContaPoupanca(String titular, double saldoInicial, double taxaRendimento) {
        super(titular, saldoInicial);
        this.taxaRendimento = taxaRendimento;
    }

    public void aplicarRendimento() {
        double rendimento = saldo * taxaRendimento;
        saldo += rendimento;
        System.out.println("Rendimento aplicado: R$" + rendimento);
    }

    @Override
    public void exibirSaldo() {
        super.exibirSaldo();
        System.out.println("Taxa de Rendimento: " + (taxaRendimento * 100) + "%");
    }
}
