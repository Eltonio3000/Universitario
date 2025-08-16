class ListaLigada {
    No inicio;
    No fim;

    public void inserirFim(int valor) {
        No novo = new No(valor);
        if (inicio == null) {
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

    public boolean ehPalindromo() {
        No esquerda = inicio;
        No direita = fim;

        while (esquerda != null && direita != null && esquerda != direita && esquerda.anterior != direita) {
            if (esquerda.valor != direita.valor) {
                return false;
            }
            esquerda = esquerda.proximo;
            direita = direita.anterior;
        }

        return true;
    }
}
