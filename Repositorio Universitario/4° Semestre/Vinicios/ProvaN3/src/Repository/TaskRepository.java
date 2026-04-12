package Repository;

import model.Task;

import java.io.IOException;

public class TaskRepository extends FileRepository<Task> {
    private static final String TASKS_FILE = "tasks.csv";

    public TaskRepository() {
        super(TASKS_FILE);
    }

    @Override
    protected Task parseLine(String line) {
        return Task.fromCSV(line);
    }

    @Override
    protected String entityToLine(Task entity) {
        return entity.toCSV();
    }

    public Task findById(int id) throws IOException {
        java.util.List<Task> tasks = loadAll();
        for (Task task : tasks) {
            if (task.getId() == id) {
                return task;
            }
        }
        return null;
    }

    public void update(Task updatedTask) throws IOException {
        java.util.List<Task> tasks = loadAll();
        for (int i = 0; i < tasks.size(); i++) {
            if (tasks.get(i).getId() == updatedTask.getId()) {
                tasks.set(i, updatedTask);
                break;
            }
        }
        saveAll(tasks);
    }
}
