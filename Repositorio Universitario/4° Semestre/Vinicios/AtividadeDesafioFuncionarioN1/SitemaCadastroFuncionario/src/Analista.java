public class Analista extends Funcionario {
    public Analista(String nome, String setor, double qtdHorasTrabalhadas, double valorHora) {
        super(nome, setor, qtdHorasTrabalhadas, valorHora);
    }

    @Override
    public double calcularSalarioBase() {
        return getQtdHorasTrabalhadas() * getValorHora() * 3.1;
    }

    @Override
    public double calcularComissao() {
        double salarioBase = calcularSalarioBase();
        double comissao = salarioBase * 0.10; // +10% comissão
        double beneficios = salarioBase * 0.05; // +5% benefícios
        return comissao + beneficios;
    }
}