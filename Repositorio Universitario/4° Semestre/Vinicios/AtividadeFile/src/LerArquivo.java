import java.io.FileReader;

public class LerArquivo {
    public static void Readfile(String name) {
        try {
            FileReader fr = new FileReader(name);
            int letra;
            System.out.println("\n\n");
            while ((letra = fr.read()) != -1) {
            System.out.print((char)letra);
            }
            System.out.println("\n\n");
            fr.close();
        } catch (Exception e) {
            System.out.println("Erro ao ler arquivo: " + e.getMessage());
        }
    }
}
