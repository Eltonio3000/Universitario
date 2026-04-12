import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;

public class Main {
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();

        list.add(1);
        list.add(6);
        list.add(9);
        list.add(10);
        list.add(8);
        list.add(2);
        list.add(4);
        list.add(5);
        list.add(3);
        list.add(7);

        System.out.println("Lista de inteiros:");
        for (Integer item : list) {
            System.out.println(item);
        }
        System.out.println(" ");


        list.add(0, 0);
        list.add(list.size(), 100);

        System.out.println("Lista de inteiros depois da adição inicio e fim:");
        for (Integer item : list) {
            System.out.println(item);
        }
        System.out.println(" ");

        list.remove(0);
        list.remove(2);
        list.remove(list.size() - 1);

        System.out.println("Lista de inteiros depois da remoção:");
        for (Integer item : list) {
            System.out.println(item);
        }
        System.out.println(" ");

        Collections.sort(list);

        System.out.println("Lista de inteiros depois da ordenação");
        for (Integer item : list) {
            System.out.println(item);
        }
        System.out.println(" ");

        list.clear();
        System.out.println("Lista vazia");
        for (Integer item : list) {
            System.out.println(item);
        }
        System.out.println(" ");

    }
}
