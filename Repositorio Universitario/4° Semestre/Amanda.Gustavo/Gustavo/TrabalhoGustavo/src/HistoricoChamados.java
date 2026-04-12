import java.util.HashMap;

// Pilha de ações (LIFO)
class NoAcao {
    String acao;
    NoAcao proximo;

    public NoAcao(String acao) {
        this.acao = acao;
        this.proximo = null;
    }
}

class PilhaAcoes {
    private NoAcao topo;

    public PilhaAcoes() {
        this.topo = null;
    }

    public void empilhar(String acao) {
        NoAcao novoNo = new NoAcao(acao);
        novoNo.proximo = topo;
        topo = novoNo;
    }

    public String desempilhar() {
        if (topo == null) {
            return null;
        }
        String acao = topo.acao;
        topo = topo.proximo;
        return acao;
    }

    public boolean estaVazia() {
        return topo == null;
    }

    public void listar() {
        if (topo == null) {
            System.out.println("  Nenhuma ação registrada.");
            return;
        }

        System.out.println("  Ações registradas (mais recente primeiro):");
        NoAcao atual = topo;
        while (atual != null) {
            System.out.println("    - " + atual.acao);
            atual = atual.proximo;
        }
    }
}

// Nó para lista duplamente encadeada de chamados
class NoChamado {
    Chamado chamado;
    NoChamado proximo;
    NoChamado anterior;

    public NoChamado(Chamado chamado) {
        this.chamado = chamado;
        this.proximo = null;
        this.anterior = null;
    }
}

// Lista duplamente encadeada de chamados
class ListaDuplaChamados {
    private NoChamado inicio;
    private NoChamado fim;
    private int tamanho;

    public ListaDuplaChamados() {
        this.inicio = null;
        this.fim = null;
        this.tamanho = 0;
    }

    public void adicionar(Chamado chamado) {
        NoChamado novoNo = new NoChamado(chamado);

        if (inicio == null) {
            inicio = novoNo;
            fim = novoNo;
        } else {
            fim.proximo = novoNo;
            novoNo.anterior = fim;
            fim = novoNo;
        }
        tamanho++;
    }

    public boolean estaVazia() {
        return inicio == null;
    }

    public void listar() {
        if (inicio == null) {
            System.out.println("  Nenhum chamado no histórico.");
            return;
        }

        NoChamado atual = inicio;
        int pos = 1;
        while (atual != null) {
            System.out.println("\n" + pos + ". " + atual.chamado);
            atual.chamado.listarAcoes();
            atual = atual.proximo;
            pos++;
        }
    }

    public int getTamanho() {
        return tamanho;
    }
}

// Gerenciador de histórico de chamados por cliente
public class HistoricoChamados {
    private HashMap<String, ListaDuplaChamados> historicoPorCliente;

    public HistoricoChamados() {
        this.historicoPorCliente = new HashMap<>();
    }

    public void adicionarChamado(String cpfCliente, Chamado chamado) {
        if (!historicoPorCliente.containsKey(cpfCliente)) {
            historicoPorCliente.put(cpfCliente, new ListaDuplaChamados());
        }
        historicoPorCliente.get(cpfCliente).adicionar(chamado);
    }

    public void listarHistorico(String cpfCliente) {
        ListaDuplaChamados lista = historicoPorCliente.get(cpfCliente);
        if (lista == null || lista.estaVazia()) {
            System.out.println("\nNenhum histórico encontrado para este cliente.");
            return;
        }

        System.out.println("\n--- Histórico de Chamados do Cliente ---");
        lista.listar();
    }

    public void listarTodosHistoricos() {
        if (historicoPorCliente.isEmpty()) {
            System.out.println("\nNenhum histórico registrado.");
            return;
        }

        System.out.println("\n=== HISTÓRICO COMPLETO DE CHAMADOS ===");
        for (String cpf : historicoPorCliente.keySet()) {
            System.out.println("\n>>> Cliente CPF: " + cpf);
            historicoPorCliente.get(cpf).listar();
        }
    }
}