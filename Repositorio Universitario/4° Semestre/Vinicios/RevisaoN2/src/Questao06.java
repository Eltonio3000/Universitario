import java.util.Scanner;

public class Questao06 {

    public static int lerInt(){
        Scanner sc = new Scanner(System.in);
        return sc.nextInt();
    }
    public static void Calculadora() throws OpcaoInvalidaException{
        System.out.print("""
                **calculadora**
                1 - divisão
                2 - exponeciação
                3 - raiz quadrada
                
                >>> 
                """);
        int escolha = lerInt();

        if(escolha < 1 || escolha > 3){
            throw new OpcaoInvalidaException();
        }

        switch(escolha){
            case 1:
                divisao();
            break;
            case 2:
                exponecia();
            break;
            case 3:
                raiz();
            break;
        }

    }
    private static void divisao(){
        System.out.println("informe o numerador: ");
        int numerador = lerInt();
        System.out.println("informe o denominador: ");
        int denominador = lerInt();

        if(denominador == 0){
            throw new ArithmeticException();
        } else {
            System.out.println("resultado: " + numerador/denominador);
        }
    }
    private static void exponecia(){
        System.out.println("informe a base: ");
        int base = lerInt();
        System.out.println("informe o expoente: ");
        int expoente = lerInt();

        if(base == 0 && expoente == 0){
            throw new ArithmeticException();
        } else {
            for(int i = 0; i < expoente; i++){
                base *= expoente;
            }
            System.out.println("resultado: " + base);
        }
    }
    private static void raiz(){
        System.out.println("informe o radical: ");
        double radical = lerInt();
        if( radical <= 0) {
            throw new ArithmeticException();
        } else {
            double raiz = Math.sqrt(radical);
            System.out.println("resultado: " + raiz);
        }

    }
}