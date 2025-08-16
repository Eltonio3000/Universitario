public class Documento implements Imprimivel, Visualizavel {
    private String titulo;
    private String conteudo;

    public Documento(String titulo, String conteudo) {
        this.titulo = titulo;
        this.conteudo = conteudo;
    }

    @Override
    public void imprimir() {
        System.out.println("Imprimindo documento:");
        System.out.println("Título: " + titulo);
        System.out.println("Conteúdo: " + conteudo);
    }

    @Override
    public void exibir() {
        System.out.println("Exibindo documento na tela:");
        System.out.println("[ " + titulo + " ] " + conteudo);
    }
}
