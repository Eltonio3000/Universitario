/*
Remoção de um valor específico
Implemente um metodo remover(int valor) que remova o primeiro nó com o valor indicado,
atualizando os ponteiros anteriores e seguintes.
*/

public class Main {
    public static void main(String[] args) {
        ListaLigada lista = new ListaLigada();

        lista.inserirFim(10);
        lista.inserirFim(20);
        lista.inserirFim(30);
        lista.inserirFim(40);
        lista.inserirFim(50);

        System.out.println("Lista original:");
        lista.imprimir();

        lista.remover(10);
        lista.remover(50);
        lista.remover(30);
        lista.remover(99);

        System.out.println("Lista após remoções:");
        lista.imprimir();
    }
}
