package Repository;

import model.User;

import java.io.IOException;

public class UserRepository extends FileRepository<User> {
    private static final String USERS_FILE = "users.txt";

    public UserRepository() {
        super(USERS_FILE);
        initializeDefaultUser();
    }

    private void initializeDefaultUser() {
        try {
            java.util.List<User> users = loadAll();
            if (users.isEmpty()) {
                save(new User("admin", "admin123"));
            }
        } catch (IOException e) {
            System.err.println("Erro ao inicializar usuário padrão: " + e.getMessage());
        }
    }

    @Override
    protected User parseLine(String line) {
        return User.fromCSV(line);
    }

    @Override
    protected String entityToLine(User entity) {
        return entity.toCSV();
    }

    public User authenticate(String username, String password) throws IOException {
        java.util.List<User> users = loadAll();
        for (User user : users) {
            if (user.getUsername().equals(username) && user.getPassword().equals(password)) {
                return user;
            }
        }
        return null;
    }
}