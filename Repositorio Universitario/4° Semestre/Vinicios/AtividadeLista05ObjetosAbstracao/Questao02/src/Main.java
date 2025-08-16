/*
2) Crie uma classe abstrata Funcionario com os atributos e métodos comuns a todos os
funcionários (nome, cargo, salário.). Crie classes concretas para diferentes tipos de
funcionários (gerente, vendedor, auxiliar, estagiário).
*/

public class Main {
    public static void main(String[] args) {
        Funcionario gerente = new Gerente("Ana", 8000.00);
        Funcionario vendedor = new Vendedor("Carlos", 3500.00);
        Funcionario auxiliar = new Auxiliar("Mariana", 2000.00);
        Funcionario estagiario = new Estagiario("Pedro", 1200.00);

        gerente.exibirInfo();
        gerente.trabalhar();
        System.out.println();

        vendedor.exibirInfo();
        vendedor.trabalhar();
        System.out.println();

        auxiliar.exibirInfo();
        auxiliar.trabalhar();
        System.out.println();

        estagiario.exibirInfo();
        estagiario.trabalhar();
    }
}
