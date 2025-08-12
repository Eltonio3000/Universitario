/*
8) Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185,72
A distância de 185,72m corresponde a:
0,18572Km       1857,2dm
1,8572Hm        18572,0cm
18,572Dam       185720,0mm
*/

import java.util.Scanner;

public class Main {

    public static double lerDouble(){
        Scanner ler = new Scanner(System.in);
        return ler.nextDouble();
    }

    public static void main(String[] args) {

        System.out.println("digite uma distancia em metros");
        double distancia = lerDouble();

        double km  = distancia / 1000;
        double hm  = distancia / 100;
        double dam = distancia / 10;
        double dm  = distancia * 10;
        double cm  = distancia * 100;
        double mm  = distancia * 1000;

        System.out.println("\nA distância de "+ distancia +"m corresponde a");
        System.out.println(km +"km........"+dm+"dm\n"+hm+"hm........."+cm+"cm\n"+dam+"dam........"+mm+"mm");
    }
}