public abstract class Conta implements ContaBancaria {
    protected String nome;
    protected String numeroConta;
    protected double saldo;

    public Conta(String nome, String numeroConta, double saldoInicial) {
        this.nome = nome;
        this.numeroConta = numeroConta;
        this.saldo = saldoInicial;
    }

    @Override
    public void transferir(Conta destino, double valor) {
        if (valor > saldo) {
            System.out.println("Saldo insuficiente para transferência!");
        } else {
            this.sacar(valor);
            destino.depositar(valor);
            System.out.println("Transferência de R$" + valor + " realizada com sucesso para " + destino.nome);
        }
    }
}
