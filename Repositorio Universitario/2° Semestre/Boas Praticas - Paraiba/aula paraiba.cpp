#include<stdio.h>
int main (){
	int tamanhoVetor, indice=0, maior, media, menor, soma, auxiliar;
	int diferenca, posicaoMaior=0, posicaoMenor=0, posicaoMedia=0;
	int vetor [1000];
	
	printf("digite o tamanho do vetor: ");
	scanf("%d",&tamanhoVetor);
	printf("digite os valores...");
	for( ; indice < tamanhoVetor ; indice++){
		printf("\n: ");
		scanf("%d",&vetor[indice]);
		
	}
	
	maior=vetor[0];
	menor=maior;
	
	posicaoMaior=0;
	posicaoMenor=posicaoMaior;
	
	for( indice=0 ; indice < tamanhoVetor ; indice++ ){
		soma+=vetor[indice]; 
		
	}
	
	diferenca=soma;
	soma=diferenca/tamanhoVetor;
	
	for( indice=0 ; indice<tamanhoVetor ; indice++ ){
		if( vetor[indice] > maior ){
			maior=vetor[indice];
			posicaoMaior=indice;
			
		}
		if( vetor[indice] < menor ){
			menor=vetor[indice];
			posicaoMenor=indice;
			
		}
		if( vetor[indice] > soma ){
			auxiliar=vetor[indice]-soma;
			
		}
		else{
			auxiliar=soma-vetor[indice];
		}
		if( diferenca > auxiliar ){
			posicaoMedia=indice;
			diferenca=auxiliar;
			
		}
		
	}
	
	auxiliar=vetor[0];
	vetor[0]=menor;
	vetor[posicaoMenor]=auxiliar;
	auxiliar=vetor[tamanhoVetor];
	vetor[tamanhoVetor]=maior;
	vetor[posicaoMaior]=auxiliar;
	media=tamanhoVetor/2;
	auxiliar=vetor[media];
	vetor[media]=vetor[posicaoMedia];
	vetor[posicaoMedia]=auxiliar;
	
	for( indice=0 ; indice < tamanhoVetor ; indice++ ){
		printf("\n%d",vetor[indice]);
		
	}
	
	
	return 0;
}
