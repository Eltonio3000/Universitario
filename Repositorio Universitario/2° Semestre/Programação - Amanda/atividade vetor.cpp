/*
1- Preencha um vetor com tamanho a sua escolha e imprima  o mesmo.
2- Mostrar o  mesmo vetor do exercício anterior de trás pra frente.
3- Calcular a soma dos números do vetor do exercício anterior.
*/

#include<stdio.h>
int main(){
	
	int vetor[6];
	int indice, soma;
	
	printf("dgite 6 numeros inteiros:\n");
	for(indice=0 ; indice<6 ; indice++){
		printf(":");
		scanf("%d",&vetor[indice]);

	}
	for(indice=0 ; indice<6 ; indice++){
		printf("%d,",vetor[indice]);
		
	}
	printf("\n");
	for(indice=5 ; indice>=0 ; indice--){
		printf("%d,",vetor[indice]);
		
	}
	for(indice=0 ; indice<6 ; indice++){
		soma += vetor[indice];
		
	}
	printf("\na soma e: %d", soma);
	
	return 0;
}
