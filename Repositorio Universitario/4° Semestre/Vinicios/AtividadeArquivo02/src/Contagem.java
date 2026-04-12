import java.io.*;

class ArquivoNaoEncontradoException extends Exception {
    public ArquivoNaoEncontradoException(String mensagem) {
        super(mensagem);
    }
}

public class Contagem {

    public static void contarLinhas(String caminhoArquivo) throws ArquivoNaoEncontradoException {
        File arquivo = new File(caminhoArquivo);

        if (!arquivo.exists()) {
            throw new ArquivoNaoEncontradoException("❌ Arquivo não encontrado: " + caminhoArquivo);
        }

        int contador = 0;
        try (BufferedReader br = new BufferedReader(new FileReader(arquivo))) {
            while (br.readLine() != null) {
                contador++;
            }
            System.out.println("📄 O arquivo contém " + contador + " linhas.");
        } catch (IOException e) {
            System.out.println("Erro ao ler o arquivo: " + e.getMessage());
        }
    }
}
