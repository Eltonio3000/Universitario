/*
Crie uma classe Figura com métodos para desenhar a figura na tela. Crie classes filhas
Retangulo, Circulo e Triangulo que herdam de Figura e implementam o metodo desenhar()
de forma específica para cada figura. Crie uma classe Main para desenhar diferentes
figuras na tela.
*/

public class Main {
    public static void main(String[] args) {
        Figura f1 = new Retangulo();
        Figura f2 = new Circulo();
        Figura f3 = new Triangulo();

        f1.desenhar();
        f2.desenhar();
        f3.desenhar();
    }
}
