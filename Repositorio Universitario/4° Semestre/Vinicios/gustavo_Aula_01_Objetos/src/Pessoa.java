import javax.crypto.spec.PSource;

public class Pessoa {
    String nome;
    String telefone;
    String email;
    String endereco;
    String cidade;
    String estado;
    String cep;
    String sexo;
    int anoNascimento;

    public void comer(){
        System.out.println("comendo...");
    }
    public void dormir(){
        System.out.println("ZzZzZzZz...");
    }
    public int calcularIdade(){
        int anoAtual = 2025;
        int idade;
        idade = anoAtual - this.anoNascimento;

        return idade;
    }

    public Pessoa(String nome, String telefone, String email, String endereco, String cidade, String estado, String cep, String sexo, int anoNascimento) {
        this.nome = nome;
        this.telefone = telefone;
        this.email = email;
        this.endereco = endereco;
        this.cidade = cidade;
        this.estado = estado;
        this.cep = cep;
        this.sexo = sexo;
        this.anoNascimento = anoNascimento;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getCidade() {
        return cidade;
    }

    public void setCidade(String cidade) {
        this.cidade = cidade;
    }

    public String getEstado() {
        return estado;
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }

    public String getCep() {
        return cep;
    }

    public void setCep(String cep) {
        this.cep = cep;
    }

    public String getSexo() {
        return sexo;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public int getIdade() {
        return anoNascimento;
    }

    public void setIdade(int anoNascimento) {
        this.anoNascimento = anoNascimento;
    }
}
