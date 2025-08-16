/*
Crie um sistema para representar um jogo de cartas. Desenvolva uma classe Carta
com atributos como valor e naipe e um metodo chamado exibirCarta(). Em seguida,
crie subclasses como CartaBaralhoEspanhol e CartaBaralhoPoker que herdam da
classe Carta. Dentro da classe CartaBaralhoEspanhol crie um metodo chamado
pegarCarta(), que irá gerar um valor aleatório entre 1 e 7 para o número da carta e seu
naipe (Copas, Paus, Espadas e Ouro). Na classe CartaBaralhoPoker crie o metodo
pegarCarta(), que irá gerar um valor aleatório entre 1 e 13 e seu naipe (Copas, Paus,
Espadas e Ouro). Crie uma classe Principal para exibir as informações de cada uma
das classes criadas anteriormente.
*/

public class Main {
    public static void main(String[] args) {
        System.out.println("=== Baralho Espanhol ===");
        CartaBaralhoEspanhol cartaEspanhola = new CartaBaralhoEspanhol();
        cartaEspanhola.pegarCarta();
        cartaEspanhola.exibirCarta();

        System.out.println("\n=== Baralho de Poker ===");
        CartaBaralhoPoker cartaPoker = new CartaBaralhoPoker();
        cartaPoker.pegarCarta();
        cartaPoker.exibirCarta();
    }
}
