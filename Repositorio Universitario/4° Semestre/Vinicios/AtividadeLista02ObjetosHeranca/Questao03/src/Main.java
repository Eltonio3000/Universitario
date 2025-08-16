/*
Elabore um sistema para representar uma instituição escolar. Crie uma classe Pessoa
com atributos como nome e idade. Em seguida, crie subclasses como Aluno e
Professor que herdam da classe Pessoa. Adicione atributos específicos para cada tipo,
como matrícula para alunos e disciplina para professores. Implemente métodos para
exibir informações detalhadas de cada pessoa. Adicione a classe Principal para exibir
informações de Aluno e Professor.
*/

public class Main {
    public static void main(String[] args) {
        Aluno aluno = new Aluno("Lucas Silva", 17, "A12345");
        Professor professor = new Professor("Carla Souza", 40, "Matemática");

        System.out.println("=== Dados do Aluno ===");
        aluno.exibirInformacoes();

        System.out.println("\n=== Dados do Professor ===");
        professor.exibirInformacoes();
    }
}
