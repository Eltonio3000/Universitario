import java.util.Scanner;
import java.util.Collections;
import java.util.LinkedList;

public class Main {

    public static int lerInt(){
        Scanner ler = new Scanner(System.in);
        return ler.nextInt();
    }
    public static String lerString(){
        Scanner ler = new Scanner(System.in);
        return ler.nextLine();
    }

    public static void main(String[] args) {
        LinkedList<String> lista = new LinkedList<String>();

        int acao;
        int valor;
        boolean continua = true;

        while(continua){
            acao = 0;
            System.out.println("""
                    Selecione a ação...
                    
                    1 - Imprimir lista ordenada
                    2 - Adicionar elemento
                    3 - Remover elemento
                    4 - Alterar letra dos elementos
                    
                    """);
            acao = lerInt();

            switch (acao) {
                case 1:
                    System.out.println("imprimindo...");
                    Collections.sort(lista);
                    for ( String s : lista ) {
                        System.out.println(s);
                    }
                    break;
                case 2:
                    System.out.println("digite um texto:");
                    String texto = lerString();
                    lista.add(texto);
                    break;
                case 3:
                    System.out.println("Qual texto quer remover?");
                    texto = lerString();
                    for ( String s : lista ) {
                        if (texto.equalsIgnoreCase(s)) {
                            lista.remove(s);
                        }
                    }
                    System.out.println("Removido com sucesso!");
                    break;
                case 4:
                    System.out.println("Qual letra quer substituir?");
                    String caracterUm = lerString();
                    System.out.println("Qual letra quer colocar no lugar?");
                    String caracterDois = lerString();
                    lista.replaceAll(s -> s.replaceAll(caracterUm, caracterDois));

                    System.out.println("caracter alterado em toda a lista!");
                    break;
            }
        }
    }
}