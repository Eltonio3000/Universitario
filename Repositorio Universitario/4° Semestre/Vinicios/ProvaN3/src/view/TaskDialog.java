package view;

import Service.TaskService;
import model.Priority;
import model.Status;
import model.Task;

import javax.swing.*;
import java.awt.*;

public class TaskDialog extends JDialog {
    private Task task;
    private TaskService taskService;
    private MainFrame parent;

    private JTextField titleField;
    private JTextArea descriptionArea;
    private JComboBox<String> priorityCombo;
    private JComboBox<String> statusCombo;
    private JTextField dueDateField;

    public TaskDialog(MainFrame parent, Task task, TaskService taskService) {
        super(parent, task == null ? "Nova Tarefa" : "Editar Tarefa", true);
        this.parent = parent;
        this.task = task;
        this.taskService = taskService;

        initializeDialog();
        initializeComponents();
        if (task != null) {
            fillFormWithTaskData();
        }

        setLocationRelativeTo(parent);
        setVisible(true);
    }

    private void initializeDialog() {
        setSize(500, 400);
    }

    private void initializeComponents() {
        JPanel panel = new JPanel(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(5, 5, 5, 5);
        gbc.fill = GridBagConstraints.HORIZONTAL;

        // Título
        gbc.gridx = 0; gbc.gridy = 0;
        panel.add(new JLabel("Título:"), gbc);
        gbc.gridx = 1;
        titleField = new JTextField(20);
        panel.add(titleField, gbc);

        // Descrição
        gbc.gridx = 0; gbc.gridy = 1;
        panel.add(new JLabel("Descrição:"), gbc);
        gbc.gridx = 1;
        descriptionArea = new JTextArea(5, 20);
        panel.add(new JScrollPane(descriptionArea), gbc);

        // Prioridade
        gbc.gridx = 0; gbc.gridy = 2;
        panel.add(new JLabel("Prioridade:"), gbc);
        gbc.gridx = 1;
        String[] priorities = {Priority.BAIXA.getDisplayName(),
                Priority.MEDIA.getDisplayName(),
                Priority.ALTA.getDisplayName()};
        priorityCombo = new JComboBox<>(priorities);
        panel.add(priorityCombo, gbc);

        // Status
        gbc.gridx = 0; gbc.gridy = 3;
        panel.add(new JLabel("Status:"), gbc);
        gbc.gridx = 1;
        String[] statuses = {Status.PENDENTE.getDisplayName(),
                Status.EM_PROGRESSO.getDisplayName(),
                Status.CONCLUIDA.getDisplayName()};
        statusCombo = new JComboBox<>(statuses);
        panel.add(statusCombo, gbc);

        // Data Limite
        gbc.gridx = 0; gbc.gridy = 4;
        panel.add(new JLabel("Data Limite:"), gbc);
        gbc.gridx = 1;
        dueDateField = new JTextField(20);
        dueDateField.setToolTipText("Formato: dd/MM/yyyy");
        panel.add(dueDateField, gbc);

        // Botões
        JPanel buttonPanel = new JPanel();
        JButton saveButton = new JButton("Salvar");
        saveButton.addActionListener(e -> saveTask());
        JButton cancelButton = new JButton("Cancelar");
        cancelButton.addActionListener(e -> dispose());
        buttonPanel.add(saveButton);
        buttonPanel.add(cancelButton);

        gbc.gridx = 0; gbc.gridy = 5; gbc.gridwidth = 2;
        panel.add(buttonPanel, gbc);

        add(panel);
    }

    private void fillFormWithTaskData() {
        titleField.setText(task.getTitle());
        descriptionArea.setText(task.getDescription());
        priorityCombo.setSelectedItem(task.getPriority().getDisplayName());
        statusCombo.setSelectedItem(task.getStatus().getDisplayName());
        dueDateField.setText(task.getDueDate());
    }

    private void saveTask() {
        try {
            String title = titleField.getText().trim();
            String description = descriptionArea.getText().trim();
            Priority priority = Priority.fromString((String) priorityCombo.getSelectedItem());
            Status status = Status.fromString((String) statusCombo.getSelectedItem());
            String dueDate = dueDateField.getText().trim();

            if (task == null) {
                // Criar nova tarefa
                Task newTask = new Task(title, description, priority, status, dueDate);
                taskService.createTask(newTask);
                JOptionPane.showMessageDialog(this, "Tarefa criada com sucesso!",
                        "Sucesso", JOptionPane.INFORMATION_MESSAGE);
            } else {
                // Atualizar tarefa existente
                task.setTitle(title);
                task.setDescription(description);
                task.setPriority(priority);
                task.setStatus(status);
                task.setDueDate(dueDate);
                taskService.updateTask(task);
                JOptionPane.showMessageDialog(this, "Tarefa atualizada com sucesso!",
                        "Sucesso", JOptionPane.INFORMATION_MESSAGE);
            }

            dispose();
        } catch (IllegalArgumentException e) {
            JOptionPane.showMessageDialog(this, e.getMessage(),
                    "Erro de Validação", JOptionPane.ERROR_MESSAGE);
        } catch (java.io.IOException e) {
            JOptionPane.showMessageDialog(this, "Erro ao salvar tarefa: " + e.getMessage(),
                    "Erro", JOptionPane.ERROR_MESSAGE);
        }
    }
}