import java.util.Scanner;

public class SistemaHistorico {

    public static String lerString() {
        Scanner sc = new Scanner(System.in);
        return sc.nextLine();
    }

    public static int lerInt() {
        Scanner sc = new Scanner(System.in);
        return sc.nextInt();
    }

    public static void Interfece() {
        int escolha = 1;
        String stop;
        boolean continuar = true;
        while (continuar) {
            System.out.println("""
                    Sistema Historico
                    
                    1 - Visualizar Missões
                    2 - Adicionar Missões
                    3 - Remover Missão
                    0 - voltar
                    
                    >>> """);
            escolha = lerInt();
            switch (escolha){
                case 1:
                    navegarMissao();
                break;
                case 2:
                    System.out.println("informe o nome da missão:");
                    String tituloMissao = lerString();
                    System.out.println("informe a descrição da missão");
                    String descricao = lerString();
                    adicionarMissao(new Missoes(tituloMissao, descricao));
                    stop = lerString();
                break;
                case 3:
                    System.out.println("informe o nome da missão:");
                    tituloMissao = lerString();
                    removerMissao(tituloMissao);
                    stop = lerString();
                break;
                case 0:
                    continuar = false;
                    break;
            }
        }
    }

    public static void navegarMissao(){
        boolean continuar = true;
        int comando = 1;
        System.out.println("""
                comandos de navegação
                
                1 - frente
                2 - tras
                0 - sair da navegação
                
                >>> """);
        missaoAtual();
        while (continuar && comando != 0) {
            comando = lerInt();
            if (comando == 1){
                proximaMissao();
            } else if (comando == 2) {
                missaoAnterior();
            } else if (comando == 3) {
                break;
            } else if (comando == 0) {
                continuar = false;
                break;
            } else {
                System.out.println("""
                erro
                
                comandos de navegação
                
                1 - frente
                2 - tras
                0 - sair da navegação
                
                >>> """);
            }
        }
    }

    public static void DadosIniciaisMissoes() {
        adicionarMissao(new Missoes("apollo", "bla bla bla bla"));
        adicionarMissao(new Missoes("sputinik", "bla bla bla bla"));
        adicionarMissao(new Missoes("falcon", "bla bla bla bla"));
        adicionarMissao(new Missoes("martins", "bla bla bla bla"));
        adicionarMissao(new Missoes("patck", "bla bla bla bla"));
    }
    private static No inicio;
    private static No fim;
    private static No atual;

    public SistemaHistorico() {
        inicio = null;
        fim = null;
        atual = null;
    }

    public static void adicionarMissao(Missoes m) {
        No novo = new No(m);
        if (inicio == null) {
            inicio = fim = atual = novo;
        } else {
            fim.proximo = novo;
            novo.anterior = fim;
            fim = novo;
        }
        System.out.println("Missão adicionada! ");
    }

    public static void removerMissao(String nome) {
        No temp = inicio;
        while (temp != null) {
            if (temp.missao.toString().contains(nome)) {
                if (temp.anterior != null) temp.anterior.proximo = temp.proximo;
                else inicio = temp.proximo;

                if (temp.proximo != null) temp.proximo.anterior = temp.anterior;
                else fim = temp.anterior;

                System.out.println("Missão removida: " + nome);
                return;
            }
            temp = temp.proximo;
        }
        System.out.println("Missão não encontrada: " + nome);
    }

    public static void proximaMissao() {
        if (atual != null && atual.proximo != null) {
            atual = atual.proximo;
            System.out.println("➡️ Próxima " + atual.missao);
        } else {
            System.out.println("Nenhuma próxima missão.");
        }
    }

    public static void missaoAnterior() {
        if (atual != null && atual.anterior != null) {
            atual = atual.anterior;
            System.out.println("⬅️ Missão anterior " + atual.missao);
        } else {
            System.out.println("Nenhuma missão anterior.");
        }
    }

    public static void missaoAtual() {
        inicio = atual;
        System.out.println("atual " + atual.missao);
    }
}

