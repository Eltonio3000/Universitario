import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean continuar = true;

        while (continuar) {
            System.out.println("""
                    ===============================
                    🧩 MENU PRINCIPAL
                    1 - Contar linhas de um arquivo
                    2 - Mostrar linha específica
                    3 - Ordenar números (decrescente)
                    4 - Unificar dois arquivos de texto
                    0 - Sair
                    ===============================
                    Escolha uma opção:
                    """);

            int opcao = sc.nextInt();
            sc.nextLine(); // limpar buffer

            try {
                switch (opcao) {
                    case 1 -> {
                        System.out.print("Informe o caminho do arquivo: ");
                        String caminho = sc.nextLine();
                        Contagem.contarLinhas(caminho);
                    }

                    case 2 -> {
                        System.out.print("Informe o caminho do arquivo: ");
                        String caminho = sc.nextLine();
                        System.out.print("Informe o número da linha: ");
                        int numLinha = sc.nextInt();
                        AlterarLinha.mostrarLinha(caminho, numLinha);
                    }

                    case 3 -> {
                        System.out.print("Informe o arquivo de entrada: ");
                        String entrada = sc.nextLine();
                        System.out.print("Informe o arquivo de saída: ");
                        String saida = sc.nextLine();
                        Ordenar.ordenarArquivo(entrada, saida);
                    }

                    case 4 -> {
                        System.out.print("Informe o primeiro arquivo: ");
                        String arq1 = sc.nextLine();
                        System.out.print("Informe o segundo arquivo: ");
                        String arq2 = sc.nextLine();
                        System.out.print("Informe o nome do arquivo final: ");
                        String destino = sc.nextLine();
                        Unificar.unirArquivos(arq1, arq2, destino);
                    }

                    case 0 -> {
                        continuar = false;
                        System.out.println("👋 Encerrando o sistema...");
                    }

                    default -> System.out.println("❌ Opção inválida!");
                }
            } catch (Exception e) {
                System.out.println("⚠️ Erro: " + e.getMessage());
            }
        }

        sc.close();
    }
}
