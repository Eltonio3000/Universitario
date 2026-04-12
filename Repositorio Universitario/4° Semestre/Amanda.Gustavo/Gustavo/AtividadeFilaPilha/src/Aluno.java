public class Aluno {
    private int id;
    private String nome;
    private double nota1, nota2, nota3;

    public Aluno(int id, String nome, double nota1, double nota2, double nota3) {
        this.id = id;
        this.nome = nome;
        this.nota1 = nota1;
        this.nota2 = nota2;
        this.nota3 = nota3;
    }

    public int getId() { return id; }
    public String getNome() { return nome; }

    public double getMedia() { return (nota1 + nota2 + nota3) / 3.0; }

    @Override
    public String toString() {
        return id + " - " + nome + " - Média: " + String.format("%.2f", getMedia()) + "\n";
    }
}
