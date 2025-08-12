/*
4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.
*/

import java.util.Scanner;

public class Main {

    public static int lerInt(){
        Scanner ler = new Scanner(System.in);
        return ler.nextInt();
    }

    public static void main(String[] args) {

        System.out.println("Digite um numero: ");
        int n1 = lerInt();
        System.out.println("Digite outro numero: ");
        int n2 = lerInt();

        int resultado = n1 + n2;

        System.out.println(n1 + " + " + n2 + " = " + resultado);

    }
}