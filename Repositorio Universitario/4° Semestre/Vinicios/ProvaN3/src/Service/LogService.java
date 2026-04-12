package Service;

import java.io.IOException;

public class LogService {
    private static LogService instance;
    private static final String LOG_FILE = "history.log";
    private String currentUser;

    private LogService() {}

    public static LogService getInstance() {
        if (instance == null) {
            instance = new LogService();
        }
        return instance;
    }

    public void setCurrentUser(String username) {
        this.currentUser = username;
    }

    public void log(String action) {
        try (java.io.BufferedWriter bw = new java.io.BufferedWriter(
                new java.io.FileWriter(LOG_FILE, true))) {
            String timestamp = new java.text.SimpleDateFormat("yyyy-MM-dd HH:mm:ss")
                    .format(new java.util.Date());
            String logEntry = "[" + timestamp + "] Usuário: " + currentUser + " - " + action;
            bw.write(logEntry);
            bw.newLine();
        } catch (IOException e) {
            System.err.println("Erro ao registrar log: " + e.getMessage());
        }
    }

    public String readLog() throws IOException {
        java.io.File logFile = new java.io.File(LOG_FILE);
        if (!logFile.exists()) {
            return "Nenhum histórico disponível.";
        }

        StringBuilder log = new StringBuilder();
        try (java.io.BufferedReader br = new java.io.BufferedReader(
                new java.io.FileReader(logFile))) {
            String line;
            while ((line = br.readLine()) != null) {
                log.append(line).append("\n");
            }
        }
        return log.toString();
    }
}