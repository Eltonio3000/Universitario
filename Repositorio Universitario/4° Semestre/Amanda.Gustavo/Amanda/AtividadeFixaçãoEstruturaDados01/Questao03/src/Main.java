/*
Contar elementos pares e ímpares
Implemente um metodo que percorra a lista e conte quantos valores são pares e quantos são
ímpares.
*/

public class Main {
    public static void main(String[] args) {
        ListaLigada lista = new ListaLigada();
        lista.inserir(1);
        lista.inserir(4);
        lista.inserir(3);
        lista.inserir(8);
        lista.inserir(7);

        lista.imprimir();
        lista.contarParesImpares();
    }
}
