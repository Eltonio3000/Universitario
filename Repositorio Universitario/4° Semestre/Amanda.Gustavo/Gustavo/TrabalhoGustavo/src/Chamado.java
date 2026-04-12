public class Chamado {
    private static int contadorId = 1;
    private int id;
    private Cliente cliente;
    private String descricao;
    private int prioridade; // 1-Alta, 2-Média, 3-Baixa
    private String status; // "Pendente", "Em Atendimento", "Concluído"
    private Tecnico tecnicoResponsavel;
    private PilhaAcoes pilhaAcoes;

    public Chamado(Cliente cliente, String descricao, int prioridade) {
        this.id = contadorId++;
        this.cliente = cliente;
        this.descricao = descricao;
        this.prioridade = prioridade;
        this.status = "Pendente";
        this.pilhaAcoes = new PilhaAcoes();
        this.tecnicoResponsavel = null;
    }

    public int getId() {
        return id;
    }

    public Cliente getCliente() {
        return cliente;
    }

    public String getDescricao() {
        return descricao;
    }

    public int getPrioridade() {
        return prioridade;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    public Tecnico getTecnicoResponsavel() {
        return tecnicoResponsavel;
    }

    public void setTecnicoResponsavel(Tecnico tecnico) {
        this.tecnicoResponsavel = tecnico;
    }

    public void adicionarAcao(String acao) {
        pilhaAcoes.empilhar(acao);
    }

    public void listarAcoes() {
        pilhaAcoes.listar();
    }

    public int contarPalavrasChave() {
        String[] palavrasChave = {"erro", "rede", "login", "senha", "internet",
                "lento", "travando", "problema", "bug", "falha"};
        int contador = 0;
        String descLower = descricao.toLowerCase();

        for (String palavra : palavrasChave) {
            if (descLower.contains(palavra)) {
                contador++;
            }
        }
        return contador;
    }

    @Override
    public String toString() {
        String prioStr = (prioridade == 1) ? "Alta" : (prioridade == 2) ? "Média" : "Baixa";
        String tecnicoStr = (tecnicoResponsavel != null) ? tecnicoResponsavel.getNome() : "Não atribuído";
        return "Chamado #" + id + " | Cliente: " + cliente.getNome() +
                " | Prioridade: " + prioStr + " | Status: " + status +
                "\n  Descrição: " + descricao + "\n  Técnico: " + tecnicoStr;
    }
}