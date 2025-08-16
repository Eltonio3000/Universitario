/*
Crie uma classe abstrata Veiculo com os atributos e métodos comuns a todos os veículos
(marca, modelo, ano de fabricação). Crie classes concretas para diferentes tipos de veículos
(carro, moto, bicicleta, etc.).
*/

public class Main {
    public static void main(String[] args) {
        Veiculo carro = new Carro("Toyota", "Corolla", 2022);
        Veiculo moto = new Moto("Honda", "CB500", 2021);

        carro.exibirInfo();
        carro.mover();
        System.out.println();

        moto.exibirInfo();
        moto.mover();
        System.out.println();
    }
}
