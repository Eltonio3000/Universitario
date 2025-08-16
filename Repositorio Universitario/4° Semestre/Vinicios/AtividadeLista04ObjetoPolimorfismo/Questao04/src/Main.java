/*
Crie um sistema de gerenciamento de estoque usando polimorfismo. Crie classes Produto,
Estoque e Venda. A classe Produto deve ter atributos como nome, preço e quantidade
em estoque. A classe Estoque deve ter métodos para adicionar, remover e buscar produtos.
A classe Venda deve ter métodos para registrar vendas e atualizar o estoque.
Implemente as funcionalidades básicas de um sistema de gerenciamento de estoque.
*/

public class Main {
    public static void main(String[] args) {
        Estoque estoque = new Estoque();

        Produto p1 = new Produto("Arroz", 25.0, 10);
        Produto p2 = new Produto("Feijão", 8.5, 20);
        Produto p3 = new Produto("Macarrão", 4.5, 15);

        estoque.adicionarProduto(p1);
        estoque.adicionarProduto(p2);
        estoque.adicionarProduto(p3);

        estoque.listarProdutos();

        Venda venda = new Venda(estoque);

        System.out.println("\n--- Realizando vendas ---");
        venda.registrarVenda("Arroz", 3);
        venda.registrarVenda("Feijão", 5);
        venda.registrarVenda("Macarrão", 20);

        System.out.println("\nEstoque atualizado:");
        estoque.listarProdutos();
    }
}
