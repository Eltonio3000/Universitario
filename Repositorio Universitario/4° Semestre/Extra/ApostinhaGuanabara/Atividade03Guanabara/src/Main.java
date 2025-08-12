/*
3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
*/

import java.util.Scanner;

public class Main {

    public static String lerString(){
        Scanner ler = new Scanner(System.in);
        return ler.nextLine();
    }
    public static int lerInt(){
        Scanner ler = new Scanner(System.in);
        return ler.nextInt();
    }

    public static void main(String[] args) {
        String nome;
        int salario;

        System.out.println("qual o nome do funcionario?");
        nome = lerString();
        System.out.println("qual o salario do funcionario?");
        salario = lerInt();

        System.out.println("O funcionario "+ nome +", tem o salário de R$"+ salario +" Reais");


    }
}