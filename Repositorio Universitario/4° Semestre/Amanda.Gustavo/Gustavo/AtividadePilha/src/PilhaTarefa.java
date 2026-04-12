import java.util.Stack;
import java.util.Scanner;

public class PilhaTarefa {
    private Stack<String> pilha = new Stack<>();

    public void adicionarTarefa(String tarefa) {
        pilha.push(tarefa);
    }

    public void obterTarefa() {
        if (!pilha.isEmpty()) {
            System.out.println("Próxima tarefa: " + pilha.pop());
        } else {
            System.out.println("Nenhuma tarefa na pilha.");
        }
    }

    public void mostrarTarefas() {
        for (String tarefa : pilha) {
        System.out.println("Tarefas atuais: " + tarefa);
        }
    }

    public void menu() {
        Scanner ler = new Scanner(System.in);
        int opcao;
        do {
            System.out.println("\n--- MENU TAREFAS ---");
            System.out.println("1 - Inserir tarefa");
            System.out.println("2 - Obter próxima tarefa");
            System.out.println("3 - Mostrar tarefas");
            System.out.println("0 - Sair");
            System.out.print("Escolha: ");
            opcao = ler.nextInt();
            ler.nextLine();

            switch (opcao) {
                case 1:
                    System.out.print("Digite a tarefa: ");
                    String tarefa = ler.nextLine();
                    adicionarTarefa(tarefa);
                    break;
                case 2:
                    obterTarefa();
                    break;
                case 3:
                    mostrarTarefas();
                    break;
                case 0:
                    System.out.println("Saindo...");
                    break;
                default:
                    System.out.println("Opção inválida!");
            }
        } while (opcao != 0);
    }
}
