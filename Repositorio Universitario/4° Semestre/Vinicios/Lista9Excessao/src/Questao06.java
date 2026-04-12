/*
Crie um programa que declare uma variável e inicialize-a como null e tente acessar o metodo
para pegar o tamanho dessa variável. Use um bloco try-catch para capturar a exceção
NullPointerException e exiba uma mensagem de erro: “Impossível utilizar um metodo de uma
variável nula”.
*/


public class Questao06 {

    private String texto = null;

    public Questao06(String texto) {
        this.texto = texto;
    }

    public void Resolucao06(){
        try {
            System.out.println("tamanho: " + texto.length());
        } catch (Exception e) {
            System.out.println("Erro: " + e.getMessage());
            System.out.println("Impossível utilizar um metodo de uma variável nula");
        }
    }
}
