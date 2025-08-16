public abstract class Animal {
    protected String nome;

    public Animal(String nome) {
        this.nome = nome;
    }

    public abstract void emitirSom();
    public abstract void mover();
    public abstract void alimentar();

    public void exibirInfo() {
        System.out.println("Animal: " + nome);
    }
}
