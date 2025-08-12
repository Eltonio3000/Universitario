/*
Implemente uma lista encadeada simples que insira elementos de forma ordenada (crescente).
Exemplo de inserção: 7 → 2 → 5 → 4 → Resultado: 2 → 4 → 5 → 7
*/

import java.util.Scanner;

public class Main {

    public static int lerInt(){
        Scanner ler = new Scanner(System.in);
        return ler.nextInt();
    }

    public static void main(String[] args) {
        int valor=1 ;
        ListaLigada listaOriginal = new ListaLigada();
        ListaLigada listaOrdenada = new ListaLigada();

        while(valor != 0) {
            System.out.println("Digite um valor diferente de 0 (digite 0 para sair): ");
            valor = lerInt();
            if(valor != 0) {
                listaOriginal.inserirInicio(valor);
            }

            if(valor == 0){
                System.out.println("Saindo...");
            }
        }

        Ordenacao ordenacao = new Ordenacao(listaOriginal);
        listaOrdenada = ordenacao.ordenar();

        System.out.println(" ");
        listaOrdenada.imprimir();

    }
}