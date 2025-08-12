/*
6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um número: 9
O antecessor de 9 é 8
O sucessor de 9 é 10
*/

import java.util.Scanner;

public class Main {

    public static int lerInt(){
        Scanner ler = new Scanner(System.in);
        return ler.nextInt();
    }

    public static void main(String[] args) {

        System.out.println("digite um numero:");
        int x = lerInt();

        int sucessor = x + 1;
        int antessesor = x - 1;

        System.out.println("Sucessor: " + sucessor + "\nAntessesor: " + antessesor);

    }
}