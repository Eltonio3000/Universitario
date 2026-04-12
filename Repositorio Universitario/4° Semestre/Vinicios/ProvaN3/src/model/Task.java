package model;

public class Task extends Entity {
    private static int counter = 1;
    private String title;
    private String description;
    private Priority priority;
    private Status status;
    private String dueDate;

    // Construtor para nova tarefa
    public Task(String title, String description, Priority priority, Status status, String dueDate) {
        this.id = counter++;
        setTitle(title);
        setDescription(description);
        setPriority(priority);
        setStatus(status);
        setDueDate(dueDate);
    }

    // Construtor para carregar do arquivo
    public Task(int id, String title, String description, Priority priority, Status status, String dueDate) {
        this.id = id;
        setTitle(title);
        setDescription(description);
        setPriority(priority);
        setStatus(status);
        setDueDate(dueDate);
        if (id >= counter) counter = id + 1;
    }

    // Getters
    public String getTitle() { return title; }
    public String getDescription() { return description; }
    public Priority getPriority() { return priority; }
    public Status getStatus() { return status; }
    public String getDueDate() { return dueDate; }

    // Setters com validação
    public void setTitle(String title) {
        if (title == null || title.trim().isEmpty()) {
            throw new IllegalArgumentException("O título não pode estar vazio!");
        }
        this.title = title;
    }

    public void setDescription(String description) {
        if (description == null || description.trim().isEmpty()) {
            throw new IllegalArgumentException("A descrição não pode estar vazia!");
        }
        this.description = description;
    }

    public void setPriority(Priority priority) {
        if (priority == null) {
            throw new IllegalArgumentException("A prioridade não pode ser nula!");
        }
        this.priority = priority;
    }

    public void setStatus(Status status) {
        if (status == null) {
            throw new IllegalArgumentException("O status não pode ser nulo!");
        }
        this.status = status;
    }

    public void setDueDate(String dueDate) {
        if (dueDate == null || dueDate.trim().isEmpty()) {
            throw new IllegalArgumentException("A data limite não pode estar vazia!");
        }
        if (!dueDate.matches("\\d{2}/\\d{2}/\\d{4}")) {
            throw new IllegalArgumentException("Data inválida! Use o formato dd/MM/yyyy");
        }
        this.dueDate = dueDate;
    }

    @Override
    public String toCSV() {
        return id + ";" + title + ";" + description + ";" +
                priority.getDisplayName() + ";" + status.getDisplayName() + ";" + dueDate;
    }

    public static Task fromCSV(String line) {
        String[] parts = line.split(";");
        if (parts.length != 6) {
            throw new IllegalArgumentException("Formato inválido de tarefa");
        }
        return new Task(
                Integer.parseInt(parts[0]),
                parts[1],
                parts[2],
                Priority.fromString(parts[3]),
                Status.fromString(parts[4]),
                parts[5]
        );
    }

    @Override
    public String toString() {
        return "Task[id=" + id + ", title=" + title + ", status=" + status + "]";
    }
}
