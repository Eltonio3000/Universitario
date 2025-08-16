public class Auxiliar extends Funcionario {
    public Auxiliar(String nome, double salario) {
        super(nome, "Auxiliar", salario);
    }

    @Override
    public void trabalhar() {
        System.out.println(nome + " está ajudando nas tarefas diárias.");
    }
}
