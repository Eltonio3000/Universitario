/*
Crie uma classe abstrata chamada Forma com métodos abstratos para calcular área e
perímetro. Implemente subclasses concretas como Círculo, Quadrado e Triângulo que
estendem a classe Forma. Implemente os métodos abstratos nas subclasses para calcular a área
e o perímetro específicos de cada forma.
*/

public class Main {
    public static void main(String[] args) {
        Forma[] formas = {
                new Circulo(5),
                new Quadrado(4),
                new Triangulo(3, 4, 5)
        };

        for (Forma forma : formas) {
            System.out.println(forma.getClass().getSimpleName() + ":");
            forma.exibirResultados();
            System.out.println();
        }
    }
}
