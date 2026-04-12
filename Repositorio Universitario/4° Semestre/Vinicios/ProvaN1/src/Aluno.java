import java.util.ArrayList;

public class Aluno extends Pessoa {
    private int matricula;


    public Aluno(String nome, int idade, int matricula) {
        super(nome, idade);
        this.matricula = matricula;
    }



    public void cadastrarAluno(ArrayList<Aluno> lista, Aluno aluno) {
        lista.add(aluno);
        System.out.println("Aluno cadastrado com sucesso!");
    }

    public void listarAlunos(ArrayList<Aluno> lista) {
        for (Aluno aluno : lista) {
            System.out.println(aluno);
        }
    }

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

}
