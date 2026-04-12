import javax.swing.*;
import java.awt.*;


public class Interface {
    public static void show() {
        JFrame frame = new JFrame("Atividade de Java Swing");
        frame.setSize(400, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);

        JPanel painel = new JPanel();
        painel.setLayout(new FlowLayout(FlowLayout.RIGHT, 10, 10));

        JLabel label = new JLabel("Nome:");
        JTextField campo = new JTextField(15);
        JButton botaoImprimir = new JButton("Imprimir");
        JButton botaoLimpar = new JButton("Limpar");

        botaoImprimir.addActionListener(e ->
                JOptionPane.showMessageDialog(frame, "Olá, " + campo.getText() + "!")
        );
        botaoLimpar.addActionListener(e ->
                campo.setText("")
        );

        painel.add(label);
        painel.add(campo);
        painel.add(botaoImprimir);
        painel.add(botaoLimpar);

        frame.add(painel);
        frame.setVisible(true);

    }
}