import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Aluno> lista = new ArrayList<Aluno>();

        Aluno Al1 = new Aluno("tony" , 19, 001);

        Aluno.cadastrarAluno(lista ,Al1);

        Aluno.listarAluno(lista);
    }
}