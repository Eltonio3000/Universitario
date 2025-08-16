public class Gerente extends Funcionario {
    public Gerente(String nome, double salario) {
        super(nome, "Gerente", salario);
    }

    @Override
    public void trabalhar() {
        System.out.println(nome + " está gerenciando a equipe e planejando estratégias.");
    }
}
