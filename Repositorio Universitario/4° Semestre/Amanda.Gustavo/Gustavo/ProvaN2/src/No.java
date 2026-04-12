public class No {
    Missoes missao;
    No anterior;
    No proximo;

    public No(Missoes missao) {
        this.missao = missao;
        this.anterior = null;
        this.proximo = null;
    }


}
