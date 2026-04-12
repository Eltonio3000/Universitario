import javax.swing.*;
import java.awt.*;


public class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Exemplo Swing");
        frame.setSize(400, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);

        JPanel painel = new JPanel();
        painel.setLayout(new FlowLayout(FlowLayout.RIGHT, 10, 10));

        JLabel label = new JLabel("Nome:");
        JTextField campo = new JTextField(15);
        JButton botaoSaudar = new JButton("Saudar");
        JButton botaoEventos = new JButton("Eventos");

        botaoSaudar.addActionListener(e ->
                JOptionPane.showMessageDialog(frame, "Olá, " + campo.getText() + "!")
        );

        botaoEventos.addActionListener(e -> ExemploEventos.main(args));

        painel.add(label);
        painel.add(campo);
        painel.add(botaoSaudar);
        painel.add(botaoEventos);

        frame.add(painel);
        frame.setVisible(true);

    }
}