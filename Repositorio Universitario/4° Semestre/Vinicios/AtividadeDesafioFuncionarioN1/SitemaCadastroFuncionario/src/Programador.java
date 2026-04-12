public class Programador extends Funcionario {
    public Programador(String nome, String setor, double qtdHorasTrabalhadas, double valorHora) {
        super(nome, setor, qtdHorasTrabalhadas, valorHora);
    }

    @Override
    public double calcularSalarioBase() {
        return getQtdHorasTrabalhadas() * getValorHora() * 4.2;
    }

    @Override
    public double calcularComissao() {
        double salarioBase = calcularSalarioBase();
        double comissao = salarioBase * 0.20; // +20% comissão
        double bonificacao = salarioBase * 0.10; // +10% bonificação
        return comissao + bonificacao;
    }
}