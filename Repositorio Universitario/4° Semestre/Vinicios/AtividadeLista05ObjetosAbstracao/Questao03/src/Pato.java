public class Pato extends Animal {
    public Pato(String nome) {
        super(nome);
    }

    @Override
    public void emitirSom() {
        System.out.println(nome + " está grasnando: Quack!");
    }

    @Override
    public void mover() {
        System.out.println(nome + " está nadando no lago.");
    }

    @Override
    public void alimentar() {
        System.out.println(nome + " está comendo grãos.");
    }
}
