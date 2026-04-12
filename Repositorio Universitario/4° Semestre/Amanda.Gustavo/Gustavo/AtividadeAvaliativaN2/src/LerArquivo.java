import java.io.*;
import java.util.ArrayList;
import java.util.Queue;
import java.util.Stack;

public class LerArquivo {


    public void ReaderFile(Stack<Character> pilha, Queue<Character> fila) {
        try {
            FileReader reader = new FileReader("C:\\Users\\plane\\OneDrive\\Documentos\\Repositorio\\Repositorio Universitario\\4° Semestre\\Amanda.Gustavo\\Gustavo\\arquivoAtividadeFile.txt");
            BufferedReader BufferReader = new BufferedReader(reader);
            String line = BufferReader.readLine();
            int numeroLinha = 0;

            while ((line = BufferReader.readLine()) != null) {
                for (char c : line.toCharArray()) {
                    if (c != ' ') { // ignora espaços em branco
                        if (numeroLinha % 2 == 1) {
                            pilha.push(c); // linhas ímpares → pilha
                        } else {
                            fila.add(c);   // linhas pares → fila
                        }
                    }
                }
                numeroLinha++;
            }

            BufferReader.close();
        } catch (IOException e) {
            throw new RuntimeException("Erro ao processar arquivos" + e.getMessage());
        }
        Resultado(pilha, fila);
    }

    public void Resultado(Stack<Character> pilha, Queue<Character> fila) {
        System.out.println("Pilha");
        for (Character p : pilha) {
            System.out.println(p);
        }
        System.out.println("Fila");
        for (Character f : fila) {
            System.out.println(f);
        }
    }

}
