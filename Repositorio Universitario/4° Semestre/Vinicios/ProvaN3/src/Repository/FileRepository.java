package Repository;

import java.io.IOException;

abstract class FileRepository<T> implements IRepository<T> {
    protected String filename;

    public FileRepository(String filename) {
        this.filename = filename;
    }

    protected abstract T parseLine(String line);
    protected abstract String entityToLine(T entity);

    @Override
    public java.util.List<T> loadAll() throws IOException {
        java.util.ArrayList<T> items = new java.util.ArrayList<>();
        java.io.File file = new java.io.File(filename);

        if (!file.exists()) {
            return items;
        }

        try (java.io.BufferedReader br = new java.io.BufferedReader(new java.io.FileReader(file))) {
            String line;
            while ((line = br.readLine()) != null) {
                if (!line.trim().isEmpty()) {
                    try {
                        items.add(parseLine(line));
                    } catch (Exception e) {
                        System.err.println("Erro ao processar linha: " + line + " - " + e.getMessage());
                    }
                }
            }
        }
        return items;
    }

    @Override
    public void saveAll(java.util.List<T> entities) throws IOException {
        try (java.io.BufferedWriter bw = new java.io.BufferedWriter(new java.io.FileWriter(filename))) {
            for (T entity : entities) {
                bw.write(entityToLine(entity));
                bw.newLine();
            }
        }
    }

    @Override
    public void save(T entity) throws IOException {
        java.util.List<T> all = loadAll();
        all.add(entity);
        saveAll(all);
    }

    @Override
    public void delete(T entity) throws IOException {
        java.util.List<T> all = loadAll();
        all.remove(entity);
        saveAll(all);
    }
}
