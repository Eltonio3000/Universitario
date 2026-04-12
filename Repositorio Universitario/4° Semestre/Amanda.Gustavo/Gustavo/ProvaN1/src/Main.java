/*
2. Crie uma lista e faça também as seguintes operações:
a) inserir os números 10, 20, 30, 40, 50
b) imprimir todos os números da lista;
c) inserir o número 14 no fim da lista;
d) ler um número e inseri-lo no fim da lista.
e) ler um número e procurá-lo na lista, imprimindo a posição de sua primeira ocorrência a
partir do início; se não estiver na lista, imprimir uma mensagem adequada.
*/

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;


public class Main {

    public static Integer lerInteger(){
        Scanner ler = new Scanner(System.in);
        return ler.nextInt();
    }

    public static void main(String[] args) {

        System.out.println("1) Implemente uma lista duplamente encadeada e faça as seguintes operações...");


        LinkedList<Integer> lista = new LinkedList<Integer>();

        lista.add(1);
        lista.add(2);
        lista.add(3);
        lista.add(4);
        lista.add(5);
        lista.add(6);
        lista.add(7);
        lista.add(8);
        lista.add(9);
        lista.add(10);
        lista.add(11);
        lista.add(11);
        lista.add(11);
        lista.add(11);

        for ( Integer i : lista ) {
            System.out.println(i);
        }

        System.out.println("a) Calcule o número de nós:\nNúmero de nós: " + lista.size());

        System.out.println("b) Retorne a quantidade de nós que tem o valor maior que n:");
        Integer N = 5;
        int contador = 0;

        for (Integer i : lista) {
            if (i > N) {
                contador++;
            }

        }

        System.out.println("nesta lista há " + contador + " numeros maior que " + N);

        N = 11;
        System.out.println("c) Remova da lista todas as ocorrências:\nvalor a ser removido: " + N);

        Iterator<Integer> it = lista.iterator();
        while (it.hasNext()) {
            Integer i = it.next();
            if (N.equals(i)) {
                it.remove();
            }
        }

        for (Integer i : lista) {
            System.out.println(i);
        }

        System.out.println("\n\n2) Crie uma lista e faça também as seguintes operações:");

        LinkedList<Integer> lista2 = new LinkedList<Integer>();

        System.out.println("a) inserir os números 10, 20, 30, 40, 50:");
        lista2.add(10);
        lista2.add(20);
        lista2.add(30);
        lista2.add(40);
        lista2.add(50);
        System.out.println("os numeros 10, 20, 30, 40, 50 foram adicionados.");

        System.out.println("b) imprimir todos os números da lista:");
        for (Integer i : lista2) {
            System.out.println(i);
        }

        System.out.println("c) inserir o número 14 no fim da lista;");
        lista2.addLast(14);
        System.out.println("o numero 14 foi adicionado no fim da lista:");
        for (Integer i : lista2) {
            System.out.println(i);
        }

        System.out.println("d) ler um número e inseri-lo no fim da lista.\ndigite um numero: ");
        N = lerInteger();
        lista2.addLast(N);
        System.out.println("o numero " + N + " foi adicionado no fim da lista.");
        for (Integer i : lista2) {
            System.out.println(i);
        }

        int aux = 0;
        int posicao = -1;

        System.out.println("""
        e) ler um número e procurá-lo na lista, imprimindo a posição de sua primeira ocorrência a
        partir do início; se não estiver na lista, imprimir uma mensagem adequada.

        Digite o numero a ser procurado: 
        """);
        N = lerInteger();

        for (int j = 0; j < lista2.size(); j++) {
            if (lista2.get(j).equals(N)) {
                posicao = j;
                aux = 1;
                break;
            }
        }

        if (aux == 1) {
            System.out.println("Encontrado na posição: " + posicao);
        } else {
            System.out.println("Valor não encontrado.");
        }

    }
}