import java.util.Scanner;

public class Main {

    public static String lerStr() {
        Scanner ler = new Scanner(System.in);
        return ler.nextLine();
    }

    public static void main(String[] args) {
        System.out.println("Criação de arquivo\ndigite o nome para o arquivo : ");
        String name = lerStr();

        CriarArquivo.CreateFile(name);

        System.out.print("digite o nome do arquivo novamente para verificar se ele realmente exite...\n\n>>> ");
        name = lerStr();

        VerificarExistenciaArquivo.CheckExistenceFile(name);

        System.out.println("\nvamos ler o conteudo desse arquivo");
        if (!name.endsWith(".txt")) {
            name += ".txt";
        }
        LerArquivo.Readfile(name);

        System.out.println("\nAgora digite o conteudo desse arquivo(digite 'FIM' para terminar)\n\n");
        String content = lerStr();

        AlterarConteudoArquivo.ChangeFileContent(name, content);
        LerArquivo.Readfile(name);

    }
}