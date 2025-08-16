/*
Defina uma interface chamada Imprimivel com um metodo imprimir(). Crie uma classe
Relatorio que implementa a interface Imprimivel e tem métodos para adicionar e imprimir
itens. Implemente outra interface chamada Visualizavel com um metodo exibir(). Faça uma
classe Documento que implementa ambas as interfaces Imprimivel e Visualizavel. Teste a
classe Documento chamando os métodos imprimir() e exibir().
*/

public class Main {
    public static void main(String[] args) {
        Relatorio relatorio = new Relatorio();
        relatorio.adicionarItem("Venda 1 - R$ 500");
        relatorio.adicionarItem("Venda 2 - R$ 750");
        relatorio.imprimir();

        System.out.println();

        Documento doc = new Documento("Relatório de Vendas", "Resumo das vendas do mês.");
        doc.imprimir();
        System.out.println();
        doc.exibir();
    }
}
