/*
Crie uma hierarquia de classes que representam diferentes tipos de veículos. Comece
com uma classe base Veículo que contenha atributos como marca e modelo. Em
seguida, crie duas subclasses, como Carro e Moto, que herdam da classe Veículo.
Adicione atributos específicos para cada tipo de veículo, como numPortas para carros
e cilindradas para motos. Implemente métodos que exibam informações específicas de
cada veículo. Crie uma classe Principal que irá exibir as informações de Carro e
Moto.
*/

public class Main {
    public static void main(String[] args) {
        Carro carro = new Carro("Toyota", "Corolla", 4);
        Moto moto = new Moto("Honda", "CB500", 500);

        System.out.println("=== Informações do Carro ===");
        carro.exibirInformacoes();

        System.out.println("\n=== Informações da Moto ===");
        moto.exibirInformacoes();
    }
}
