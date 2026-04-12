package Service;

import Observer.TaskObserver;
import Repository.TaskRepository;
import model.Task;

import java.io.IOException;

public class TaskService {
    private TaskRepository taskRepository;
    private LogService logService;
    private java.util.List<TaskObserver> observers;

    public TaskService() {
        this.taskRepository = new TaskRepository();
        this.logService = LogService.getInstance();
        this.observers = new java.util.ArrayList<>();
    }

    public void addObserver(TaskObserver observer) {
        observers.add(observer);
    }

    private void notifyObservers() {
        for (TaskObserver observer : observers) {
            observer.onTasksChanged();
        }
    }

    public java.util.List<Task> getAllTasks() {
        try {
            return taskRepository.loadAll();
        } catch (IOException e) {
            System.err.println("Erro ao carregar tarefas: " + e.getMessage());
            return new java.util.ArrayList<>();
        }
    }

    public void createTask(Task task) throws IOException {
        taskRepository.save(task);
        logService.log("Tarefa criada: " + task.getTitle());
        notifyObservers();
    }

    public void updateTask(Task task) throws IOException {
        taskRepository.update(task);
        logService.log("Tarefa atualizada: ID " + task.getId());
        notifyObservers();
    }

    public void deleteTask(int taskId) throws IOException {
        Task task = taskRepository.findById(taskId);
        if (task != null) {
            java.util.List<Task> tasks = getAllTasks();
            tasks.removeIf(t -> t.getId() == taskId);
            taskRepository.saveAll(tasks);
            logService.log("Tarefa excluída: ID " + taskId);
            notifyObservers();
        }
    }

    public void saveAll(java.util.List<Task> tasks) throws IOException {
        taskRepository.saveAll(tasks);
        logService.log("Todas as tarefas salvas");
    }
}
