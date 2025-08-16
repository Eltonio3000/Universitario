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

    public void verificarDuplicados() {
        No atual = inicio;
        ListaLigada duplicados = new ListaLigada();

        while (atual != null) {
            No comparador = atual.proximo;
            boolean repetido = false;

            while (comparador != null) {
                if (comparador.valor == atual.valor) {
                    repetido = true;
                    break;
                }
                comparador = comparador.proximo;
            }

            if (repetido && !jaExisteNaLista(duplicados.inicio, atual.valor)) {
                duplicados.inserir(atual.valor);
            }

            atual = atual.proximo;
        }

        if (duplicados.inicio == null) {
            System.out.println("Nenhum valor duplicado encontrado.");
        } else {
            System.out.print("Valores duplicados encontrados: ");
            duplicados.imprimir();
        }
    }

    private boolean jaExisteNaLista(No inicio, int valor) {
        No atual = inicio;
        while (atual != null) {
            if (atual.valor == valor) {
                return true;
            }
            atual = atual.proximo;
        }
        return false;
    }
}
