/*Faça um programa em que vamos fornecer 10 números para um vetor, 
incluindo valores repetidos. Seu código deve vasculhar esse vetor 
para criar um novo vetor que não tenha números repetidos.*/

#include<stdio.h>

int main(){
	int livre[10], restrigido[10], i, j;
	
	printf("digite 10 valores\n");
	for( j=0,i=0 ; i<10 ; i++ , j++ ){
		printf(":");
		scanf("%d", & livre[i]);
		
	}
	
	for( j=0,i=0 ; i<10 ; i++ , j++ ){
		restrigido[j]=livre[i];
	}
	
	for( i=0 ; i<10 ; i++){
		for( j=0 ; j<10 ; j++){
			if(livre[i]==restrigido[j]){
				restrigido[j]=0;
				restrigido[i]=livre[i];
			}
		}
	}
	
	for(j=0;j<10;j++){
		if(restrigido[j]!=0){
			printf("\n: %d", restrigido[j]);
			
		}
		
	}
	
	
	return 0;
}
