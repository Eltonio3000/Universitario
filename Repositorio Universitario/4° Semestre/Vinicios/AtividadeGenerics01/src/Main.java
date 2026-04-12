public class Main {
    public static void main(String[] args) {
        System.out.println("questão 01");
        Caixa<String> caixaString = new Caixa<>();
        caixaString.setValor("Olá, mundo!");
        System.out.println("Valor da caixa de String: " + caixaString.getValor());

        Caixa<Integer> caixaInt = new Caixa<>();
        caixaInt.setValor(42);
        System.out.println("Valor da caixa de Integer: " + caixaInt.getValor());

        System.out.println("questão 02");
        Integer[] numeros = {1, 2, 3, 4, 5};
        Double[] reais = {1.1, 2.2, 3.3};
        String[] palavras = {"Java", "Genéricos", "são", "legais"};

        System.out.print("Array de inteiros: ");
        Vetor.imprimirArray(numeros);

        System.out.print("Array de doubles: ");
        Vetor.imprimirArray(reais);

        System.out.print("Array de strings: ");
        Vetor.imprimirArray(palavras);

        System.out.println("questão 03");
        Calculadora<Integer> calcInt = new Calculadora<>();
        System.out.println("Soma (Integer): " + calcInt.somar(10, 5));
        System.out.println("Subtração (Integer): " + calcInt.subtrair(10, 5));

        Calculadora<Double> calcDouble = new Calculadora<>();
        System.out.println("Soma (Double): " + calcDouble.somar(3.5, 2.8));
        System.out.println("Subtração (Double): " + calcDouble.subtrair(3.5, 2.8));
    }
}