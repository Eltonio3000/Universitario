public class Suporte extends Funcionario {
    public Suporte(String nome, String setor, double qtdHorasTrabalhadas, double valorHora) {
        super(nome, setor, qtdHorasTrabalhadas, valorHora);
    }

    @Override
    public double calcularSalarioBase() {
        return getQtdHorasTrabalhadas() * getValorHora() * 2.0;
    }

    @Override
    public double calcularComissao() {
        double salarioBase = calcularSalarioBase();
        return salarioBase * 0.05; // +5% benefícios
    }
}