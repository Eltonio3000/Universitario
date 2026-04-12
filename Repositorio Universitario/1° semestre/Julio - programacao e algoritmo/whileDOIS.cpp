/*Utilizando WHILE, crie um algoritmo para verificar
quantos valores pares e quantos valores impares foram digitados, o algoritmo deve parar
de solicitar valores quando for digitado o 0(ZERO).*/

#include <stdio.h>
int main (){
 	int num=1, cont=1, contP=0, contI=0, contN=0;
 	
 	printf("verificacao de numeros pares e impares:");
 	
 	while(num != 0){
 		printf("\n\n%d)digite um valor: ",cont);
 		scanf("%d",&num);
 		
 	    if(num == 0){
		 	printf("o numero %d e nulo",num);
		 	contN++;
		 	
		 }
		 else if(num % 2 == 0){
 			printf("o numero %d e par",num);
 			contP++;
		 
		 }
		 else if ((num % 2) != 0){
		 	printf("o numero %d e impar",num);
 			contI++;
		 	
		 }
		 
 		cont++;
	 }
	 cont = cont - 1;
	 printf("\n\nImpar: %d\nPar: %d\nNulo: %d\nHouve %d requisicoes",contI,contP,contN,cont);
	
	return 0;
}

/*Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de
 crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de
1.5%. Faça um programa que calcule e escreva o número de anos necessários para que a 
população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento,
imprima a população dos países ao final do cálculo =)*/

#include <stdio.h>
int main (){
	int paisA=80000, paisB=200000, anos=0;
	
	anos++;
	printf("Ano: %d\nPais A: %d\nPais B: %d\n",anos,paisA,paisB);
	
	while(paisA <= paisB){
		paisA = paisA + (paisA * 0.03);
		paisB = paisB + (paisB * 0.015);
		anos++;
	    printf("\nAno: %d\nPais A: %d\nPais B: %d\n",anos,paisA,paisB);
		
	}
	
	return 0;
}
