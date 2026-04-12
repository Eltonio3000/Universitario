import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    private static Scanner scanner = new Scanner(System.in);

    public static String lerString() {
        return scanner.next();
    }

    public static String lerStringLinha() {
        return scanner.nextLine();
    }

    public static int lerInt() {
        while (!scanner.hasNextInt()) {
            System.out.print("Entrada inválida! Digite um número: ");
            scanner.next();
        }
        int valor = scanner.nextInt();
        scanner.nextLine(); // Limpa o buffer
        return valor;
    }

    public static void main(String[] args) {
        // === 1ª ENTREGA: Estruturas de Clientes ===
        ArrayList<Cliente> clientes = new ArrayList<>();
        HashMap<String, Cliente> hashClientes = new HashMap<>();
        String arquivoClientes = "clientes.txt";

        // === 2ª ENTREGA: Estruturas de Chamados ===
        FilaChamado filaChamados = new FilaChamado();
        HistoricoChamados historicoChamados = new HistoricoChamados();

        // === 3ª ENTREGA: Estruturas de Técnicos ===
        ListaCircularTecnicos listaTecnicos = new ListaCircularTecnicos();

        // Inicialização
        System.out.println("╔════════════════════════════════════════╗");
        System.out.println("║  SISTEMA DE GESTÃO DE SUPORTE TÉCNICO  ║");
        System.out.println("╚════════════════════════════════════════╝\n");
        System.out.println("Inicializando sistema...\n");

        Cliente.DadosIniciais(clientes, hashClientes);
        Cliente.CarregarDeArquivo(clientes, hashClientes, arquivoClientes);
        listaTecnicos.inicializar();

        System.out.println("\n✓ Sistema pronto para uso!\n");

        int opcao;
        do {
            exibirMenu();
            opcao = lerInt();

            switch (opcao) {
                case 1 -> {
                    // Cadastrar Cliente
                    Cliente.CadastrarCliente(clientes, hashClientes);
                }

                case 2 -> {
                    // Buscar Cliente
                    System.out.println("\nEscolha o método de busca:");
                    System.out.println("1 - Buscar na lista (por nome ou CPF)");
                    System.out.println("2 - Buscar por hash (apenas CPF - mais rápido)");
                    System.out.print("→ ");
                    int metodo = lerInt();

                    if (metodo == 1) {
                        Cliente.BuscarCliente(clientes);
                    } else if (metodo == 2) {
                        Cliente.BuscarCliente(clientes, hashClientes);
                    } else {
                        System.out.println("\n✗ Opção inválida!");
                    }
                }

                case 3 -> {
                    // Remover Cliente
                    Cliente.RemoverCliente(clientes, hashClientes);
                }

                case 4 -> {
                    // Listar Clientes
                    Cliente.ListarCliente(clientes);
                }

                case 5 -> {
                    // Criar Chamado
                    criarChamado(filaChamados, historicoChamados, hashClientes);
                }

                case 6 -> {
                    // Atender Chamado
                    atenderChamado(filaChamados, listaTecnicos);
                }

                case 7 -> {
                    // Listar Fila de Chamados
                    filaChamados.listar();
                }

                case 8 -> {
                    // Consultar Histórico de Cliente
                    consultarHistorico(historicoChamados, hashClientes);
                }

                case 9 -> {
                    // Listar Todo Histórico
                    historicoChamados.listarTodosHistoricos();
                }

                case 10 -> {
                    // Listar Técnicos
                    listaTecnicos.listar();
                }

                case 11 -> {
                    // Consultar Técnico de um Chamado
                    System.out.println("\n=== CONSULTAR TÉCNICO DO CHAMADO ===");
                    System.out.println("Para ver o técnico responsável, consulte o");
                    System.out.println("histórico do cliente (opção 8).");
                }

                case 0 -> {
                    // Sair e Salvar
                    System.out.println("\n╔════════════════════════════════════════╗");
                    System.out.println("║         ENCERRANDO SISTEMA...          ║");
                    System.out.println("╚════════════════════════════════════════╝\n");
                    Cliente.SalvarEmArquivo(clientes, arquivoClientes);
                    System.out.println("\n✓ Dados salvos com sucesso!");
                    System.out.println("\nObrigado por usar o sistema!");
                    System.out.println("Até logo! 👋\n");
                }

                default -> System.out.println("\n✗ Opção inválida! Tente novamente.");
            }

            if (opcao != 0) {
                System.out.println("\nPressione ENTER para continuar...");
                scanner.nextLine();
            }

        } while (opcao != 0);

        scanner.close();
    }

    private static void exibirMenu() {
        System.out.println("\n╔════════════════════════════════════════╗");
        System.out.println("║              MENU PRINCIPAL            ║");
        System.out.println("╚════════════════════════════════════════╝");
        System.out.println("\n▶ GERENCIAMENTO DE CLIENTES");
        System.out.println("  1 - Cadastrar Cliente");
        System.out.println("  2 - Buscar Cliente");
        System.out.println("  3 - Remover Cliente");
        System.out.println("  4 - Listar Clientes");
        System.out.println("\n▶ GERENCIAMENTO DE CHAMADOS");
        System.out.println("  5 - Criar Chamado");
        System.out.println("  6 - Atender Chamado");
        System.out.println("  7 - Listar Fila de Chamados");
        System.out.println("  8 - Consultar Histórico de Cliente");
        System.out.println("  9 - Listar Todo Histórico");
        System.out.println("\n▶ GERENCIAMENTO DE TÉCNICOS");
        System.out.println("  10 - Listar Técnicos");
        System.out.println("  11 - Consultar Técnico de um Chamado");
        System.out.println("\n  0 - Sair e Salvar");
        System.out.println("\n──────────────────────────────────────────");
        System.out.print("→ Escolha uma opção: ");
    }

    private static void criarChamado(FilaChamado filaChamados,
                                     HistoricoChamados historicoChamados,
                                     HashMap<String, Cliente> hashClientes) {
        System.out.println("\n=== CRIAR NOVO CHAMADO ===");
        System.out.print("Digite o CPF do cliente: ");
        String cpf = scanner.nextLine();

        Cliente cliente = hashClientes.get(cpf);

        if (cliente == null) {
            System.out.println("\n✗ Cliente não encontrado!");
            System.out.println("Cadastre o cliente primeiro (opção 1).");
            return;
        }

        System.out.println("\nCliente: " + cliente.getNome());
        System.out.print("\nDescrição do problema: ");
        String descricao = scanner.nextLine();

        if (descricao.trim().isEmpty()) {
            System.out.println("\n✗ Descrição não pode estar vazia!");
            return;
        }

        System.out.println("\nPrioridade:");
        System.out.println("  1 - Alta (urgente)");
        System.out.println("  2 - Média (normal)");
        System.out.println("  3 - Baixa (pode aguardar)");
        System.out.print("→ Escolha: ");
        int prioridade = lerInt();

        if (prioridade < 1 || prioridade > 3) {
            System.out.println("\n⚠ Prioridade inválida! Definindo como Média.");
            prioridade = 2;
        }

        // Cria o chamado
        Chamado novoChamado = new Chamado(cliente, descricao, prioridade);

        // Adiciona na fila
        filaChamados.enfileirar(novoChamado);

        // Adiciona no histórico
        historicoChamados.adicionarChamado(cliente.getCpf(), novoChamado);

        // Conta palavras-chave
        int palavrasChave = novoChamado.contarPalavrasChave();

        System.out.println("\n╔════════════════════════════════════════╗");
        System.out.println("║      CHAMADO CRIADO COM SUCESSO!       ║");
        System.out.println("╚════════════════════════════════════════╝");
        System.out.println("\n  ID: #" + novoChamado.getId());
        System.out.println("  Cliente: " + cliente.getNome());
        System.out.println("  Status: " + novoChamado.getStatus());
        System.out.println("  Prioridade: " + getPrioridadeStr(prioridade));
        System.out.println("  Palavras-chave identificadas: " + palavrasChave);
        System.out.println("\n✓ Chamado adicionado à fila de atendimento!");
    }

    private static void atenderChamado(FilaChamado filaChamados,
                                       ListaCircularTecnicos listaTecnicos) {
        if (filaChamados.estaVazia()) {
            System.out.println("\n✗ Não há chamados na fila de atendimento.");
            return;
        }

        if (listaTecnicos.estaVazia()) {
            System.out.println("\n✗ Nenhum técnico disponível!");
            return;
        }

        // Remove da fila (FIFO)
        Chamado chamado = filaChamados.desenfileirar();
        chamado.setStatus("Em Atendimento");

        // Atribui técnico (lista circular - round-robin)
        Tecnico tecnico = listaTecnicos.obterProximo();
        chamado.setTecnicoResponsavel(tecnico);

        System.out.println("\n╔════════════════════════════════════════╗");
        System.out.println("║          ATENDENDO CHAMADO             ║");
        System.out.println("╚════════════════════════════════════════╝\n");
        System.out.println(chamado);
        System.out.println("\n→ Técnico atribuído: " + tecnico.getNome());
        System.out.println("  Especialidade: " + tecnico.getEspecialidade());

        System.out.print("\n→ Adicione uma anotação do atendimento: ");
        String anotacao = scanner.nextLine();

        if (!anotacao.trim().isEmpty()) {
            chamado.adicionarAcao("[" + tecnico.getNome() + "] " + anotacao);
        }

        System.out.println("\nO chamado foi resolvido?");
        System.out.println("  1 - Sim, marcar como Concluído");
        System.out.println("  2 - Não, retornar para a fila");
        System.out.print("→ ");
        int resolucao = lerInt();

        if (resolucao == 1) {
            chamado.setStatus("Concluído");
            System.out.println("\n✓ Chamado #" + chamado.getId() + " concluído com sucesso!");
        } else {
            chamado.setStatus("Pendente");
            filaChamados.enfileirar(chamado);
            System.out.println("\n→ Chamado retornou para o final da fila.");
        }
    }

    private static void consultarHistorico(HistoricoChamados historicoChamados,
                                           HashMap<String, Cliente> hashClientes) {
        System.out.println("\n=== CONSULTAR HISTÓRICO ===");
        System.out.print("Digite o CPF do cliente: ");
        String cpf = scanner.nextLine();

        Cliente cliente = hashClientes.get(cpf);

        if (cliente == null) {
            System.out.println("\n✗ Cliente não encontrado!");
            return;
        }

        System.out.println("\nCliente: " + cliente.getNome());
        historicoChamados.listarHistorico(cpf);
    }

    private static String getPrioridadeStr(int prioridade) {
        return switch (prioridade) {
            case 1 -> "Alta";
            case 2 -> "Média";
            case 3 -> "Baixa";
            default -> "Indefinida";
        };
    }
}