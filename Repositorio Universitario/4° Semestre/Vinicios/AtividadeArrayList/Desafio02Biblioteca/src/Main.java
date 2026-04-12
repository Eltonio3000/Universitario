import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
        Livro l1 = new Livro("LivroUm", "AutorUm", 2017);
        Livro l2 = new Livro("LivroDois", "AutorDois", 2019);
        Livro l3 = new Livro("LivroTres", "AutorTres", 2020);
        Revista r1 = new Revista("RevistaUm", "AutorUm", 1999, "Ed01");
        Revista r2 = new Revista("RevistaDois", "AutorDois", 1979, "Ed02");
        Revista r3 = new Revista("RevistaTres", "AutorTres", 1779, "Ed03");
        Tese t1 = new Tese("TeseUm", "AutorUm", 1921, "Uni01");
        Tese t2 = new Tese("TeseDois", "AutorDois", 1912, "Uni02");
        Tese t3 = new Tese("TeseTres", "AutorTres", 1009, "Uni03");

        Usuario user1 = new Usuario("Antonio", 111);

        /*ArrayList<Livro> listBook = new ArrayList<Livro>();
        listBook.add(l1);listBook.add(l2);listBook.add(l3);

        ArrayList<Revista> ListMagazin = new ArrayList<Revista>();
        ListMagazin.add(r1);ListMagazin.add(r2);

        ArrayList<Tese> ListThesis = new ArrayList<Tese>();
        ListThesis.add(t1);ListThesis.add(t2);*/

        ArrayList<Publicacao> lista = new ArrayList<Publicacao>();
        lista.add(l1);lista.add(l2);lista.add(l3);
        lista.add(t1);lista.add(t2);lista.add(t3);
        lista.add(r1);lista.add(r2);lista.add(r3);

        ;
        user1.emprestimos(lista);
        user1.emprestimos(lista);
        user1.emprestimos(lista);
        user1.emprestimos(lista);
        user1.emprestimos(lista);
        user1.emprestimos(lista);


        user1.Imprimir();
    }

}