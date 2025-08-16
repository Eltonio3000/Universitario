import java.util.ArrayList;
import java.util.List;

public class Relatorio implements Imprimivel {
    private List<String> itens;

    public Relatorio() {
        this.itens = new ArrayList<>();
    }

    public void adicionarItem(String item) {
        itens.add(item);
    }

    @Override
    public void imprimir() {
        System.out.println("=== Relatório ===");
        for (String item : itens) {
            System.out.println(item);
        }
        System.out.println("=================");
    }
}
