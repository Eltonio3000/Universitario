/*
verificar se a lista é palíndroma
Implemente um metodo que verifica se os elementos da lista formam um palíndromo
        (ex: 1 → 2 → 3 → 2 → 1).
*/

public class Main {
    public static void main(String[] args) {
        ListaLigada lista = new ListaLigada();

        lista.inserirFim(1);
        lista.inserirFim(2);
        lista.inserirFim(3);
        lista.inserirFim(2);
        lista.inserirFim(1);

        lista.imprimir();

        if (lista.ehPalindromo()) {
            System.out.println("A lista é palíndroma.");
        } else {
            System.out.println("A lista NÃO é palíndroma.");
        }
    }
}
