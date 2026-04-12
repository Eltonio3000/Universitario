import java.io.*;
import java.util.*;

public class CalculaNota {

    public static void main(String[] args) {
        String inputFile = "escola_DB.txt";
        String outputFile = "media_2025.txt";

        try (BufferedReader br = new BufferedReader(new FileReader(inputFile));
             BufferedWriter bw = new BufferedWriter(new FileWriter(outputFile))) {

            String linha = br.readLine(); // Cabeçalho (ignorar)
            bw.write("Nome,Serie,Media");
            bw.newLine();

            while ((linha = br.readLine()) != null) {
                String[] partes = linha.split(",");

                if (partes.length < 6) continue; // ignora linhas inválidas

                String nome = partes[0];
                String serie = partes[2];
                double n1 = Double.parseDouble(partes[3]);
                double n2 = Double.parseDouble(partes[4]);
                double n3 = Double.parseDouble(partes[5]);

                double media = (n1 + n2 + n3) / 3.0;

                bw.write(nome + "," + serie + "," + String.format("%.2f", media));
                bw.newLine();
            }

            System.out.println("Arquivo 'media_2025.txt' gerado com sucesso!");

        } catch (FileNotFoundException e) {
            System.out.println("Erro: Arquivo de entrada não encontrado.");
        } catch (IOException e) {
            System.out.println("Erro de leitura ou gravação: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Erro inesperado: " + e.getMessage());
        }
    }
}
