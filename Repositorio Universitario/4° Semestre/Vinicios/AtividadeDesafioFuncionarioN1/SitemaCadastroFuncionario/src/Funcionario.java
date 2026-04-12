public abstract class Funcionario {
    private String nome;
    private String setor;
    private double qtdHorasTrabalhadas;
    private double valorHora;

    public Funcionario(String nome, String setor, double qtdHorasTrabalhadas, double valorHora) {
        this.nome = nome;
        this.setor = setor;
        this.qtdHorasTrabalhadas = qtdHorasTrabalhadas;
        this.valorHora = valorHora;
    }

    // Getters e Setters
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getSetor() {
        return setor;
    }

    public void setSetor(String setor) {
        this.setor = setor;
    }

    public double getQtdHorasTrabalhadas() {
        return qtdHorasTrabalhadas;
    }

    public void setQtdHorasTrabalhadas(double qtdHorasTrabalhadas) {
        this.qtdHorasTrabalhadas = qtdHorasTrabalhadas;
    }

    public double getValorHora() {
        return valorHora;
    }

    public void setValorHora(double valorHora) {
        this.valorHora = valorHora;
    }

    // Métodos abstratos
    public abstract double calcularSalarioBase();
    public abstract double calcularComissao();

    // Método para calcular salário final
    public double calcularSalarioFinal() {
        return calcularSalarioBase() + calcularComissao();
    }

    // Método para imprimir informações
    public void imprimirInformacoes() {
        System.out.println("Nome: " + nome);
        System.out.println("Setor: " + setor);
        System.out.println("Horas trabalhadas (mês): " + (qtdHorasTrabalhadas * 4)); // 4 semanas no mês
        System.out.println("Valor por hora: R$ " + valorHora);
        System.out.println("Salário base: R$ " + String.format("%.2f", calcularSalarioBase()));
        System.out.println("Comissão: R$ " + String.format("%.2f", calcularComissao()));
        System.out.println("Salário final: R$ " + String.format("%.2f", calcularSalarioFinal()));
        System.out.println("----------------------------------------");
    }
}