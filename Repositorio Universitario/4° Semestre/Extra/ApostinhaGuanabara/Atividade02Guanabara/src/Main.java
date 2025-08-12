//2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas-vindas para ela:

import java.util.Scanner;

public class Main {

    public static String lerString(){
        Scanner ler = new Scanner(System.in);
        return ler.nextLine();

    }

    public static void main(String[] args) {
        String nome;

        System.out.println("Qual seu nome?");
        nome = lerString();

        System.out.println("Seja bem vindo(a) " + nome);

    }
}