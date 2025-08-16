/*
Crie uma interface chamada ContaBancaria, que deverá conter os seguintes métodos:
depositar, sacar, verificar saldo e transferir. Crie as seguintes classes e seus atributos:
a) Conta:
i) nome
ii) número da conta
iii) saldo

Crie as classes ContaCorrente, ContaPoupanca e ContaSalario que deverão herdar da
classe Conta. Os métodos das classes deverão ser implementados da seguinte maneira:

a) ContaCorrente:
i) depositar(double valor): adicionar o valor a ser depositado no saldo. Uma taxa
de 1% deve ser descontada em cada depósito.
ii) sacar(double valor): remove do saldo do usuário o valor a ser sacado. Uma
taxa de 3% deve ser descontada de cada saque. Caso o valor a ser sacado seja
maior que o valor do saldo, uma mensagem de erro deverá ser informada.
iii) verificarSaldo(): Informa na tela o valor atual do saldo da conta.
b) ContaPoupança:
i) depositar(): adicionar o valor a ser depositado no saldo. Uma taxa de 4% deve
ser descontada em cada depósito.
ii) sacar(): remove do saldo do usuário o valor a ser sacado. Uma taxa de 2%
deve ser descontada de cada saque. Caso o valor a ser sacado seja maior que o
valor do saldo, uma mensagem de erro deverá ser informada.
iii) verificarSaldo(): Informa na tela o valor atual do saldo da conta.
c) ContaSalario:
i) depositar(): Informar que não é possível realizar depósitos nesse tipo de conta.
ii) sacar(double valor): remove do saldo do usuário o valor a ser sacado.
Nenhuma taxa deve ser descontada. Caso o valor a ser sacado seja maior que
o valor do saldo, uma mensagem de erro deverá ser informada.
iii) verificarSaldo(): Informa na tela o valor atual do saldo da conta.

Após isso, crie a classe PrincipalConta onde serão instanciados cada uma das classes
anteriores. Defina valores para elas e mostre os dados na tela.
*/

public class Main {
    public static void main(String[] args) {
        ContaCorrente cc = new ContaCorrente("João", "001", 1000.0);
        ContaPoupanca cp = new ContaPoupanca("Maria", "002", 2000.0);
        ContaSalario cs = new ContaSalario("Pedro", "003", 1500.0);

        cc.verificarSaldo();
        cc.depositar(500);
        cc.sacar(200);
        cc.verificarSaldo();
        System.out.println();

        cp.verificarSaldo();
        cp.depositar(1000);
        cp.sacar(300);
        cp.verificarSaldo();
        System.out.println();

        cs.verificarSaldo();
        cs.depositar(500);
        cs.sacar(400);
        cs.verificarSaldo();
        System.out.println();

        cc.transferir(cp, 100);
        cp.verificarSaldo();
        cc.verificarSaldo();
    }
}
