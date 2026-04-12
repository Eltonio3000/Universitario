/*1.Faça um programa em C que leia e monte dois vetores de números inteiros com 20 números cada.
Depois de montados gere um terceiro vetor formado pela diferença dos dois vetores lidos, um
quarto vetor formado pela soma dos dois vetores lidos e por último um quinto vetor formado pela
multiplicação dos dois vetores lidos.*/

#include<stdio.h>
int main (){
	int vetorUm[20];
	int vetorDois[20];
	int vetorSub[20];
	int vetorSoma[20];
	int vetorMult[20], i=0, valor=0;
	
	for(valor=5 ; i<20 ; i++ ){
		vetorUm[i]=valor;
	}
	for(i=0,valor=1 ; i<20 ; i++, valor++ ){
		vetorDois[i]=valor;
	}
	printf("SUBTRACAO:");
	for(i=0 ; i<20 ; i++ ){
		vetorSub[i]=vetorUm[i]-vetorDois[i];
		printf("\n%d - %d = %d",vetorUm[i],vetorDois[i],vetorSub[i]);
	}
	printf("\n\nSOMA:");
	for(i=0 ; i<20 ; i++ ){
		vetorSoma[i]=vetorUm[i]+vetorDois[i];
		printf("\n%d + %d = %d",vetorUm[i],vetorDois[i],vetorSoma[i]);

	}
	printf("\n\nMULTIPLICACAO:");
	for(i=0 ; i<20 ; i++ ){
		vetorMult[i]=vetorUm[i]*vetorDois[i];
		printf("\n%d x %d = %d",vetorUm[i],vetorDois[i],vetorMult[i]);

	}
	
	
	return 0;
}

/*2. Ler um vetor de 50 elementos inteiros, contar quantas vezes um determinado valor aparece no
vetor e imprimir o mesmo.
Obs: valor é determinado no próprio código.*/

#include<stdio.h>
int main(){
    int vetorBase[50];
    int i, valorProcurado=5, contagem=0;

    printf("Digite 50 valores inteiros...\n");
    for (i=0; i<50; i++){
        printf(": ");
        scanf("%d", &vetorBase[i]);
    }

    for (i=0; i<50; i++){
        if (vetorBase[i]==valorProcurado){
            contagem++;
        }
    }

    printf("O valor %d aparece %d vezes no vetor.\n", valorProcurado, contagem);

	
	return 0;
}

/*3. Ler um vetor de 15 elementos e calcular a media dos valores do vetor. Imprimir os elementos do
vetor e a média.*/

#include<stdio.h>
int main(){
    int vetorBase[15], i;
    int soma=0;
    float media;

    printf("Digite 15 valores inteiros...\n");
    for (i=0; i<15; i++){
        printf(": ");
        scanf("%d", &vetorBase[i]);
    }

    for (i=0; i<15; i++){
        soma=soma+vetorBase[i];
    }

    media=(float)soma/15;

    printf("\nElementos do vetor:\n");
    for (i=0; i<15; i++) {
        printf("%d ", vetorBase[i]);
    }
    
    printf("\nA media dos valores e: %.2f",media);

    return 0;
}
