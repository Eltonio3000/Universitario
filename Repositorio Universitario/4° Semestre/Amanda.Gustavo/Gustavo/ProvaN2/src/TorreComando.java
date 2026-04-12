import java.util.ArrayList;

public class TorreComando {
     private static ArrayList<Naves> naves = new ArrayList<Naves>();


     public static ArrayList Naves() {
         return naves;
     }

     public static void RemoveNave(int id) {
         naves.removeIf(naves -> naves.getIdNave() == id);}

     public static void addNave(int idNave){
         naves.add(new Naves(idNave));
     }

    public static void DadosIniciasNaves() {
        addNave(101);
        addNave(102);
        addNave(103);
        addNave(104);
        addNave(105);
    }
     public static void ShowNaves(){
         for (Naves nav : naves) {
             System.out.println(nav);
         }
     }

}
