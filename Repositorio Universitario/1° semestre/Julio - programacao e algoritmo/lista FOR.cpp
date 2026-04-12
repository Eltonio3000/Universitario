/*1. Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto 
Zé tem 1,10 metros e cresce 3 centímetros por ano. Construa um algoritmo 
que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/
/*correto*/

#include <stdio.h>
int main (){
	float chico=1.50 ,ze=1.10 ,ano=1;
		
	for ( ; ze < chico; ano++){
		chico = chico + 0.02;
		ze = ze + 0.03;
		
		printf("%.0f ano\nchico: %.2f metros\nze: %.2f metros\n\n",ano,chico,ze);
		
		
	}
	
	return 0;
}

/*2. Construa um algoritmo que calcule a tabuada multiplicação de 1 a 5.*/
/*correto*/

#include<stdio.h>
int main (){
	int um=1 ,dois=2 ,tres=3 ,quatro=4 ,cinco=5, resultado;
	
	printf("tabuada multiplicacao 1\n");
	
	for (int i=1 ; i <= 10 ; i++){
		resultado = um * i;
		printf("%d + %d = %d\n",um,i,resultado);
		
	}
	
	printf("\ntabuada multiplicacao 2\n");
	
	for (int i=1 ; i <= 10 ; i++){
		resultado = dois * i;
		printf("%d + %d = %d\n",dois,i,resultado);
		
	}
	
	printf("\ntabuada multiplicacao 3\n");
	
	for (int i=1 ; i <= 10 ; i++){
		resultado = tres * i;
		printf("%d + %d = %d\n",tres,i,resultado);
		
	}
	
	printf("\ntabuada multiplicacao 4\n");
	
	for (int i=1 ; i <= 10 ; i++){
		resultado = quatro * i;
		printf("%d + %d = %d\n",quatro,i,resultado);
		
	}
	
	printf("\ntabuada multiplicacao 5\n");
	
	for (int i=1 ; i <= 10 ; i++){
		resultado = cinco * i;
		printf("%d + %d = %d\n",cinco,i,resultado);
		
	}
	
	
	return 0;
}

/*3. Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000.*/
/*correto*/

#include <stdio.h>
int main (){
	
	for ( int multiplos=7; multiplos < 1000 ; multiplos+=7 ){
			printf("%2d,",multiplos);
		
	}
	
	return 0;
}

/*4. Faça um programa que receba dois números inteiros e gere os números inteiros que
 estão no intervalo compreendido por eles.*/
 /*correto*/

#include <stdio.h>
 int main (){
 	int num1 ,num2, intervalo;
 	
 	printf("digite um valor: ");
 	scanf("%d",&num1);
 	printf("digite outro valor: ");
 	scanf("%d",&num2);
 	printf("\n");
 	
 	if(num2 > num1 ){
 		if ((num1 + 1) == num2 || (num2 + 1) == num1){
		 	printf("nao existe numero no intervalo");
		}
 		intervalo = num1 + 1;
 		for ( ; intervalo < num2 ; intervalo++ ){
 			printf("%2d,",intervalo);
 			
		 }

	}
	else if (num1 > num2){
		if ((num1 + 1) == num2 || (num2 + 1) == num1){
		 	printf("nao existe numero no intervalo");
		}
		intervalo = num2 + 1;
		for ( ; intervalo < num1 ; intervalo++ ){
 			printf("%2d,",intervalo);
 			
		}

	}
	else if (num1 == num2){
 			printf("\nos numeros sao iguais");
		
	}
	else{
		 		 	printf("erro ");

	}
	 
 	
 	return 0;
 }

/*5. Faça um programa que imprime na tela apenas os números ímpares entre 1 e 50.*/
/*correto*/

#include<stdio.h>
int main (){	
	for(int impares=1; impares < 50; impares+=2){
		printf("%2d,",impares);
		
	}
	
	return 0;
}

/*6. Faça a somatória dos valores impressos no exercício anterior.*/
/*correto*/

#include <stdio.h>
int main (){
	int soma;
	
	for(int impares=1; impares < 50; impares+=2){
		soma = soma + impares;
		printf("%2d,",impares);
		
    }
	printf("\n\na soma desses valores sao %d",soma);
	
	return 0;
}
