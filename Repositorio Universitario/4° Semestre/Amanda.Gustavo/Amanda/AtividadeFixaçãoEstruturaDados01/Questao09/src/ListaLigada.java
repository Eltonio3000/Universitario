class ListaLista {
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

    public void inserirEmPosicao(int pos, int valor) {
        No novo = new No(valor);

        if (pos < 0) {
            System.out.println("Posição inválida.");
            return;
        }

        if (pos == 0) {
            if (inicio == null) {
                inicio = fim = novo;
            } else {
                novo.proximo = inicio;
                inicio.anterior = novo;
                inicio = novo;
            }
            return;
        }

        No atual = inicio;
        int index = 0;

        while (atual != null && index < pos) {
            atual = atual.proximo;
            index++;
        }

        if (index != pos) {
            System.out.println("Posição fora dos limites da lista.");
            return;
        }

        if (atual == null) {
            inserirFim(valor);
            return;
        }

        No anterior = atual.anterior;
        anterior.proximo = novo;
        novo.anterior = anterior;
        novo.proximo = atual;
        atual.anterior = novo;
    }

}
