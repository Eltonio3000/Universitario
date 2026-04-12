import java.io.FileReader;
import java.util.Date;
import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;

public class Questao08 {

    public static String lerString(){
        Scanner sc = new Scanner(System.in);
        return sc.nextLine();
    }

    public static int lerInt(){
        Scanner sc = new Scanner(System.in);
        return sc.nextInt();
    }

    public static void SalvarDados(){
        boolean repet = true;
        do {
            System.out.println("informe os dados a serem salvos no arquivo 'Meus Dados'");
            System.out.print("informe o nome: ");
            String nome = lerString();
            System.out.print("informe a data de nascimento(DD/MM/YYYY): ");
            String data = lerString();
            System.out.print("informe a profissão: ");
            String profissao = lerString();
            System.out.println("informe o e-mail");
            String gmail = lerString();
            System.out.print("informe o telefone: ");
            String telefone = lerString();

            GravarDados(nome, data, profissao, gmail, telefone);

            System.out.println("deseja continuar?\n1 - sim\n2 - não\n\n>>> ");
            int escolha = lerInt();
            if(escolha == 2){
                repet = false;
            }
        } while(repet);

        ImprimirArquivo();

    }

    public static void GravarDados(String nome, String data, String profissao, String email, String telefone){
        try {
            FileWriter escritor = new FileWriter("Meus Dados.txt");

            escritor.write(
                    """
                    Nome: """ + nome + """
                    \nData Nascimento: """ + data + """
                    \nProfissão: """ + profissao + """
                    \nEmail: """ + email + """
                    \nTelefone: """ + telefone
                    );
            escritor.close();

            System.out.println("✅ Dados salvos com sucesso!");
        } catch (Exception e){
            System.out.println("Erro ao salvar dados!" + e.getMessage());
        }
    }

    public static void ImprimirArquivo() {
        try {
            FileReader fr = new FileReader("Meus Dados.txt");
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