public class Carro extends Veiculo {
    public Carro(String marca, String modelo, int anoFabricacao) {
        super(marca, modelo, anoFabricacao);
    }

    @Override
    public void mover() {
        System.out.println("O carro está se movendo pela estrada.");
    }
}
