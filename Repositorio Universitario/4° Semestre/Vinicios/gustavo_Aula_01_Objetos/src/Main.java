public class Main {

    public static void main(String[] args) {

        System.out.println("Hello, World!");

        Pessoa p1 = new Pessoa("joao", "6499999999", "none@gmail.com", "rua tal bairro tal", "legal", "tocantins", "0000-0", "homem", 2005);
        System.out.println("idade: " + p1.calcularIdade());
    }
}
