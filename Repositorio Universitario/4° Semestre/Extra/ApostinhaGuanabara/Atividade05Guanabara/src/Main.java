/*
5) Faça um programa que leia as duas notas de um aluno de uma matéria e mostre
na tela a sua média na disciplina.
Ex:
Nota 1: 4,5
Nota 2: 8,5
A média entre 4,5 e 8,5 é igual a 6,5
*/

import java.util.Scanner;

public class Main {

    public static Double LerDouble(){
        Scanner ler = new Scanner(System.in);
        return ler.nextDouble();
    }

    public static void main(String[] args) {

        System.out.println("Nota da primeira Prova:");
        double nota = LerDouble();
        System.out.println("Nota da segunda Prova:");
        double nota2 = LerDouble();

        double media = (nota + nota2) / 2;

        System.out.println("Media: " + media);

    }
}