public class ListaLigada {

    public No inicio;

    public ListaLigada() {
        this.inicio = null;
    }

    public void inserirInicio(int valor) {
        No novo = new No(valor);
        novo.proximo = inicio;
        inicio = novo;
    }

    public void imprimir() {
        No atual = inicio;
        while (atual != null) {
            System.out.printf(atual.valor + "->");
            atual = atual.proximo;
        }
        System.out.println("null");
    }
}
