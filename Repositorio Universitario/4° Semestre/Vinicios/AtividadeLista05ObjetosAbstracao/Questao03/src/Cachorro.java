public class Cachorro extends Animal {
    public Cachorro(String nome) {
        super(nome);
    }

    @Override
    public void emitirSom() {
        System.out.println(nome + " está latindo: Au Au!");
    }

    @Override
    public void mover() {
        System.out.println(nome + " está correndo pelo quintal.");
    }

    @Override
    public void alimentar() {
        System.out.println(nome + " está comendo ração.");
    }
}
