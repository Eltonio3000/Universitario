import java.util.Random;
import java.util.Scanner;

public class Questao07 {

    public static int lerInt(){
        Scanner sc = new Scanner(System.in);
        return sc.nextInt();
    }

    public static void Cartas(){
        boolean StartStop = true;
        int jogador = 2;
        System.out.println("**Cartas**");
        while(StartStop){
            if(jogador == 1){
                jogador = 2;
                System.out.println("jogador 1 joga...");
            }
            if(jogador == 2){
                jogador = 1;
                System.out.println("jogador dois joga...");
            }
            System.out.printf("informe um valor entre 2 a 5\n\n>>> ");
            int numCartas = lerInt();
            int SorteAzar=0;
            for(int i = 0; i < numCartas; i++){
                SorteAzar += GerarNumerosAleatorios();
            }

            try {
                if (SorteAzar > 21) {
                    throw new GameOverException();
                }
            } catch (GameOverException e) {
                StartStop = false;
            }
        }
        if(jogador == 1) {
            System.out.println("jogador 2 perdeu");
        } if(jogador == 2) {
            System.out.println("jogador 1 perdeu");
        }
    }


    public static int GerarNumerosAleatorios(){
        Random random = new Random();

        int SorteAzar = random.nextInt(13 - 1 + 1) + 1;
        return SorteAzar;


    }
}