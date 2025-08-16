public class Carta {
    protected int valor;
    protected String naipe;

    public Carta() {

    }

    public void exibirCarta() {
        System.out.println("Carta: " + valor + " de " + naipe);
    }
}
