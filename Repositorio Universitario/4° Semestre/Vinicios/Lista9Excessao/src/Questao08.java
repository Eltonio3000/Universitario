/*
Crie um programa que solicite ao usuário que digite um número inteiro, mas capture a exceção
NumberFormatException se o que foi digitado não for um número válido.
*/

import java.util.Scanner;

public class Questao08 {
    public void Resolucao08() {
        Scanner lerInt = new Scanner(System.in);
        int var;

        try {
            System.out.println("tipo inteiro mas digite uma letra lata dar erro...\n>>>");
            var = lerInt.nextInt();
        } catch(Exception e) {
            System.out.println("erro " + e.getMessage());
        }

    }
}
