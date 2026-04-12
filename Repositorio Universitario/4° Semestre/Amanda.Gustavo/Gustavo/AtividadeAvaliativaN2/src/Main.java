/*
Implementar um algoritmo em java que importe o arquivo txt em anexo, faça o
empilhamento dos caracteres das linhas ímpares e o enfileiramento dos caracteres das linhas
pares.
a. Os caracteres em branco devem ser ignorados.
*/

import java.util.*;
import java.util.Queue;

public class Main {
    public static void main(String[] args) {
        Stack<Character> pilha = new Stack<Character>();
        Queue<Character> fila = new LinkedList<>();
        LerArquivo lerArquivo = new LerArquivo();
        lerArquivo.ReaderFile(pilha, fila);
    }
}