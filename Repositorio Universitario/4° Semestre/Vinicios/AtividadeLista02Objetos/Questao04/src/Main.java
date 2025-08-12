/*
Modele uma hierarquia de classes para representar animais domésticos. Crie uma
classe base Animal com atributos como nome e idade. Em seguida, crie subclasses
como Cachorro e Gato que herdam da classe Animal. Adicione atributos específicos
para cada tipo de animal, como raca para cachorros e corPelagem para gatos.
Implemente métodos para simular ações características de cada animal. Adicione a
classe Principal para exibir informações do Cachorro e Gato.
*/

public class Main {
    public static void main(String[] args) {
        Cachorro dog = new Cachorro("Rex", 5, "Labrador");
        Gato cat = new Gato("Mimi", 3, "Branca");

        System.out.println("=== Cachorro ===");
        dog.exibirInformacoes();
        dog.emitirSom();
        dog.abanarRabo();

        System.out.println("\n=== Gato ===");
        cat.exibirInformacoes();
        cat.emitirSom();
        cat.arranhar();
    }
}
