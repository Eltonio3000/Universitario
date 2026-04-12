public class Contato {
    private String nome;
    private String telefone;
    private String email;

    public Contato(String nome, String telefone, String email) {
        this.nome = nome;
        this.telefone = telefone;
        this.email = email;
    }

    public String toString() {
        return "Nome: " + nome
                + "\nTelefone: " + telefone
                + "\nEmail: " + email;
    }

    public Boolean equals(Contato contato) {


        return ;
    }
}
