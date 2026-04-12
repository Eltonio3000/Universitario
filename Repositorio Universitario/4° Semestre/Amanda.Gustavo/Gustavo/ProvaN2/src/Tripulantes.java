public class Tripulantes {
    private int id;
    private String nome;
    private String cargo;
    private boolean exameMedico;
    private boolean ativo;

    public Tripulantes(int id, String nome, String cargo, boolean exameMedico, boolean ativo) {
        this.id = id;
        this.nome = nome;
        this.cargo = cargo;
        this.exameMedico = exameMedico;
        this.ativo = ativo;
    }

    public static boolean removeTripulante(int id) {
        boolean removido = RegistroTripulantes.ListTripulantes().removeIf(tripulantes ->
                tripulantes.id == id
        );
        return removido;
    }
    public static boolean removeTripulante(String nome) {
        boolean removido = RegistroTripulantes.ListTripulantes().removeIf(tripulantes ->
                tripulantes.nome.equalsIgnoreCase(nome)
        );
        return removido;
    }
    public static boolean removeTripulante(int id, String nome) {
        boolean removido = RegistroTripulantes.ListTripulantes().removeIf(tripulantes ->
                tripulantes.nome.equalsIgnoreCase(nome) && tripulantes.id == id
        );
        return removido;
    }

    @Override
    public String toString() {
        return id + " - " + nome + " - " + cargo + " - Exame: " + exameMedico + " - Ativo: " + ativo;
    }
}
