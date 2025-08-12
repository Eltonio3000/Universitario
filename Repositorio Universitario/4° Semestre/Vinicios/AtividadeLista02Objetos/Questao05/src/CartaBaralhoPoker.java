import java.util.Random;

public class CartaBaralhoPoker extends Carta {

    private String[] naipes = {"Copas", "Paus", "Espadas", "Ouro"};

    public void pegarCarta() {
        Random random = new Random();
        valor = random.nextInt(13) + 1; // 1 a 13
        naipe = naipes[random.nextInt(naipes.length)];
    }
}
