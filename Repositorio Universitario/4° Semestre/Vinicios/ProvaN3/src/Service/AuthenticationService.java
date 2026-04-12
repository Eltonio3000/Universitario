package Service;

import model.User;
import Repository.UserRepository;

import java.io.IOException;

public class AuthenticationService {
    private UserRepository userRepository;
    private LogService logService;

    public AuthenticationService() {
        this.userRepository = new UserRepository();
        this.logService = LogService.getInstance();
    }

    public boolean authenticate(String username, String password) {
        try {
            User user = userRepository.authenticate(username, password);
            if (user != null) {
                logService.setCurrentUser(username);
                logService.log("Login realizado com sucesso");
                return true;
            }
            return false;
        } catch (IOException e) {
            System.err.println("Erro na autenticação: " + e.getMessage());
            return false;
        }
    }
}
