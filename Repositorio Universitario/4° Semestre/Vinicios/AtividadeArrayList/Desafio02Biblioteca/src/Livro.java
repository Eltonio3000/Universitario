public class Livro extends Publicacao{

    private int quantidadePaginas;

    public Livro(String titulo, int quantidadePaginas, String autor, int anoPublicacao) {
        super(titulo, autor, anoPublicacao);
    }

    public int getQuantidadePaginas() {
        return quantidadePaginas;
    }
}
