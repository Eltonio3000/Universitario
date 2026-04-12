import java.io.IOException;
import java.io.FileWriter;


public class AlterarConteudoArquivo {

    public static void ChangeFileContent(String nameFile, String content) {
        try {
            FileWriter escritor = new FileWriter(nameFile);

            escritor.write(content);
            escritor.close();

            System.out.println("✅ Arquivo atualizado com sucesso!");
        } catch (Exception e){
            System.out.println("Erro ao atualizar arquivo!" + e.getMessage());
        }
    }
}
