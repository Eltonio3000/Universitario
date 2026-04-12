import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;

public class Main {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<String>();
        list.add("Vermelho");
        list.add("Preto");
        list.add("Azul");
        list.add("Cinza");
        list.add("Verde");
        list.add("Roxo");

        list.add(0, "Bege");


        System.out.println("listas de cores:");
        for (String item : list) {
            System.out.println(item);
        }
        System.out.println(" ");



        Collections.sort(list);

        System.out.println("lista depois da ordenação");
        for (String item : list) {
            System.out.println(item);
        }
        list.remove(2);
        System.out.println(" ");

        System.out.println("Lista sem o item 3:");
        for (String item : list) {
            System.out.println(item);
        }

    }
}