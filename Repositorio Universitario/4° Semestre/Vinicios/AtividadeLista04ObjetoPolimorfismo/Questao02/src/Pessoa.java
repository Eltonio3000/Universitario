public class Pessoa {
    private String nome;

    public Pessoa(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void imprimirInformacoes() {
        System.out.println("Nome: " + nome);
    }
}
