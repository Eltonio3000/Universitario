// Nó para a fila de chamados
class NoFilaChamado {
    Chamado chamado;
    NoFilaChamado proximo;

    public NoFilaChamado(Chamado chamado) {
        this.chamado = chamado;
        this.proximo = null;
    }
}

// Fila de chamados pendentes (FIFO)
public class FilaChamado {
    private NoFilaChamado inicio;
    private NoFilaChamado fim;
    private int tamanho;

    public FilaChamado() {
        this.inicio = null;
        this.fim = null;
        this.tamanho = 0;
    }

    // Enfileirar - adiciona no final
    public void enfileirar(Chamado chamado) {
        NoFilaChamado novoNo = new NoFilaChamado(chamado);

        if (fim == null) {
            inicio = novoNo;
            fim = novoNo;
        } else {
            fim.proximo = novoNo;
            fim = novoNo;
        }
        tamanho++;
    }

    // Desenfileirar - remove do início
    public Chamado desenfileirar() {
        if (inicio == null) {
            return null;
        }

        Chamado chamado = inicio.chamado;
        inicio = inicio.proximo;

        if (inicio == null) {
            fim = null;
        }

        tamanho--;
        return chamado;
    }

    public boolean estaVazia() {
        return inicio == null;
    }

    public int getTamanho() {
        return tamanho;
    }

    public void listar() {
        if (inicio == null) {
            System.out.println("\n✗ Fila de chamados vazia.");
            return;
        }

        System.out.println("\n╔════════════════════════════════════════╗");
        System.out.println("║      FILA DE CHAMADOS PENDENTES        ║");
        System.out.println("╚════════════════════════════════════════╝");

        NoFilaChamado atual = inicio;
        int pos = 1;
        while (atual != null) {
            System.out.println("\n" + pos + "º na fila:");
            System.out.println(atual.chamado);
            atual = atual.proximo;
            pos++;
        }
        System.out.println("\n─────────────────────────────────────────");
        System.out.println("Total: " + tamanho + " chamado(s) aguardando");
    }
}