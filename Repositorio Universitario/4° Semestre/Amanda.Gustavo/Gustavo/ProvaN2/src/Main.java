import java.util.Scanner;

public class Main {

    public static String lerString() {
        Scanner sc = new Scanner(System.in);
        return sc.nextLine();
    }

    public static int lerInt() {
        Scanner sc = new Scanner(System.in);
        return sc.nextInt();
    }

    public static void main(String[] args) {
        RegistroTripulantes.DadosIniciaisTripulantes();
        //TorreComando.DadosIniciasNaves();
        SistemaHistorico.DadosIniciaisMissoes();
        int escolha = 1;
        String stop = null;
        int id = 0; String nome = null; String cargo = null; String exameMedico = null;
        while ( escolha != 0 ) {
            System.out.print("""
                    Sistema de Gerenciamento da Expedição Galáctica 
                    
                    1 - Registro de tripulantes
                    2 - Controle de Decolagem de Naves Auxiliares
                    3 - Sistema de Emergências
                    4 - Histórico de Missões
                    5 - Considerações Finais
                    0 - Sair
                    
                    >>> """);
            escolha = lerInt();
            switch ( escolha ) {
                case 1:
                    while ( escolha != 0 ) {
                        System.out.print("""
                        Sistema de Gerenciamento da Expedição Galáctica 
                                   Registro de tripulantes
                                   
                        1 - visualizar Tripulante
                        2 - inserir Tripulante
                        3 - remover Tripulante
                        0 - voltar
                        
                        >>> """);
                        escolha = lerInt();
                        switch ( escolha ) {
                            case 1:
                                RegistroTripulantes.ShowTripulantes();
                                stop = lerString();
                            break;
                            case 2:
                                System.out.println("informe o id do tripulante:");
                                id = lerInt();
                                System.out.println("informe o nome do tripulante:");
                                nome = lerString();
                                System.out.println("informe o cargo do tripulante:");
                                cargo = lerString();
                                System.out.println("o tripulante realizou o exame medico? (S/N)");
                                exameMedico = lerString();
                                boolean em = false;
                                if (exameMedico.equalsIgnoreCase("S") || exameMedico.equalsIgnoreCase("SIM")) {
                                    em = true;
                                } if (exameMedico.equalsIgnoreCase("N") || exameMedico.equalsIgnoreCase("NAO")) {
                                    em = false;
                                }
                                RegistroTripulantes.AddTripulante(id,nome,cargo,em,em);
                                System.out.println("Tripulante adicionado com sucesso!");
                                stop = lerString();
                            break;
                            case 3:
                                System.out.println("voce pode inserir o id e o nome, ou apenas o id ou apenas o nome.");
                                System.out.println("informe o id do tripulante:");
                                id = lerInt();
                                System.out.println("informe o nome do tripulante:");
                                nome = lerString();
                                Tripulantes.removeTripulante(nome);
                                Tripulantes.removeTripulante(id);
                                Tripulantes.removeTripulante(id, nome);
                                System.out.println("Tripulante removido com sucesso!");
                                stop = lerString();
                            break;
                            case 0:
                                break;
                        }
                    }
                    escolha = 1;
                break;
                case 2:
                    while ( escolha != 0 ) {
                        System.out.print("""
                            Sistema de Gerenciamento da Expedição Galáctica 
                               Controle de Decolagem de Naves Auxiliares
                               
                            1 - visualizar naves na fila
                            2 - adicionar naves na fila
                            3 - liberar naves na fila
                            0 - voltar
                            
                            >>> """);
                        escolha = lerInt();
                        switch ( escolha ) {
                            case 1:
                                TorreComando.ShowNaves();
                                stop = lerString();
                            break;
                            case 2:
                                System.out.println("informe o codigo da nave");
                                int CodigoNave = lerInt();
                                TorreComando.addNave(CodigoNave);
                                System.out.println("Nave adicionado com sucesso!");
                                stop = lerString();
                            break;
                            case 3:
                                System.out.println("informe o codigo da nave");
                                CodigoNave = lerInt();
                                TorreComando.RemoveNave(CodigoNave);
                                stop = lerString();
                            break;
                            case 0:
                                break;
                        }
                    }
                    escolha = 1;
                break;
                case 3:
                    while ( escolha != 0 ) {
                        System.out.print("""
                            Sistema de Gerenciamento da Expedição Galáctica 
                                        Sistema de Emergências
                               
                            1 - adicionar alerta
                            2 - Sistema de Gerenciamento de emergencia
                            0 - voltar
                            
                            >>> """);
                        escolha = lerInt();
                        switch ( escolha ) {
                            case 1:
                                System.out.println("informe o titulo do alerta");
                                String titulo = lerString();
                                System.out.println("informe o descricao do alerta:");
                                String descricao = lerString();
                                SistemaEmergencia.AddAlertas(titulo,descricao);
                                System.out.println("Alerta adicionado com sucesso!");
                                stop = lerString();
                            break;
                            case 2:
                                SistemaEmergencia.SistemaEmergencia();
                            break;
                            case 0:
                                break;
                        }
                    }
                    escolha = 1;
                break;
                case 4:
                    SistemaHistorico.Interfece();
                break;
                case 5:

                break;
                case 0:
                    break;
            }
        }
    }
}