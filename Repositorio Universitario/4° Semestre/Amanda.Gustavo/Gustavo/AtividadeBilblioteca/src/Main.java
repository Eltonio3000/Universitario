import java.util.*;

public class Main {

    public static int lerInt() {
        Scanner ler = new Scanner(System.in);
        return ler.nextInt();
    }

    public static String lerString() {
        Scanner ler = new Scanner(System.in);
        return ler.nextLine();
    }

    public static void main(String[] args) {
        String categoria;
        String nome;
        String livro;

        ArrayList<Estante> estante = new ArrayList<>();
        Queue<String> filaEmprestimos = new LinkedList<>();
        Stack<String> pilhaDevolucoes = new Stack<>();
        PriorityQueue<String> filaPrioritaria = new PriorityQueue<>();

        boolean continua = true;

        while (continua) {
            System.out.println("""
                    \n📚 SISTEMA DE BIBLIOTECA
                    =============================
                    1 - Mostrar estante
                    2 - Adicionar livro à estante
                    3 - Remover livro da estante
                    4 - Fazer pedido de empréstimo (Fila)
                    5 - Processar empréstimo
                    6 - Registrar devolução (Pilha)
                    7 - Processar devolução
                    8 - Adicionar livro à fila prioritária
                    9 - Processar livro prioritário
                    0 - Sair
                    """);

            System.out.print("Escolha uma opção: ");
            int acao = lerInt();

            switch (acao) {
                case 1 :
                    Estante.mostrarEstante(estante);
                break;

                case 2 :
                    System.out.println("Informe o nome e categoria do livro:");
                    nome = lerString();
                    categoria = lerString();
                    Estante.addBook(nome, categoria, estante);
                break;

                case 3 :
                    System.out.println("Informe o nome e categoria do livro a remover:");
                    nome = lerString();
                    categoria = lerString();
                    Estante.removeBook(nome, categoria, estante);
                break;

                case 4 :
                    System.out.println("Nome do aluno para pedido de empréstimo:");
                    String nomeAluno = lerString();
                    filaEmprestimos.add(nomeAluno);
                    System.out.println("✅ Pedido de empréstimo adicionado à fila!");
                break;

                case 5 :
                    if (!filaEmprestimos.isEmpty())
                        System.out.println("👩‍💼 Empréstimo processado: " + filaEmprestimos.poll());
                    else
                        System.out.println("⚠️ Nenhum pedido de empréstimo na fila.");
                break;

                case 6 :
                    System.out.println("Informe o nome do livro devolvido:");
                    livro = lerString();
                    pilhaDevolucoes.push(livro);
                    System.out.println("✅ Livro adicionado à pilha de devoluções!");
                break;

                case 7 :
                    if (!pilhaDevolucoes.isEmpty())
                        System.out.println("📦 Processando devolução do livro: " + pilhaDevolucoes.pop());
                    else
                        System.out.println("⚠️ Nenhum livro na pilha de devoluções.");
                break;

                case 8 :
                    System.out.println("Informe o nome do livro muito requisitado:");
                    livro = lerString();
                    filaPrioritaria.add(livro);
                    System.out.println("✅ Livro adicionado à fila prioritária!");
                break;

                case 9 :
                    if (!filaPrioritaria.isEmpty())
                        System.out.println("🚀 Processando livro prioritário: " + filaPrioritaria.poll());
                    else
                        System.out.println("⚠️ Nenhum livro na fila prioritária.");
                break;

                case 0 :
                    continua = false;
                    System.out.println("📕 Encerrando o sistema...");
                break;

                default : System.out.println("❌ Opção inválida!"); break;
            }
        }
    }
}
