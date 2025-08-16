class ListaLigada {
    No inicio;
    No fim;

    public ListaLigada() {
        this.inicio = null;
        this.fim = null;
    }

    public void inserirInicio(int valor) {
        No novo = new No(valor);

        if (inicio == null) {
            inicio = fim = novo;
        } else {
            novo.proximo = inicio;
            inicio.anterior = novo;
            inicio = novo;
        }
    }

    public void inserirFim(int valor) {
        No novo = new No(valor);

        if (fim == null) {
            inicio = fim = novo;
        } else {
            fim.proximo = novo;
            novo.anterior = fim;
            fim = novo;
        }
    }

    public void imprimir() {
        No atual = inicio;
        while (atual != null) {
            System.out.print(atual.valor + " ");
            atual = atual.proximo;
        }
        System.out.println();
    }
}
