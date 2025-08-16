/*
Crie uma classe abstrata Animal com métodos como emitirSom(), mover() e alimentar().
Implemente classes concretas como Cachorro, Gato e Pato que estendem a classe Animal.
Utilize polimorfismo para chamar métodos específicos de cada animal.
*/

public class Main {
    public static void main(String[] args) {
        // Usando polimorfismo: todos são "Animal", mas se comportam diferente
        Animal[] animais = {
                new Cachorro("Rex"),
                new Gato("Mia"),
                new Pato("Donald")
        };

        for (Animal animal : animais) {
            animal.exibirInfo();
            animal.emitirSom();
            animal.mover();
            animal.alimentar();
            System.out.println();
        }
    }
}
