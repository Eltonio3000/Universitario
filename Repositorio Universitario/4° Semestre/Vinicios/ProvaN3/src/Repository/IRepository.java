package Repository;

import java.io.IOException;

public interface IRepository<T> {
    void save(T entity) throws IOException;
    void saveAll(java.util.List<T> entities) throws IOException;
    java.util.List<T> loadAll() throws IOException;
    void delete(T entity) throws IOException;
}
