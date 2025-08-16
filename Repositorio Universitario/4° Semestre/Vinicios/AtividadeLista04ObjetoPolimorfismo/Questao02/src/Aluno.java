public class Aluno extends Pessoa {
    private double notas;

    public Aluno(String nome, double notas) {
        super(nome);
        this.notas = notas;
    }

    @Override
    public void imprimirInformacoes() {
        System.out.println("Aluno: " + getNome());
        System.out.println("Nota: " + notas);
    }
}
