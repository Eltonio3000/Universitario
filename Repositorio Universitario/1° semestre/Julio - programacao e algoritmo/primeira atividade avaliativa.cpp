/*
1. 1. Faça um programa em C que leia 20 números e armazene em um vetor. Depois, some os 10
primeiros elementos deste vetor;
*/

#include<stdio.h>
int main(){
	int valores[20], i=0;
	int soma=0;
	
	printf("digite 20 valores...");
	for( ; i<20 ; i++){
		printf("\n:");
		scanf("%d",&valores[i]);
		if( i<10 ){
			soma = soma + valores[i];
		}
	}
	
	printf("a soma dos 10 primeiros valores do vetor digitado e: %d", soma);
	
	return 0;
}

/*
2. Ler um vetor de 10 elementos inteiros e positivos. Criar um segundo vetor da seguinte forma: os
elementos de índice par receberão os respectivos elementos divididos por 2; os elementos de índice
ímpar receberão os respectivos elementos multiplicados por 3. Imprima os dois vetores.
*/

#include<stdio.h>
int main (){
	int base[10], i=0;
	int imparPar[10];
	
	printf("digite 10 valores inteiros positivos...");
	for( ; i<10 ; i++){
		printf("\n:");
		scanf("%d", & base[i]);
		
		if(base[i] % 3 == 0 || base[i] % 2 != 0 ){
			imparPar[i]=base[i];
		}
		if(base[i] % 2 == 0 ){
			imparPar[i]=base[i];
		}
		
	}
	
	printf("os vetores desordenado e ordenado a impar par sao os respectivos...\n");
	for(i=0 ; i<10 ; i++ ){
		printf("%d\n",base[i]);
	}
	printf("-----and-----\n");
	for(i=0 ; i<10 ; i++ ){
		printf("%d\n",imparPar[i]);
	}
	
	return 0;
}

/*
3.Faça um algoritmo que carregue um vetor com 15 posições, calcule e mostre:
a) O maior elemento do vetor e em que posição esse elemento se encontra;
b) O menor elemento do vetor e em que posição esse elemento se encontra.
*/

#include<stdio.h>
int main (){
	int valores[15], i=0;
	int maior=0, posicaoMa=0, menor=0, posicaoMe=0;
	
	printf("digite 15 valores inteiros...");
	for( ; i<15 ; i++ ){
		printf("\n:");
		scanf("%d",&valores[i]);
		if( i==0 ){
			maior=valores[i];
			menor=valores[i];
		}
		if( valores[i] > maior ){
			maior=valores[i];
			posicaoMa=i+1;
		}
		if( valores[i] < menor ){
			menor=valores[i];
			posicaoMe=i+1;
		}
	}
	
	printf("\no maior numero digitado foi %d e sua posicao no vetor e %d\no menor numero digitado foi %d e sua posicao no vetor e %d",maior,posicaoMa,menor,posicaoMe);
	
	return 0;
}
