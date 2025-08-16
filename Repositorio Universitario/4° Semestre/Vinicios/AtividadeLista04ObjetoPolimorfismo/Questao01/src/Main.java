/*
Crie uma classe Animal com um metodo fazerBarulho(). Crie classes filhas Cachorro,
Gato e Passaro que sobrescrevem o metodo fazerBarulho() com sons específicos.
Implemente e teste a funcionalidade.
*/

public class Main {
    public static void main(String[] args) {
        Animal cachorro = new Cachorro();
        Animal gato = new Gato();
        Animal passaro = new Passaro();

        System.out.println("Cachorro:");
        cachorro.fazerBarulho();

        System.out.println("\nGato:");
        gato.fazerBarulho();

        System.out.println("\nPássaro:");
        passaro.fazerBarulho();
    }
}
