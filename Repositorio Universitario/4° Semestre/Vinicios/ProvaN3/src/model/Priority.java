package model;

public enum Priority {
    BAIXA("Baixa"),
    MEDIA("Média"),
    ALTA("Alta");

    private String displayName;

    Priority(String displayName) {
        this.displayName = displayName;
    }

    public String getDisplayName() {
        return displayName;
    }

    public static Priority fromString(String text) {
        for (Priority p : Priority.values()) {
            if (p.displayName.equals(text)) {
                return p;
            }
        }
        throw new IllegalArgumentException("Prioridade inválida: " + text);
    }
}
