/*
Inserção em posição específica
Crie um metodo inserirEmPosicao(int pos, int valor) que insira o valor em uma posição específica
da lista (0 = início).
*/

public class Main {
    public static void main(String[] args) {
        ListaLista lista = new ListaLista();

        lista.inserirFim(1);
        lista.inserirFim(2);
        lista.inserirFim(4);
        lista.inserirFim(5);

        System.out.print("Antes da inserção: ");
        lista.imprimir();

        lista.inserirEmPosicao(2, 3);
        lista.inserirEmPosicao(0, 0);
        lista.inserirEmPosicao(6, 6);
        lista.inserirEmPosicao(10, 99);

        System.out.print("Após inserções: ");
        lista.imprimir();
    }
}
