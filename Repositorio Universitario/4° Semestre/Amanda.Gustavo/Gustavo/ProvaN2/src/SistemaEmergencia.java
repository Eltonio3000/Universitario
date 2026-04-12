import java.util.Scanner;
import java.util.Stack;

public class SistemaEmergencia {

    public static String lerString() {
        Scanner sc = new Scanner(System.in);
        return sc.nextLine();
    }
    private static Stack<Alertas> alertas = new Stack<>();

    public static void SistemaEmergencia() {
        String aux = null;
        boolean continuar = true;
        boolean chave1 = true;
        while (chave1 && continuar) {
            boolean chave2 = true;
            while (chave2 && continuar) {
                System.out.println("visualizar alertas? (S/N)");
                aux = lerString();
                if (aux.equalsIgnoreCase("S") || aux.equalsIgnoreCase("SIM")) {
                    chave2 = false;
                } if (aux.equalsIgnoreCase("N") || aux.equalsIgnoreCase("NAO")){
                    continuar = false;
                } else {
                    System.out.println("não entendi.");
                }
            }
            if (!continuar){
                break;
            }
            ShowAlert();
            System.out.println("\n\n\nproxima alerta a ser atendida");
            alertas.peek();
            String stop = lerString();
            boolean chave3 = true;
            while (chave3) {
                System.out.println("a tarefa foi completada? (S/N)");
                aux = lerString();
                if (aux.equalsIgnoreCase("S") || aux.equalsIgnoreCase("SIM")) {
                    alertas.pop();
                    System.out.println("o alerta foi removido do sistema");
                } if (aux.equalsIgnoreCase("N") || aux.equalsIgnoreCase("NAO")){
                    System.out.println("complete o alerta");
                    alertas.peek();
                } else {
                    System.out.println("não entendi.");
                }
            }
        }
    }

    public static void ShowAlert() {
        for (Alertas alerta : alertas) {
            System.out.println(alerta);
        }
    }

    public static void AddAlertas(String titulo, String descricao) {
        alertas.push(new Alertas(titulo, descricao));
    }

}
