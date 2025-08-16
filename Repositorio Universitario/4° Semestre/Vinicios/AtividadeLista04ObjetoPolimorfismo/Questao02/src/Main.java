/*
Crie uma classe Pessoa com um metodo imprimirInformacoes() e um atributo privado chamado
nome. Crie classes filhas Aluno, que terá um atributo chamado notas e Professor que terá
um atributo chamado disciplina que herdam de Pessoa e possuem atributos específicos.
Implemente o metodo imprimirInformacoes() em cada classe para imprimir informações
específicas de cada tipo de pessoa. Implemente e teste a funcionalidade.
*/

public class Main {
    public static void main(String[] args) {
        Aluno aluno = new Aluno("Carlos", 8.5);
        Professor professor = new Professor("Marcos", "Matemática");

        aluno.imprimirInformacoes();
        System.out.println();
        professor.imprimirInformacoes();
    }
}
