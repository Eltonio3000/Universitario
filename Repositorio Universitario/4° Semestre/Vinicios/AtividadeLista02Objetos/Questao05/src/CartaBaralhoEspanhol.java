import java.util.Random;

public class CartaBaralhoEspanhol extends Carta {

    private String[] naipes = {"Copas", "Paus", "Espadas", "Ouro"};

    public void pegarCarta() {
        Random random = new Random();
        valor = random.nextInt(7) + 1; // 1 a 7
        naipe = naipes[random.nextInt(naipes.length)];
    }
}
