import java.io.*;
import java.util.*;

public class Unificar {

    public static void unirArquivos(String arquivo1, String arquivo2, String destino) {
        try {
            File arq1 = new File(arquivo1);
            File arq2 = new File(arquivo2);

            if (!arq1.exists() || !arq2.exists()) {
                throw new FileNotFoundException("❌ Um dos arquivos não foi encontrado.");
            }

            List<String> linhas1 = new ArrayList<>();
            List<String> linhas2 = new ArrayList<>();

            try (BufferedReader br1 = new BufferedReader(new FileReader(arq1));
                 BufferedReader br2 = new BufferedReader(new FileReader(arq2))) {

                String l1, l2;
                while ((l1 = br1.readLine()) != null && (l2 = br2.readLine()) != null) {
                    linhas1.add(l1);
                    linhas2.add(l2);
                }
            }

            try (BufferedWriter bw = new BufferedWriter(new FileWriter(destino))) {
                for (int i = 0; i < linhas1.size(); i++) {
                    bw.write(linhas1.get(i) + ", " + linhas2.get(i));
                    bw.newLine();
                }
            }

            System.out.println("✅ Arquivo concatenado com sucesso em " + destino);

        } catch (IOException e) {
            System.out.println("Erro: " + e.getMessage());
        }
    }
}
