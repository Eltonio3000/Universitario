public class Calculadora<T extends Number> {

    public double somar(T a, T b) {
        return a.doubleValue() + b.doubleValue();
    }

    public double subtrair(T a, T b) {
        return a.doubleValue() - b.doubleValue();
    }
}