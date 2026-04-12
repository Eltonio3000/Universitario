import java.util.ArrayList;

public class Estante {
    public String nome;
    public String categoria;

    public Estante(String nome, String categoria) {
        this.nome = nome.toLowerCase();
        this.categoria = categoria.toLowerCase();
    }

    public static void addBook(String nome, String categoria, ArrayList<Estante> estante) {
        estante.add(new Estante(nome, categoria));
        System.out.println("✅ Livro adicionado à estante!");
    }

    public static void removeBook(String nome, String categoria, ArrayList<Estante> estante) {
        boolean removido = estante.removeIf(livro ->
                livro.nome.equalsIgnoreCase(nome) && livro.categoria.equalsIgnoreCase(categoria)
        );

        if (removido)
            System.out.println("✅ Livro removido da estante!");
        else
            System.out.println("❌ Livro não encontrado na estante!");
    }

    public static void mostrarEstante(ArrayList<Estante> estante) {
        if (estante.isEmpty()) {
            System.out.println("📚 A estante está vazia.");
        } else {
            System.out.println("\n📚 Livros disponíveis:");
            estante.forEach(System.out::println);
        }
    }
}
