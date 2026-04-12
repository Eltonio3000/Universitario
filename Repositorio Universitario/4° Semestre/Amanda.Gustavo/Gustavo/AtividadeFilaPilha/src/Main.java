import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Queue<Aluno> filaAlunos = new LinkedList<>();

        try (BufferedReader br = new BufferedReader(new FileReader("C:\\Users\\plane\\OneDrive\\Documentos\\Repositorio\\Repositorio Universitario\\4° Semestre\\Amanda.Gustavo\\Gustavo\\alunos_50.txt"))) {
            String linha;
            while ((linha = br.readLine()) != null) {
                String[] partes = linha.split(";");
                int id = Integer.parseInt(partes[0]);
                String nome = partes[1];
                double nota1 = Double.parseDouble(partes[2]);
                double nota2 = Double.parseDouble(partes[2]);
                double nota3 = Double.parseDouble(partes[2]);
                filaAlunos.add(new Aluno(id, nome, nota1, nota2, nota3));
            }
        } catch (IOException e) {
            System.out.println("Erro ao ler o arquivo: " + e.getMessage());
            return;
        }

        System.out.println("Fila original (do arquivo): \n" + filaAlunos);

        List<Aluno> listaOrdenadaPorNome = new ArrayList<>(filaAlunos);
        listaOrdenadaPorNome.sort(Comparator.comparing(Aluno::getNome));

        Stack<Aluno> pilhaAlfabetica = new Stack<>();
        for (Aluno a : listaOrdenadaPorNome) {
            pilhaAlfabetica.push(a);
        }

        System.out.println("\nPilha (ordenada por nome): \n" + pilhaAlfabetica);

        List<Aluno> aprovados = new ArrayList<>();
        for (Aluno a : filaAlunos) {
            if (a.getMedia() > 6.0) {
                aprovados.add(a);
            }
        }
        aprovados.sort(Comparator.comparingDouble(Aluno::getMedia));

        Queue<Aluno> filaAprovados = new LinkedList<>(aprovados);
        System.out.println("\nFila de aprovados (ordenados por nota): \n" + filaAprovados);

        List<Aluno> reprovados = new ArrayList<>();
        for (Aluno a : filaAlunos) {
            if (a.getMedia() <= 6.0) {
                reprovados.add(a);
            }
        }
        reprovados.sort(Comparator.comparingInt(Aluno::getId));

        Stack<Aluno> pilhaReprovados = new Stack<>();
        for (Aluno a : reprovados) {
            pilhaReprovados.push(a);
        }
        System.out.println("\nPilha de reprovados (ordenados por id): \n" + pilhaReprovados);
    }
}