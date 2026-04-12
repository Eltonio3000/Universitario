
import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int escolha = 0;

        do {
            System.out.println("--- SISTEMA DE PILHAS ---");
            System.out.println("1 - Gerenciar Tarefas (Exercício 1)");
            System.out.println("2 - Executar Exercício 2");
            System.out.println("3 - Executar Exercício 3");
            System.out.println("4 - finalizar.");
            System.out.print("Escolha: ");
            escolha = ler.nextInt();

            switch (escolha) {
                case 1:
                    PilhaTarefa tarefas = new PilhaTarefa();
                    tarefas.menu();
                    break;
                case 2:
                    OperacoesPilha.executarExercicio2();
                    break;
                case 3:
                    OperacoesPilha.executarExercicio3();
                    break;
                case 4:
                    System.out.println("tchau!");
                    break;
                default:
                    System.out.println("Opção inválida!");
            }
        } while (escolha != 4);
    }
}