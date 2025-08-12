public class Gato extends Animal {
    private String corPelagem;

    public Gato(String nome, int idade, String corPelagem) {
        super(nome, idade);
        this.corPelagem = corPelagem;
    }

    @Override
    public void exibirInformacoes() {
        super.exibirInformacoes();
        System.out.println("Cor da pelagem: " + corPelagem);
    }

    @Override
    public void emitirSom() {
        System.out.println(nome + " está miando: Miau!");
    }

    public void arranhar() {
        System.out.println(nome + " está arranhando o sofá!");
    }
}
