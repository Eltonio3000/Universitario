import java.util.LinkedList;

public class RegistroTripulantes extends Tripulantes {

    private static LinkedList<Tripulantes> listaTripulantes = new LinkedList<Tripulantes>();

    public RegistroTripulantes(int id, String nome, String cargo, boolean exameMedico, boolean ativo) {
        super(id, nome, cargo, exameMedico, ativo);
    }

    public static LinkedList<Tripulantes> ListTripulantes() {
        return listaTripulantes;
    }
    public static void AddTripulante(int id, String nome, String cargo, boolean exameMedico, boolean ativo) {
        ListTripulantes().addLast(new Tripulantes(id, nome, cargo, exameMedico, ativo));
    }
    public static void DadosIniciaisTripulantes() {
        AddTripulante(1, "João Silva", "Piloto", true, true);
        AddTripulante(2, "Maria Oliveira", "Copiloto", true, true);
        AddTripulante(3, "Carlos Pereira", "Comissário de Bordo", false, true);
        AddTripulante(4, "Ana Souza", "Mecânico de Voo", true, false);
        AddTripulante(5, "Lucas Santos", "Engenheiro de Manutenção", false, false);
    }
    public static void ShowTripulantes() {
        for ( Tripulantes t : listaTripulantes ) {
            System.out.println(t.toString());
        }
    }

}
