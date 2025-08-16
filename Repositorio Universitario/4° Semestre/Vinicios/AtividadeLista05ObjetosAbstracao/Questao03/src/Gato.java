public class Gato extends Animal {
    public Gato(String nome) {
        super(nome);
    }

    @Override
    public void emitirSom() {
        System.out.println(nome + " está miando: Miau!");
    }

    @Override
    public void mover() {
        System.out.println(nome + " está andando silenciosamente.");
    }

    @Override
    public void alimentar() {
        System.out.println(nome + " está comendo sachê.");
    }
}
