package view;

import Observer.TaskObserver;
import Service.LogService;
import Service.TaskService;
import model.Task;
import Repository.TaskRepository;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class MainFrame extends BaseFrame implements TaskObserver {
    private String currentUser;
    private TaskService taskService;
    private JTable taskTable;
    private DefaultTableModel tableModel;

    public MainFrame(String username) {
        this.currentUser = username;
        this.taskService = new TaskService();
        this.taskService.addObserver(this);

        initializeFrame();
        initializeComponents();
        loadTableData();
        centerOnScreen();
        setVisible(true);
    }

    private void initializeFrame() {
        setTitle("Sistema de Gerenciamento de Tarefas - Usuário: " + currentUser);
        setSize(900, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    private void initializeComponents() {
        setJMenuBar(createMenuBar());
        add(createToolBar(), BorderLayout.NORTH);
        add(createTablePanel(), BorderLayout.CENTER);
    }

    private JMenuBar createMenuBar() {
        JMenuBar menuBar = new JMenuBar();

        // Menu Arquivo
        JMenu fileMenu = new JMenu("Arquivo");
        JMenuItem saveItem = new JMenuItem("Salvar");
        saveItem.addActionListener(e -> saveTasks());
        JMenuItem exitItem = new JMenuItem("Sair");
        exitItem.addActionListener(e -> System.exit(0));
        fileMenu.add(saveItem);
        fileMenu.addSeparator();
        fileMenu.add(exitItem);

        // Menu Tarefas
        JMenu taskMenu = new JMenu("Tarefas");
        JMenuItem newTaskItem = new JMenuItem("Nova Tarefa");
        newTaskItem.addActionListener(e -> openTaskDialog(null));
        JMenuItem editTaskItem = new JMenuItem("Editar Tarefa");
        editTaskItem.addActionListener(e -> editSelectedTask());
        JMenuItem deleteTaskItem = new JMenuItem("Excluir Tarefa");
        deleteTaskItem.addActionListener(e -> deleteSelectedTask());
        taskMenu.add(newTaskItem);
        taskMenu.add(editTaskItem);
        taskMenu.add(deleteTaskItem);

        // Menu Ajuda
        JMenu helpMenu = new JMenu("Ajuda");
        JMenuItem aboutItem = new JMenuItem("Sobre");
        aboutItem.addActionListener(e -> showAbout());
        JMenuItem historyItem = new JMenuItem("Histórico");
        historyItem.addActionListener(e -> showHistory());
        helpMenu.add(aboutItem);
        helpMenu.add(historyItem);

        menuBar.add(fileMenu);
        menuBar.add(taskMenu);
        menuBar.add(helpMenu);

        return menuBar;
    }

    private JToolBar createToolBar() {
        JToolBar toolBar = new JToolBar();
        toolBar.setFloatable(false);

        JButton newBtn = new JButton("Nova");
        newBtn.addActionListener(e -> openTaskDialog(null));
        JButton editBtn = new JButton("Editar");
        editBtn.addActionListener(e -> editSelectedTask());
        JButton deleteBtn = new JButton("Excluir");
        deleteBtn.addActionListener(e -> deleteSelectedTask());
        JButton saveBtn = new JButton("Salvar");
        saveBtn.addActionListener(e -> saveTasks());

        toolBar.add(newBtn);
        toolBar.add(editBtn);
        toolBar.add(deleteBtn);
        toolBar.addSeparator();
        toolBar.add(saveBtn);

        return toolBar;
    }

    private JScrollPane createTablePanel() {
        String[] columns = {"ID", "Título", "Descrição", "Prioridade", "Status", "Data Limite"};
        tableModel = new DefaultTableModel(columns, 0) {
            @Override
            public boolean isCellEditable(int row, int column) {
                return false;
            }
        };

        taskTable = new JTable(tableModel);
        taskTable.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        taskTable.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                if (e.getClickCount() == 2) {
                    editSelectedTask();
                }
            }
        });

        return new JScrollPane(taskTable);
    }

    @Override
    public void onTasksChanged() {
        loadTableData();
    }

    private void loadTableData() {
        tableModel.setRowCount(0);
        for (Task task : taskService.getAllTasks()) {
            tableModel.addRow(new Object[]{
                    task.getId(),
                    task.getTitle(),
                    task.getDescription(),
                    task.getPriority().getDisplayName(),
                    task.getStatus().getDisplayName(),
                    task.getDueDate()
            });
        }
    }

    private void openTaskDialog(Task task) {
        new TaskDialog(this, task, taskService);
    }

    private void editSelectedTask() {
        int selectedRow = taskTable.getSelectedRow();
        if (selectedRow == -1) {
            showWarning("Selecione uma tarefa para editar!");
            return;
        }

        int taskId = (int) tableModel.getValueAt(selectedRow, 0);
        try {
            Task task = new TaskRepository().findById(taskId);
            if (task != null) {
                openTaskDialog(task);
            }
        } catch (java.io.IOException e) {
            showError("Erro ao buscar tarefa: " + e.getMessage());
        }
    }

    private void deleteSelectedTask() {
        int selectedRow = taskTable.getSelectedRow();
        if (selectedRow == -1) {
            showWarning("Selecione uma tarefa para excluir!");
            return;
        }

        if (confirm("Deseja realmente excluir esta tarefa?")) {
            int taskId = (int) tableModel.getValueAt(selectedRow, 0);
            try {
                taskService.deleteTask(taskId);
                showSuccess("Tarefa excluída com sucesso!");
            } catch (java.io.IOException e) {
                showError("Erro ao excluir tarefa: " + e.getMessage());
            }
        }
    }

    private void saveTasks() {
        try {
            taskService.saveAll(taskService.getAllTasks());
            showSuccess("Tarefas salvas com sucesso!");
        } catch (java.io.IOException e) {
            showError("Erro ao salvar tarefas: " + e.getMessage());
        }
    }

    private void showAbout() {
        String message = "<html><body style='text-align: justify; width: 350px;'>" +
                "Sistema de Gerenciamento de Tarefas<br><br>" +
                "Avaliação Nota 3 da Materia de POO<br><br>" +
                "A aplicação tem como propósito oferecer um sistema simples de gestão baseado em operações CRUD (criar, visualizar, atualizar e excluir)           " +
                "sobre uma entidade principal — neste caso, Tarefas. O sistema permite ao usuário registrar atividades, editá-las e removê-las conforme necessário,           " +
                "mantendo essas informações salvas em um arquivo local, garantindo persistência mesmo após o fechamento do programa.           " +
                "Sua construção demonstra uma arquitetura organizada em camadas, separando dados, lógica e interface. Os dados das tarefas são salvos e recuperados           " +
                "por meio de arquivos .txt ou .csv, enquanto a interface gráfica, desenvolvida em Swing, permite que o usuário realize todas as operações de forma visual e intuitiva.           " +
                "Além disso, o sistema implementa tratamento de exceções coerente, validando campos, capturando erros com try/catch e exibindo mensagens claras ao usuário.           " +
                "</body></html>";
        JOptionPane.showMessageDialog(this, message, "Sobre", JOptionPane.INFORMATION_MESSAGE);
    }

    private void showHistory() {
        try {
            String log = LogService.getInstance().readLog();
            JTextArea textArea = new JTextArea(log);
            textArea.setEditable(false);
            JScrollPane scrollPane = new JScrollPane(textArea);
            scrollPane.setPreferredSize(new Dimension(600, 400));

            JOptionPane.showMessageDialog(this, scrollPane,
                    "Histórico de Alterações", JOptionPane.INFORMATION_MESSAGE);
        } catch (java.io.IOException e) {
            showError("Erro ao carregar histórico: " + e.getMessage());
        }
    }
}