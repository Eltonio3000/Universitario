public class ListaLigada {
    private No inicio;

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

    public Boolean Buscar(int valor) {
        No atual = inicio;
        while (atual != null ) {
            if(atual.valor == valor){
                return true;
            }
            atual = atual.proximo;

        }
        return false;
    }

    public boolean Remover(int valor) {
        No atual = inicio;
        No anterior = null;

        while(atual != null) {
            if(atual.valor == valor) {
                if(anterior == null) {
                    inicio = atual.proximo;
                } else {
                    anterior.proximo = atual.proximo;
                }
                return false;
            }
            anterior = atual;
            atual = atual.proximo;
            return true;
        }
        return true;
    }


}
