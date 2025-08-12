/*
Verificar se há valores repetidos
Crie um metodo que percorra a lista e verifique se há valores duplicados. Se houver, exiba-os na
tela.
*/

public class Main {
    public static void main(String[] args) {
        ListaLigada lista = new ListaLigada();
        lista.inserir(4);
        lista.inserir(2);
        lista.inserir(7);
        lista.inserir(2);
        lista.inserir(9);
        lista.inserir(4);
        lista.inserir(10);

        lista.imprimir();
        lista.verificarDuplicados();
    }
}
