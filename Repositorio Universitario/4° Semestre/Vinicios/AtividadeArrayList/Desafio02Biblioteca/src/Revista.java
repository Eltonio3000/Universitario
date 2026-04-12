import java.util.ArrayList;

public class Revista extends Publicacao {
    private String edicao;

    public Revista(String titulo, String autor, int anoPublicacao, String edicao) {
        super(titulo, autor, anoPublicacao);
        this.edicao = edicao;
    }

}
