
//lista 3//

//exercico 1 - Faça um algoritmo que leia o valor//
//do salario minimo e a quantidade de kilowatts consumida por uma residencia. Calcule//
//o valor em reais a ser pago e o valor a ser pago com um desconto de 10%.//
//Dados: 100 kilowatts custa 1/7 do salario minimo.//

#include <stdio.h>
int main (){
    float valorComDesconto, valorSemDesconto, salario, kilowatts, kilowattsCasa, valorKilowatts;
    printf("digite o valor do salario minimo: ");
    scanf("%f",&salario);
    printf("digite o quantos kilowatts consumidos pela residencia: ");
    scanf("%f",&kilowattsCasa);
    kilowatts = salario / 7;
    valorKilowatts = kilowatts / kilowattsCasa;
    valorSemDesconto = valorKilowatts * kilowattsCasa;
    valorComDesconto = valorSemDesconto -((10 / 100)* valorSemDesconto);
    printf("o valor a ser pago nessa casa e: %.2f",valorComDesconto);
    printf("\no valor sem desconto e: %.2f",valorSemDesconto);

    return 0;
}

//exercicio 2 - Calculo de um salario liquido de um professor. Serao fornecidos valor da hora aula,//
//numero de aulas dadas e o % de desconto do INSS//


#include <stdio.h>
int main (){
  float salario2, salario, horaAula, aulas, inss;
  printf("qual o valor da hora aula do mes desse professor: ");
  scanf("%f",&horaAula);
  printf("quantas aula esse professor tem no mes: ");
  scanf("%f",&aulas);
  printf("digite a porcentagem do INSS: ");
  scanf("%f",&inss);
  salario = horaAula * aulas;
  salario2 = salario -((inss / 100)* salario);
  printf("o salario desse professor com o INSS descontado e: %.2f", salario2);
  printf("\no salario desse professor e: %.2f", salario);
    return 0;
}

//exercicio 3 - O custo de um carro novo ao consumidor e a soma do custo de fabrica com a//
//porcentagem do distribuidor e dos impostos (aplicados ao custo de fabrica). Supondo que o//
//percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o//
//custo de fabrica de um carro, calcular e escrever o custo final ao consumidor //

#include <stdio.h>
int main (){
    float custoFabrica, custoFinal;
    printf("digite o valor do custo de fabrica do carro: ");
    scanf("%f",&custofabrica); 
custoFinal = custoFabrica + (custoFabrica*(45 / 100))+(custoFabrica*(28 / 100));
    printf("no valor final desse carro e: %.2f", custoFinal);
    return 0;
}
 

//exercicio 4 - Faça um Programa que converte metros para centimetros//

#include<stdio.h>
int main (){
 float metro, centi;
 printf("digite o comprimento do metro: ");
 scanf("%f",&metro);
 centi = metro * 100;
 printf("esse comprimeto em centimetro e: %.2f", centi);
    return 0;
}
