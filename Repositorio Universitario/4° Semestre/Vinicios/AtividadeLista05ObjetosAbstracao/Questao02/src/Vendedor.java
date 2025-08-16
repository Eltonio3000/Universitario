public class Vendedor extends Funcionario {
    public Vendedor(String nome, double salario) {
        super(nome, "Vendedor", salario);
    }

    @Override
    public void trabalhar() {
        System.out.println(nome + " está vendendo produtos e atendendo clientes.");
    }
}
