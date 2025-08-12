import java.util.Scanner;

public class Main {

    public static int lerInt(){
        Scanner ler = new Scanner(System.in);
        return ler.nextInt();
    }

    public static void main(String[] args) {
        int acao;
        int valor;
        boolean continua = true;
        ListaLigada lista = new ListaLigada();

        while(continua){
            acao = 0;
            System.out.println("""
                    Selecione a ação...
                    
                    1 - Adicionar valor a lista
                    2 - buscar valor a lista
                    3 - imprimir lista
                    4 - Remover valor a lista
                    5 - para fechar o programa
                    
                    """);
            acao = lerInt();

            switch (acao) {
                case 1:
                    valor = 1;
                    while(valor != 0) {
                        System.out.println("Digite um valor diferente de 0(digite 0 para sair): ");
                        valor = lerInt();
                        if(valor != 0) {
                            lista.inserirInicio(valor);
                        }

                        if(valor == 0){
                            System.out.println("Saindo...");
                        }
                    }
                break;
/*
                    1.Implemente um metodo buscar(int valor) que retorne true se o valor estiver na lista,
                      e false caso contrário. Faça a busca sem usar metodos prontos de biblioteca.
*/
                case 2:
                    valor = 1;
                    while(valor == 1) {
                        int numDesejado = 0;
                        System.out.println("Qual valor quer encontrar na lista?");
                        numDesejado = lerInt();
                        lista.Buscar(numDesejado);
                        if(lista.Buscar(numDesejado)){
                            System.out.println("Valor encontrado!");
                        } else {
                            System.out.println("Valor não encontrado");
                        }
                        System.out.println("""
                                sair?
                                1 - não / 2 - sim
                                """);
                        valor = lerInt();
                        }
                break;
                case 3:
                    lista.imprimir();
                break;
/*
                 2. Crie um metodo remover(int valor) que remove o primeiro nó que contém o valor informado.
                    O metodo deve funcionar mesmo que o valor esteja no início ou fim da lista.
*/
                case 4:
                    valor = 1;
                    while(valor == 1) {
                        int aux = 0;
                        System.out.println("Qual valor quer remover na lista?");
                        aux = lerInt();
                        lista.Remover(aux);
                        if(lista.Remover(aux) == true){
                            System.out.println("Valor removido!");
                        } else if(lista.Remover(aux) == false) {
                            System.out.println("Valor não encontrado");
                        }
                        System.out.println("""
                                sair?
                                1 - não / 2 - sim
                                """);
                        valor = lerInt();
                    }
                break;
                case 5:
                    continua = false;
                break;
            }

        }
    }

}