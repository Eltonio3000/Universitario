package model;

public enum Status {
    PENDENTE("Pendente"),
    EM_PROGRESSO("Em Progresso"),
    CONCLUIDA("Concluída");

    private String displayName;

    Status(String displayName) {
        this.displayName = displayName;
    }

    public String getDisplayName() {
        return displayName;
    }

    public static Status fromString(String text) {
        for (Status s : Status.values()) {
            if (s.displayName.equals(text)) {
                return s;
            }
        }
        throw new IllegalArgumentException("Status inválido: " + text);
    }
}
