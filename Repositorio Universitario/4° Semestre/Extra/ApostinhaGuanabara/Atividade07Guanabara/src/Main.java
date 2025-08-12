/*
7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.
Ex:
Digite um número: 3,5
O dobro de 3,5 é 7,0
A terça parte de 3,5 é 1,16666
*/

import java.util.Scanner;

public class Main {

    public static double lerDouble(){
        Scanner ler = new Scanner(System.in);
        return ler.nextDouble();
    }

    public static void main(String[] args) {

        System.out.println("digite um numero qualquer");
        double numero = lerDouble();

        double dobro = numero * 2;
        double tercaPart = numero / 3;

        System.out.println("O dobro é: " + dobro + "\nA terça parte é: " + tercaPart);

    }
}