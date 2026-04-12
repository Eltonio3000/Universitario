import java.util.ArrayList;
import java.util.Scanner;

public class Usuario {
    private String nome;
    private int matricula;
    private int totalEmprestados = 0;

    ArrayList<Publicacao> listaUser = new ArrayList<Publicacao>();

    public Usuario(String nome, int matricula) {
        this.nome = nome;
        this.matricula = matricula;
    }
    public void emprestimos(ArrayList<Publicacao> lista) {
        Scanner sc = new Scanner(System.in);

        if (totalEmprestados >= 0 && totalEmprestados <= 4) {

            System.out.print("qual material quer pegar emprestado? ");
            String titulo = sc.nextLine();
            stre

            for (Publicacao p : lista) {
                if (p.un){}

                boolean Contem = titulo.equalsIgnoreCase(p.getTitulo());
                if (Contem) {
                    listaUser.add(totalEmprestados, p);
                }

            }
            totalEmprestados++;
        }
        else {
            System.out.print("Voce so pode pegar 5 materiais emprestados");
        }
    }

    public void Imprimir() {
        for (Publicacao p : listaUser) {
            System.out.println(this.listaUser);
        }
    }
}
