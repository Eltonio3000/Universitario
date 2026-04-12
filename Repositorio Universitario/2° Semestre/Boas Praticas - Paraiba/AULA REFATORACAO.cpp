// exercicio 1

public class Somatoria{
    public static void main(String[] args){
        int soma = 0;

        System.out.println("Somando a e b");
        int a = 3;
        int b = 7;
        soma = a + b;
        System.out.println("resultado:" + soma);

        System.out.println("Somando x e y");
        int x = 1372;
        int y = 2816;
        soma = x + y;
        System.out.println("resultado:" + soma);

        System.out.println("Somando w e z");
        int w = 271;
        int z = 865;
        soma = w + z;
        System.out.println("resultado" + soma);
    }
}

///////////////////

public class Somatoria {
    public static void main(String[] args) {
        int a = 3;
        int b = 7;
        somaValores(a, b, "a", "b");

        int x = 1372;
        int y = 2816;
        somaValores(x, y, "x", "y");

        int w = 271;
        int z = 865;
        somaValores(w, z, "w", "z");
    }

    public static void somaValores(int num1, int num2, String nome1, String nome2) {
        int soma = num1 + num2;
        System.out.println("A soma de " + nome1 + " e " + nome2 + " da o resultado: " + soma);
    }
}

//exercicio 2

b. Dividir variável temporária

// exercicio 3

sT = somaTotal
tT = media 
d = diferença