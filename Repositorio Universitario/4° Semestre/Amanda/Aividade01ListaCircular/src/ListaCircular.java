public class ListaCircular {
    private No inicio;
    private No fim;

    public ListaCircular() {
        this.inicio = null;
        this.fim = null;
    }

    public void inserirInicio(int valor) {
        No novo = new No(valor);
        if (inicio == null) {
            inicio = novo;
            fim = novo;
            novo.proximo = inicio;
        } else {
            fim.proximo = novo;
            novo.proximo = inicio;
            fim = novo;
        }
    }

    public void imprimir() {
        No atual = inicio;
        while (atual.proximo != inicio) {
            System.out.printf(atual.valor + "->");
            atual = atual.proximo;
        }
        System.out.println(atual.valor + "-> repete...");
    }


    public boolean Remover(int valor) {
        No atual = inicio;

        while(atual != null) {
            if (atual.valor == valor) {
                if (inicio.valor == valor) {
                    inicio.proximo = inicio;
                    fim.proximo = inicio;
                    return true;
                }

            }
            atual = atual.proximo;
        }
        return false;
    }


}
