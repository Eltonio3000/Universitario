import java.io.File;

public class VerificarExistenciaArquivo {
    public static void CheckExistenceFile(String nameFile){
        if (nameFile.endsWith(".txt")) {
            try {
                File file = new File(nameFile);
                if (file.exists() && file.isFile()) {
                    System.out.println("Arquivo existe.");
                } else {
                    System.out.println("Arquivo nao existe.");
                }
            } catch (Exception e) {
                System.out.println("erro ao verificar" + e.getMessage());
            }


        } else {
            try {
                File file = new File(nameFile + ".txt");
                if (file.exists() && file.isFile()) {
                    System.out.println("Arquivo existe.");
                } else {
                    System.out.println("Arquivo nao existe.");
                }
            } catch (Exception e) {
                System.out.println("erro ao verificar" + e.getMessage());
            }
        }
    }
}
