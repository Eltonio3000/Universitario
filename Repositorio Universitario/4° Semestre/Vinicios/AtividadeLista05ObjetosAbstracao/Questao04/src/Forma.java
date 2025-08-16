public abstract class Forma {
    public abstract double calcularArea();
    public abstract double calcularPerimetro();

    public void exibirResultados() {
        System.out.println("Área: " + calcularArea());
        System.out.println("Perímetro: " + calcularPerimetro());
    }
}
