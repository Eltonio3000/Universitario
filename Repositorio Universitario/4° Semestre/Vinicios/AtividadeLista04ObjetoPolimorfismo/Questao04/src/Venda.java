public class Venda {
    private Estoque estoque;

    public Venda(Estoque estoque) {
        this.estoque = estoque;
    }

    public void registrarVenda(String nomeProduto, int quantidade) {
        Produto produto = estoque.buscarProduto(nomeProduto);
        if (produto != null) {
            if (produto.getQuantidade() >= quantidade) {
                produto.removerQuantidade(quantidade);
                double total = quantidade * produto.getPreco();
                System.out.println("Venda registrada! Total: R$ " + total);
            } else {
                System.out.println("Estoque insuficiente para " + nomeProduto);
            }
        } else {
            System.out.println("Produto não encontrado!");
        }
    }
}
