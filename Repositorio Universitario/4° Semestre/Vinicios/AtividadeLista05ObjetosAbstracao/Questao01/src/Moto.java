public class Moto extends Veiculo {
    public Moto(String marca, String modelo, int anoFabricacao) {
        super(marca, modelo, anoFabricacao);
    }

    @Override
    public void mover() {
        System.out.println("A moto está acelerando pela pista.");
    }
}
