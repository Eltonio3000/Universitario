import java.util.Scanner;

public class Main {

    public static String lerString(){
        Scanner sc = new Scanner(System.in);
        return sc.nextLine();
    }

    public static int lerInt(){
        Scanner sc = new Scanner(System.in);
        return sc.nextInt();
    }

    public static void main(String[] args) throws Exception {
        System.out.println("""
                qual quer validar primeiro?
                1 - questao 6
                2 - questao 7
                3 - questao 8
                """);
        int escolha = lerInt();
        switch(escolha){
            case 1:
                Questao06.Calculadora();
            break;
            case 2:
                Questao07.Cartas();
            break;
            case 3:
                Questao08.SalvarDados();
            break;
        }
    }
}

/*
8) (Valor: 1,5) Crie em javascript uma classe chamada SalvarDados. Essa classe deverá escrever
em um arquivo chamado “Meus Dados.txt”. O usuário deverá informar os seguintes dados:
nome completo, data de nascimento, profissão, email e telefone. Após cada inserção, o
sistema deve perguntar ao usuário se deseja informar mais um registro ao arquivo ou encerrar.
Caso deseje encerrar, deverá ser informado na tela todos os registros existentes no arquivo
atualmente. Exemplo:
Meus Dados.txt:
Nome: Sonic “Ouriço” de Carvalho
Data Nascimento: 23/06/91
Profissão: Atleta (Corredor)
Telefone: 2501-2020
E-mail: sonic@sega.com
Nome: Mário Nascimento Brother
Data Nascimento: 13/09/85
Profissão: Encanador
Telefone: 0504-2023
E-mail: super_mario@nintendo.com.jp
*/