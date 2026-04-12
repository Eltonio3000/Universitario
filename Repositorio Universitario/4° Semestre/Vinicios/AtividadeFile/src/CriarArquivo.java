import java.io.FileWriter;
import java.io.IOException;

public class CriarArquivo {
    public static void CreateFile(String name){
        if(name.endsWith(".txt")){
            try {
                FileWriter fw = new FileWriter("" + name);
                String texto = "Arquivo criado pelo algoritmo *AtividadeFile*";
                fw.write(texto);
                System.out.println("Arquivo criado com sucesso");
                fw.close();

            } catch (IOException e) {
                System.out.println("Erro ao criar arquivo" + e.getMessage());
            }
        } else {
            try {
                FileWriter fw = new FileWriter(name + ".txt");
                String texto = "Arquivo criado pelo algoritmo *AtividadeFile*";
                fw.write(texto);
                System.out.println("Arquivo criado com sucesso");
                fw.close();


            } catch (IOException e) {
                System.out.println("Erro ao criar arquivo" + e.getMessage());
            }
        }
    }
}
