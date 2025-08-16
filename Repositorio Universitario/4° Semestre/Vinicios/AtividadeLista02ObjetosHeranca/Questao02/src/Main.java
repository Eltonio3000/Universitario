/*
Desenvolva um sistema simplificado para um banco. Crie uma classe ContaBancaria
com atributos como titular e saldo. Em seguida, crie subclasses como ContaCorrente
e ContaPoupanca, que herdam da classe ContaBancaria. Adicione atributos
específicos para cada tipo de conta, como limiteChequeEspecial para contas correntes
e taxaRendimento para contas poupança. Implemente métodos para depósito, saque e
exibição de saldo. Crie a classe Principal, que mostre na tela as informações das
classes ContaBancaria e ContaCorrente.
*/

public class Main {
    public static void main(String[] args) {
        ContaCorrente cc = new ContaCorrente("Maria", 1000, 500);
        ContaPoupanca cp = new ContaPoupanca("João", 1500, 0.02);

        System.out.println("=== Conta Corrente ===");
        cc.exibirSaldo();
        cc.sacar(1200);
        cc.exibirSaldo();
        cc.depositar(300);
        cc.exibirSaldo();

        System.out.println("\n=== Conta Poupança ===");
        cp.exibirSaldo();
        cp.aplicarRendimento();
        cp.exibirSaldo();
    }
}
