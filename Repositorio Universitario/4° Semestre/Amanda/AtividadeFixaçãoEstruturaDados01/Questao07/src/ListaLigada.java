class ListaLigada {
    No inicio;
    No fim;

    public ListaLigada() {
        inicio = null;
        fim = null;
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

    public void remover(int valor) {
        No atual = inicio;

        while (atual != null) {
            if (atual.valor == valor) {

                if (atual == inicio && atual == fim) {
                    inicio = fim = null;

                } else if (atual == inicio) {
                    inicio = atual.proximo;
                    inicio.anterior = null;

                } else if (atual == fim) {
                    fim = atual.anterior;
                    fim.proximo = null;

                } else {
                    atual.anterior.proximo = atual.proximo;
                    atual.proximo.anterior = atual.anterior;
                }

                System.out.println("Valor " + valor + " removido.");
                return;
            }

            atual = atual.proximo;
        }

        System.out.println("Valor " + valor + " não encontrado.");
    }
}
