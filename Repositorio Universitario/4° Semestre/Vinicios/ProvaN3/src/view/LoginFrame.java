package view;

import Service.AuthenticationService;

import javax.swing.*;
import java.awt.*;

public class LoginFrame extends BaseFrame {
    private JTextField usernameField;
    private JPasswordField passwordField;
    private AuthenticationService authService;

    public LoginFrame() {
        this.authService = new AuthenticationService();
        initializeFrame();
        initializeComponents();
        centerOnScreen();
        setVisible(true);
    }

    private void initializeFrame() {
        setTitle("Sistema de Gerenciamento de Tarefas - Login");
        setSize(400, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    private void initializeComponents() {
        JPanel panel = new JPanel(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(5, 5, 5, 5);

        // Título
        JLabel titleLabel = new JLabel("Bem-vindo ao Sistema de Tarefas");
        titleLabel.setFont(new Font("Arial", Font.BOLD, 16));
        gbc.gridx = 0; gbc.gridy = 0; gbc.gridwidth = 2;
        panel.add(titleLabel, gbc);

        // Campo Usuário
        gbc.gridwidth = 1; gbc.gridy = 1;
        panel.add(new JLabel("Usuário:"), gbc);
        gbc.gridx = 1;
        usernameField = new JTextField(15);
        panel.add(usernameField, gbc);

        // Campo Senha
        gbc.gridx = 0; gbc.gridy = 2;
        panel.add(new JLabel("Senha:"), gbc);
        gbc.gridx = 1;
        passwordField = new JPasswordField(15);
        passwordField.addActionListener(e -> performLogin());
        panel.add(passwordField, gbc);

        // Botão Login
        JButton loginButton = new JButton("Entrar");
        loginButton.addActionListener(e -> performLogin());
        gbc.gridx = 0; gbc.gridy = 3; gbc.gridwidth = 2;
        panel.add(loginButton, gbc);

        // Info
        JLabel infoLabel = new JLabel("Usuário padrão: admin / Senha: admin123");
        infoLabel.setFont(new Font("Arial", Font.ITALIC, 10));
        gbc.gridy = 4;
        panel.add(infoLabel, gbc);

        add(panel);
    }

    private void performLogin() {
        String username = usernameField.getText().trim();
        String password = new String(passwordField.getPassword());

        if (username.isEmpty() || password.isEmpty()) {
            showWarning("Por favor, preencha todos os campos!");
            return;
        }

        if (authService.authenticate(username, password)) {
            dispose();
            new MainFrame(username);
        } else {
            showError("Usuário ou senha incorretos!");
            passwordField.setText("");
        }
    }
}
