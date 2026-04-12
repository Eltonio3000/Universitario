import javax.swing.*;
import java.awt.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class ExemploEventos {
    public static void main(String[] args) {

        JFrame frame = new JFrame("Exemplo de Eventos");
        frame.setSize(400, 300);
        frame.setLayout(new FlowLayout());
        frame.setLocationRelativeTo(null);

        JButton botao = new JButton("Clique aqui");
        JTextField campoTexto = new JTextField(5);
        JLabel labelInfo = new JLabel("Passe o mouse ou digite algo...");

        // === 1. Evento de clique no botão ===
        botao.addActionListener(e -> {
            JOptionPane.showMessageDialog(frame, "Você clicou no botão!");
        });

        // === 2. Eventos do mouse no label ===
        labelInfo.addMouseListener(new MouseListener() {
            @Override
            public void mouseClicked(MouseEvent e) {
                labelInfo.setText("Você clicou no texto!");
            }

            @Override
            public void mousePressed(MouseEvent e) {
                labelInfo.setText("Mouse pressionado");
            }

            @Override
            public void mouseReleased(MouseEvent e) {
                labelInfo.setText("Mouse solto");
            }

            @Override
            public void mouseEntered(MouseEvent e) {
                labelInfo.setText("Mouse entrou na área do texto!");
            }

            @Override
            public void mouseExited(MouseEvent e) {
                labelInfo.setText("Mouse saiu do texto!");
            }
        });

        // === 3. Evento de teclado no campo de texto ===
        campoTexto.addKeyListener(new KeyListener() {
            @Override
            public void keyTyped(KeyEvent e) {
                // Chamado quando o usuário digita um caractere
            }

            @Override
            public void keyPressed(KeyEvent e) {
                labelInfo.setText("Tecla pressionada: " + e.getKeyChar());
            }

            @Override
            public void keyReleased(KeyEvent e) {
                // Chamado quando a tecla é liberada
            }
        });

        // Adiciona componentes à janela
        frame.add(botao);
        frame.add(campoTexto);
        frame.add(labelInfo);

        // Exibe a janela
        frame.setVisible(true);
    }
}