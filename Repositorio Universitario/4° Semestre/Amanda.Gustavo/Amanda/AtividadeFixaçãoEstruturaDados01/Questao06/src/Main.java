/*
Impressão reversa
Crie um metodo imprimirReverso() que percorre a lista do fim para o início, imprimindo os valores.
*/

public class Main {
    public static void main(String[] args) {
        ListaLigada lista = new ListaLigada();

        lista.inserirInicio(3);
        lista.inserirInicio(2);
        lista.inserirInicio(1);
        lista.inserirFim(4);
        lista.inserirFim(5);

        System.out.println("Impressão normal:");
        lista.imprimir();

        System.out.println("Impressão reversa:");
        lista.imprimirReverso();
    }
}
