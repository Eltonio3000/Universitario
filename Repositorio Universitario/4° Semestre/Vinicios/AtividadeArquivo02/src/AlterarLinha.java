import java.io.*;
import java.util.*;

class LinhaInvalidaException extends Exception {
    public LinhaInvalidaException(String mensagem) {
        super(mensagem);
    }
}

public class AlterarLinha {

    public static void mostrarLinha(String caminhoArquivo, int numeroLinha)
            throws LinhaInvalidaException, FileNotFoundException {

        File arquivo = new File(caminhoArquivo);
        if (!arquivo.exists()) {
            throw new FileNotFoundException("❌ Arquivo não encontrado: " + caminhoArquivo);
        }

        List<String> linhas = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(arquivo))) {
            String linha;
            while ((linha = br.readLine()) != null) {
                linhas.add(linha);
            }
        } catch (IOException e) {
            System.out.println("Erro ao ler o arquivo: " + e.getMessage());
        }

        if (numeroLinha < 1 || numeroLinha > linhas.size()) {
            throw new LinhaInvalidaException("❌ Linha inválida. Informe entre 1 e " + linhas.size());
        }

        System.out.println("📘 Conteúdo da linha " + numeroLinha + ":");
        System.out.println(linhas.get(numeroLinha - 1));
    }
}
