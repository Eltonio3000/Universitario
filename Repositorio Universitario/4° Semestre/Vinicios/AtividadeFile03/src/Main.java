import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        String arquivo = "media_2025.txt";
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite o número da série (1 a 5): ");
        int serieEscolhida = sc.nextInt();
        sc.close();

        try (BufferedReader br = new BufferedReader(new FileReader(arquivo))) {
            String linha = br.readLine(); // Ignorar cabeçalho
            boolean encontrou = false;

            System.out.println("\nAlunos da série " + serieEscolhida + ":");
            while ((linha = br.readLine()) != null) {
                String[] partes = linha.split(",");

                if (partes.length < 3) continue;

                String nome = partes[0];
                int serie = Integer.parseInt(partes[1]);
                double media = Double.parseDouble(partes[2].replace(",", "."));

                if (serie == serieEscolhida) {
                    System.out.printf("Aluno: %-25s | Média: %.2f%n", nome, media);
                    encontrou = true;
                }
            }

            if (!encontrou) {
                System.out.println("Nenhum aluno encontrado para a série informada.");
            }

        } catch (FileNotFoundException e) {
            System.out.println("Erro: Arquivo 'media_2025.txt' não encontrado.");
        } catch (IOException e) {
            System.out.println("Erro ao ler o arquivo: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Erro inesperado: " + e.getMessage());
        }
    }
}
