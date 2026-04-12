public class Tecnico {
    private String nome;
    private String especialidade;
    private int chamadosAtendidos;

    public Tecnico(String nome, String especialidade) {
        this.nome = nome;
        this.especialidade = especialidade;
        this.chamadosAtendidos = 0;
    }

    public String getNome() {
        return nome;
    }

    public String getEspecialidade() {
        return especialidade;
    }

    public int getChamadosAtendidos() {
        return chamadosAtendidos;
    }

    public void incrementarChamados() {
        chamadosAtendidos++;
    }

    @Override
    public String toString() {
        return nome + " [" + especialidade + "] - " + chamadosAtendidos + " atendimento(s)";
    }
}

// Nó para lista circular de técnicos
class NoTecnico {
    Tecnico tecnico;
    NoTecnico proximo;

    public NoTecnico(Tecnico tecnico) {
        this.tecnico = tecnico;
        this.proximo = null;
    }
}

// Lista circular de técnicos
class ListaCircularTecnicos {
    private NoTecnico inicio;
    private NoTecnico atual;
    private int tamanho;

    public ListaCircularTecnicos() {
        this.inicio = null;
        this.atual = null;
        this.tamanho = 0;
    }

    public void adicionar(Tecnico tecnico) {
        NoTecnico novoNo = new NoTecnico(tecnico);

        if (inicio == null) {
            inicio = novoNo;
            novoNo.proximo = novoNo; // Aponta para si mesmo (circular)
            atual = inicio;
        } else {
            // Encontra o último nó
            NoTecnico temp = inicio;
            while (temp.proximo != inicio) {
                temp = temp.proximo;
            }
            temp.proximo = novoNo;
            novoNo.proximo = inicio; // Fecha o círculo
        }
        tamanho++;
    }

    // Retorna o próximo técnico em sistema round-robin
    public Tecnico obterProximo() {
        if (inicio == null) {
            return null;
        }

        Tecnico tecnico = atual.tecnico;
        tecnico.incrementarChamados();
        atual = atual.proximo; // Avança para o próximo (circular)
        return tecnico;
    }

    public boolean estaVazia() {
        return inicio == null;
    }

    public void listar() {
        if (inicio == null) {
            System.out.println("\n✗ Nenhum técnico cadastrado.");
            return;
        }

        System.out.println("\n╔════════════════════════════════════════╗");
        System.out.println("║        LISTA DE TÉCNICOS               ║");
        System.out.println("╚════════════════════════════════════════╝\n");

        NoTecnico temp = inicio;
        int pos = 1;
        do {
            System.out.println(pos + ". " + temp.tecnico);
            temp = temp.proximo;
            pos++;
        } while (temp != inicio);

        System.out.println("\n─────────────────────────────────────────");
        System.out.println("Total: " + tamanho + " técnico(s)");
        System.out.println("Sistema: Round-Robin (distribuição circular)");
    }

    public void inicializar() {
        adicionar(new Tecnico("Carlos Silva", "Redes"));
        adicionar(new Tecnico("Ana Santos", "Sistemas"));
        adicionar(new Tecnico("Pedro Oliveira", "Hardware"));
        adicionar(new Tecnico("Maria Costa", "Software"));
        System.out.println("✓ " + tamanho + " técnicos inicializados!");
    }
}