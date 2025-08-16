/*
4. Concatenação de duas listas
Implemente um metodo que junte duas listas encadeadas simples no final da primeira.
*/

public class Main {
    public static void main(String[] args) {
        ListaLigada lista1 = new ListaLigada();
        lista1.inserirInicio(1);
        lista1.inserirInicio(2);
        lista1.inserirInicio(3);

        ListaLigada lista2 = new ListaLigada();
        lista2.inserirInicio(4);
        lista2.inserirInicio(5);
        lista2.inserirInicio(6);

        System.out.println("Listas concatenadas:");
        lista1.imprimir();

        System.out.println("Lista 2:");
        lista2.imprimir();

        lista1.concatenar(lista2);

        System.out.println("Lista 1 após a concatenação:");
        lista1.imprimir();
    }
}
