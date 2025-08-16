public class Estagiario extends Funcionario {
    public Estagiario(String nome, double salario) {
        super(nome, "Estagiário", salario);
    }

    @Override
    public void trabalhar() {
        System.out.println(nome + " está aprendendo e auxiliando em pequenas tarefas.");
    }
}
