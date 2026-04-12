import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Integer n = 10;
        // Criando lista de funcionários
        List<Funcionario> funcionarios = new ArrayList<>();

        // Instanciando funcionários
        Gerente gerente = new Gerente("Carlos Silva", "TI", 40, 50.0);
        Programador programador = new Programador("Ana Santos", "Desenvolvimento", 35, 40.0);
        Analista analista = new Analista("Pedro Costa", "Análise", 38, 45.0);
        Suporte suporte = new Suporte("Maria Oliveira", "Suporte", 30, 35.0);

        // Adicionando funcionários à lista
        funcionarios.add(gerente);
        funcionarios.add(programador);
        funcionarios.add(analista);
        funcionarios.add(suporte);

        // Imprimindo informações de todos os funcionários
        System.out.println("=== SISTEMA DE CADASTRO DE FUNCIONÁRIOS ===\n");

        for (Funcionario funcionario : funcionarios) {
            funcionario.imprimirInformacoes();
        }

        // Exemplo de cálculo individual
        System.out.println("=== EXEMPLOS INDIVIDUAIS ===\n");

        System.out.println("Gerente - Salário Final: R$ " +
                String.format("%.2f", gerente.calcularSalarioFinal()));
        System.out.println("Programador - Salário Final: R$ " +
                String.format("%.2f", programador.calcularSalarioFinal()));
        System.out.println("Analista - Salário Final: R$ " +
                String.format("%.2f", analista.calcularSalarioFinal()));
        System.out.println("Suporte - Salário Final: R$ " +
                String.format("%.2f", suporte.calcularSalarioFinal()));
    }
}