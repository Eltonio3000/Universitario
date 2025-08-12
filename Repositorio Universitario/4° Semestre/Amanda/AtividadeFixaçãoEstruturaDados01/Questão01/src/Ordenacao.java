public class Ordenacao {
    public ListaLigada lista;

    public Ordenacao(ListaLigada lista) {
        this.lista = lista;
    }

    public ListaLigada ordenar() {
        lista.inicio = mergeSort(lista.inicio);
        return lista;
    }

    private No mergeSort(No head) {
        if (head == null || head.proximo == null) {
            return head;
        }

        No meio = getMeio(head);
        No segundaMetade = meio.proximo;
        meio.proximo = null;

        No esquerda = mergeSort(head);
        No direita = mergeSort(segundaMetade);

        return merge(esquerda, direita);
    }

    private No merge(No a, No b) {
        if (a == null) return b;
        if (b == null) return a;

        No resultado;

        if (a.valor <= b.valor) {
            resultado = a;
            resultado.proximo = merge(a.proximo, b);
        } else {
            resultado = b;
            resultado.proximo = merge(a, b.proximo);
        }

        return resultado;
    }

    private No getMeio(No head) {
        if (head == null) return head;

        No lento = head;
        No rapido = head.proximo;

        while (rapido != null && rapido.proximo != null) {
            lento = lento.proximo;
            rapido = rapido.proximo.proximo;
        }

        return lento;
    }
}