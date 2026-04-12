/*digite 10 numeros inteiros e armazene em um vetor verifique
qual desses numeros e o maior ,imprima os elementos do vetor 
e em seguida seu maior elemento*/

#include<stdio.h>
int main(){
	
	int vetor[10];
	int indice, maior;
	
	printf("digite 10 numeros inteiros;\n");
	for (indice= 0 ; indice <= 9 ; indice++){
		printf(":");
		scanf("%d",& vetor[indice]);
		
	}
	
	maior = vetor[0];
	
	for( indice=0; indice <= 9 ; indice++ ){
		if ( vetor[indice] > maior ){
			maior = vetor[indice];
			
		}
		printf("%2d,", vetor[indice]);
		
	}
	
	printf("\n\nmaior elemento do vetor %d",maior);
	
	return 0;
}


/*faca um programa em c, que declare um vetor de inteiros com 6 elementos e preencha-os com 
valores digitados pelo usuario em seguida , exiba a soma dos valores pares armazenados no vetor*/

#include<stdio.h>
int main (){
	
	int vetor[6];
	int somaPar, indice;
	
	printf("digite 6 numeros inteiros:\n");
	for(indice=0 ; indice<6 ;indice++ ){
		printf(":");
		scanf("%d",&vetor[indice]);
		
	}
	
	for(indice=0 ; indice<6 ; indice++){
		if(vetor[indice] % 2 == 0){
			somaPar += vetor[indice];
		}
		
	}
	
	printf("a soma dos valores pares e : %d",somaPar);
	
	return 0;
}
