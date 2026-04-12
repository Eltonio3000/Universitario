//exercicio um

#include<stdio.h>
int main(){
	int vetor[20];
	int soma=0;
	
	printf("digite 20 valores...");
	for( int i=0 ; i<20 ; i++ ){
		printf("\n: ");
		scanf("%d", &vetor[i]);
		if( i<10 ){
			soma += vetor[i];
		}
	}
	
	printf("a soma dos 10 primerios valores digitados e : %d",soma);
	
	
	return 0;
}

//exercicio dois

#include<stdio.h>
int main(){
    int vetor[20];
    int i, valorProcurado=0, contagem=0;

    printf("Digite 50 valores inteiros...\n");
    for (i=0; i<10; i++){
        printf(": ");
        scanf("%d", &vetor[i]);
    }
    
    printf("qual valor deseja procurar?\n: ");
    scanf("%d",&valorProcurado);

    for (i=0; i<10; i++){
        if (vetor[i]==valorProcurado){
            contagem++;
        }
    }

    printf("O valor %d aparece %d vezes no vetor.\n", valorProcurado, contagem);

	
	return 0;
}

//exercicio tres

#include<stdio.h>
#include<string.h>
int main(){
	char vetorI[100];
	char vetorII[100];
	int i=0, j=0,caminho;
	
	printf("digite a primeira string: ");
	gets(vetorI);
	printf("digite a segunda string: ");
	gets(vetorII);
	
	printf("\n\n**possiveis acoes**\n\n1 - Copiar o conteudo da primeira string para outra\n2 - Concatenar duas strings\n3 - Verificar o tamanho das string's\n\ndigite qual opcao deseja: ");
	scanf("%d",&caminho);
	if( caminho<1 || caminho>3 ){
		printf("digite dentre as opcoes 1 ,2 ou 3.\n: ");
		scanf("%d",&caminho);
	}
	//Copiar o conteúdo de uma string para outra
	if( caminho==1 ){
		strcpy(vetorII, vetorI);
		printf("\nprimeira string: %s\nsegunda string: %s",vetorI,vetorII);
				
	}
	//Concatenar duas strings
	if( caminho==2 ){
		strcat(vetorI ,vetorII);
		printf("\n%s",vetorI);
	}
	//Verificar o tamanho da string
	if( caminho==3 ){
		i=strlen(vetorI);
		j=strlen(vetorII);
		printf("\ntamanho da primeira string: %d\ntamanho da segunda string: %d",i,j);

	}
	
	return 0;
}

//exercicio quatro

#include<stdio.h>
#include<string.h>
int main(){
	char vetorI[100];
	char vetorII[100];
	int valor;
	
	printf("digite a primeira palavra: ");
	gets(vetorI);
	printf("digite a segunda palavra: ");
	gets(vetorII);
	
	//iguais
	if((strcmp(vetorI,vetorII))==0){
		valor=strcmp(vetorI,vetorII);
		printf("\nsao iguais e o valor retornado pela funcao e %d",valor);
		
	}
	//se vetorI for menor que vetorII
	if((strcmp(vetorI,vetorII))<0){
		valor=strcmp(vetorI,vetorII);
		printf("\nsao diferentes e o valor retornado pela funcao e %d\n\n(vetorI e menor que vetorII)",valor);
	}
	//se vetorI for maior que vetorII
	if((strcmp(vetorI,vetorII))>0){
		valor=strcmp(vetorI,vetorII);
		printf("\nsao diferentes e o valor retornado pela funcao e %d\n\n(vetorI e maior que vetorII)",valor);
		
	}
		
	return 0;
}

//exercicio cinco **anulada**
/*ler um vetor de 10 elementos inteiros e positivos. criar um segundo vetor da seguinte forma: os elementos de indice par
receberao os respectivos elementosmdivididos por 2. os elementos de indice impar receberao os respectivos elemnetos 
multiplicados por 3. imprima os dois vetores*/


