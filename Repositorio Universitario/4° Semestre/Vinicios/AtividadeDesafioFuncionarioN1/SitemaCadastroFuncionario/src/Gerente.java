public class Gerente extends Funcionario {
    public Gerente(String nome, String setor, double qtdHorasTrabalhadas, double valorHora) {
        super(nome, setor, qtdHorasTrabalhadas, valorHora);
    }

    @Override
    public double calcularSalarioBase() {
        return getQtdHorasTrabalhadas() * getValorHora() * 5.8;
    }

    @Override
    public double calcularComissao() {
        double salarioBase = calcularSalarioBase();
        double comissao = salarioBase * 0.30; // +30% comissão
        double bonificacao = salarioBase * 0.15; // +15% bonificação
        double beneficios = salarioBase * 0.05; // +5% benefícios
        return comissao + bonificacao + beneficios;
    }
}