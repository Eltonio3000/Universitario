import java.io.*;
import java.util.*;

public class Ordenar {

    public static void ordenarArquivo(String entrada, String saida) {
        try {
            File arquivoEntrada = new File(entrada);
            if (!arquivoEntrada.exists()) {
                throw new FileNotFoundException("❌ Arquivo não encontrado: " + entrada);
            }

            BufferedReader br = new BufferedReader(new FileReader(arquivoEntrada));
            String linha = br.readLine();
            br.close();

            if (linha == null || linha.isEmpty()) {
                System.out.println("⚠️ Arquivo vazio.");
                return;
            }

            String[] numerosStr = linha.split(",");
            List<Integer> numeros = new ArrayList<>();

            for (String n : numerosStr) {
                numeros.add(Integer.parseInt(n.trim()));
            }

            numeros.sort(Collections.reverseOrder());

            FileWriter fw = new FileWriter(saida);
            for (int i = 0; i < numeros.size(); i++) {
                fw.write(numeros.get(i) + (i < numeros.size() - 1 ? "," : ""));
            }
            fw.close();

            System.out.println("📄 Original: " + linha);
            System.out.println("📈 Ordenado: " + numeros);

        } catch (IOException e) {
            System.out.println("Erro ao ler ou gravar arquivo: " + e.getMessage());
        }
    }
}
