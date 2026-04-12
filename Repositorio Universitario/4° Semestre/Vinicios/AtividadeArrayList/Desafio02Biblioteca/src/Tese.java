import java.util.ArrayList;

public class Tese extends Publicacao{
    public String universidade;

    public Tese(String titulo, String autor, int anoPublicacao, String universidade) {
        super(titulo, autor, anoPublicacao);
        this.universidade = universidade;
    }


}
