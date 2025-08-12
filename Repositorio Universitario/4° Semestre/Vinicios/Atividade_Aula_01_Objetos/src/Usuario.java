public class Usuario {
    int id;
    String nome;
    String email;
    String senha;

    public void login( String email, String senha) {
        System.out.println("Entrei.");
    }
    public void logout( String email, String senha) {
        System.out.println("Sai.");
    }


}
