public class Professor extends Pessoa {
    private String disciplina;

    public Professor(String nome, String disciplina) {
        super(nome);
        this.disciplina = disciplina;
    }

    @Override
    public void imprimirInformacoes() {
        System.out.println("Professor: " + getNome());
        System.out.println("Disciplina: " + disciplina);
    }
}