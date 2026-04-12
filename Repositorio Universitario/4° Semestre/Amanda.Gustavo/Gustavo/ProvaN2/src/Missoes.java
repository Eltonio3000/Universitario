public class Missoes {
    private String titulo;
    private String descricao;

    public Missoes(String titulo, String descricao) {
        this.titulo = titulo;
        this.descricao = descricao;
    }

    public String getTitulo() {
        return titulo;
    }

    public String getDescricao() {
        return descricao;
    }

    public String toString() {
        return titulo + "\n" + descricao;
    }
}
