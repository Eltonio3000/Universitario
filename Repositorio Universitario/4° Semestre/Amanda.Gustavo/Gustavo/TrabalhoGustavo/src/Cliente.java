import java.io.*;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Cliente {
    private String nome;
    private String cpf;

    public Cliente(String nome, String cpf) {
        this.nome = nome;
        this.cpf = cpf;
    }

    public static void DadosIniciais(ArrayList<Cliente> listaClientes, HashMap<String, Cliente> hashClientes) {
        Cliente c1 = new Cliente("John Doe", "999.999.999-99");
        Cliente c2 = new Cliente("Matheus Klent", "333.333.333-33");
        Cliente c3 = new Cliente("Josh Stef", "555.555.555-55");

        listaClientes.add(c1);
        listaClientes.add(c2);
        listaClientes.add(c3);

        hashClientes.put(c1.getCpf(), c1);
        hashClientes.put(c2.getCpf(), c2);
        hashClientes.put(c3.getCpf(), c3);
    }

    public String getCpf() {
        return cpf;
    }

    public String getNome() {
        return nome;
    }

    public static void CadastrarCliente(ArrayList<Cliente> listaClientes, HashMap<String, Cliente> hashClientes) {
        Scanner sc = new Scanner(System.in);

        System.out.println("\n=== CADASTRAR CLIENTE ===");
        System.out.print("Nome: ");
        String nome = sc.nextLine();
        System.out.print("CPF: ");
        String cpf = sc.nextLine();

        // Verifica se já existe
        if (hashClientes.containsKey(cpf)) {
            System.out.println("\n✗ Cliente com este CPF já existe!");
            return;
        }

        Cliente novoCliente = new Cliente(nome, cpf);
        listaClientes.add(novoCliente);
        hashClientes.put(cpf, novoCliente);

        System.out.println("\n✓ Cliente cadastrado com sucesso!");
    }

    public static void BuscarCliente(ArrayList<Cliente> listaClientes) {
        Scanner sc = new Scanner(System.in);

        System.out.println("\n=== BUSCAR CLIENTE (LISTA) ===");
        System.out.println("1 - Buscar por Nome");
        System.out.println("2 - Buscar por CPF");
        System.out.print("→ ");
        int opcao = sc.nextInt();
        sc.nextLine(); // Limpa buffer

        if (opcao == 1) {
            System.out.print("Digite o nome: ");
            String nome = sc.nextLine();
            boolean encontrado = false;

            for (Cliente c : listaClientes) {
                if (c.getNome().toLowerCase().contains(nome.toLowerCase())) {
                    System.out.println("\n✓ Cliente encontrado:");
                    System.out.println(c);
                    encontrado = true;
                }
            }

            if (!encontrado) {
                System.out.println("\n✗ Cliente não encontrado!");
            }

        } else if (opcao == 2) {
            System.out.print("Digite o CPF: ");
            String cpf = sc.nextLine();
            boolean encontrado = false;

            for (Cliente c : listaClientes) {
                if (c.getCpf().equals(cpf)) {
                    System.out.println("\n✓ Cliente encontrado:");
                    System.out.println(c);
                    encontrado = true;
                    break;
                }
            }

            if (!encontrado) {
                System.out.println("\n✗ Cliente não encontrado!");
            }
        }
    }

    public static void BuscarCliente(ArrayList<Cliente> listaClientes, HashMap<String, Cliente> hashClientes) {
        Scanner sc = new Scanner(System.in);

        System.out.println("\n=== BUSCAR CLIENTE POR CPF (HASH) ===");
        System.out.print("Digite o CPF: ");
        String cpf = sc.nextLine();

        Cliente c = hashClientes.get(cpf);
        if (c != null) {
            System.out.println("\n✓ Cliente encontrado:");
            System.out.println(c);
        } else {
            System.out.println("\n✗ Cliente não encontrado!");
        }
    }

    public static void RemoverCliente(ArrayList<Cliente> listaClientes, HashMap<String, Cliente> hashClientes) {
        Scanner sc = new Scanner(System.in);

        System.out.println("\n=== REMOVER CLIENTE ===");
        System.out.print("Digite o CPF do cliente: ");
        String cpf = sc.nextLine();

        Cliente cliente = hashClientes.get(cpf);

        if (cliente != null) {
            listaClientes.remove(cliente);
            hashClientes.remove(cpf);
            System.out.println("\n✓ Cliente removido com sucesso!");
        } else {
            System.out.println("\n✗ Cliente não encontrado!");
        }
    }

    public static void ListarCliente(ArrayList<Cliente> listaClientes) {
        if (listaClientes.isEmpty()) {
            System.out.println("\nNenhum cliente cadastrado.");
            return;
        }

        System.out.println("\n=== LISTA DE CLIENTES ===");
        int i = 1;
        for (Cliente cliente : listaClientes) {
            System.out.println(i + ". " + cliente);
            i++;
        }
        System.out.println("\nTotal: " + listaClientes.size() + " clientes");
    }

    public static void SalvarEmArquivo(ArrayList<Cliente> listaClientes, String nomeArquivo) {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(nomeArquivo))) {
            for (Cliente c : listaClientes) {
                writer.write(c.getNome() + ";" + c.getCpf());
                writer.newLine();
            }
            System.out.println("✓ Clientes salvos em " + nomeArquivo);
        } catch (IOException e) {
            System.out.println("✗ Erro ao salvar o arquivo: " + e.getMessage());
        }
    }

    public static void CarregarDeArquivo(ArrayList<Cliente> listaClientes, HashMap<String, Cliente> mapaClientes, String nomeArquivo) {
        File file = new File(nomeArquivo);
        if (!file.exists()) {
            System.out.println("Arquivo não encontrado, usando base inicial...");
            return;
        }

        try (BufferedReader reader = new BufferedReader(new FileReader(nomeArquivo))) {
            String linha;
            int count = 0;
            while ((linha = reader.readLine()) != null) {
                String[] partes = linha.split(";");
                if (partes.length == 2) {
                    String nome = partes[0];
                    String cpf = partes[1];

                    // Evita duplicatas
                    if (!mapaClientes.containsKey(cpf)) {
                        Cliente c = new Cliente(nome, cpf);
                        listaClientes.add(c);
                        mapaClientes.put(cpf, c);
                        count++;
                    }
                }
            }
            if (count > 0) {
                System.out.println("✓ " + count + " clientes carregados do arquivo!");
            }
        } catch (IOException e) {
            System.out.println("✗ Erro ao ler o arquivo: " + e.getMessage());
        }
    }

    @Override
    public String toString() {
        return "Nome: " + nome + " | CPF: " + cpf;
    }
}