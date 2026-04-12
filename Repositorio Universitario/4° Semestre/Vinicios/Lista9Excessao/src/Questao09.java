/*
Crie um programa que divida dois números, um deles lido a partir da entrada de dados pelo
usuário e outro definido por um valor padrão qualquer. Capture as exceções
ArithmeticException se ocorrer uma divisão por zero e InputMismatchException se a entrada
não for um número válido.
*/

import java.util.InputMismatchException;
import java.util.Scanner;

public class Questao09 {
    public void Resolucao09() {
        int numUm;
        int numDois = 0;
        try {
            Scanner Ler = new Scanner(System.in);
            System.out.println("Digite um numero: ");
            numUm = Ler.nextInt();
            int resultado = numUm / numDois;
        } catch (InputMismatchException e ) {
            System.out.println("Erro" + e.getMessage());
            System.out.println("erro de input");
        } catch (ArithmeticException e) {
            System.out.println("Erro" + e.getMessage());
            System.out.println("erro aritmetico");
        }
    }
}
