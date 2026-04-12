/*
Crie um programa que declare um array de inteiros e tente acessar um elemento fora dos
limites do array. Capture a exceção ArrayIndexOutOfBoundsException e forneça a mensagem
de erro: “Erro ao tentar acessar a estrutura. Posição inválida”.
*/

import java.util.ArrayList;

public class Questao07 {

    public void Resolucao07() {
        ArrayList<Integer> lista = new ArrayList<Integer>();

        lista.add(1);
        lista.add(2);
        lista.add(3);

        try {
            System.out.println("elemento da posição 4: " + lista.get(4));
        } catch (Exception e) {
            System.out.println("erro" + e.getMessage());
        System.out.println("Erro ao tentar acessar a estrutura. Posição inválida");
        }
    }

}