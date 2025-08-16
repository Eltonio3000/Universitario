public class Carro extends Veiculo {
    private int numPortas;

    public Carro(String marca, String modelo, int numPortas) {
        super(marca, modelo);
        this.numPortas = numPortas;
    }

    @Override
    public void exibirInformacoes() {
        super.exibirInformacoes();
        System.out.println("Número de portas: " + numPortas);
    }
}
