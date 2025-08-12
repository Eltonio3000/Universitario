class ListaLigada {
    No inicio;

    public void inserir(int valor) {
        No novo = new No(valor);
        if (inicio == null) {
            inicio = novo;
        } else {
            No atual = inicio;
            while (atual.proximo != null) {
                atual = atual.proximo;
            }
            atual.proximo = novo;
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

    public void contarParesImpares() {
        int pares = 0;
        int impares = 0;

        No atual = inicio;

        while (atual != null) {
            if (atual.valor % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
            atual = atual.proximo;
        }

        System.out.println("Quantidade de pares: " + pares);
        System.out.println("Quantidade de ímpares: " + impares);
    }
}
