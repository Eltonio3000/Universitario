public class GameOverException extends RuntimeException {
    public GameOverException() {
        super("Fim de Jogo. Você não perdeu!");
    }
}
