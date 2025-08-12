/*
Inserção no início e no fim
Implemente metodos inserirInicio(int valor) e inserirFim(int valor) para uma lista duplamente
encadeada.
*/

public class Main {
    public static void main(String[] args) {
        ListaLigada lista = new ListaLigada();

        lista.inserirInicio(3);
        lista.inserirInicio(2);
        lista.inserirInicio(1);

        lista.inserirFim(4);
        lista.inserirFim(5);

        System.out.println("Lista após inserções no início e no fim:");
        lista.imprimir();  
    }
}
