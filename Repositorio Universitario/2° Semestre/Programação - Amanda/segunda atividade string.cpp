/*3. Escreva um programa em C que leia dois vetores de string e contenha um menu com as opções:
- Copiar o conteúdo de uma string para outra
- Concatenar duas strings
- Verificar o tamanho da string
*/

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
	
	printf("\n\n**possiveis acoes**\n\n1 - Copiar o conteúdo da primeira string para outra\n2 - Concatenar duas strings\n3 - Verificar o tamanho das string's\n\ndigite qual opcao deseja: ");
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

/*4. Escreva um programa em C que leia dois vetores de string e compare, retornando se são iguais ou
diferentes.
Obs: Se são iguais o retorno é 0;
Se a primeira string for maior que a segunda o retorno é maior que zero.
Se a segunda string for maior que a primeira o retorno é menor que zero.
*/

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
		printf("\nsao diferentes e o valor retornado pela funcao e %d",valor);
	}
	//se vetorI for maior que vetorII
	if((strcmp(vetorI,vetorII))>0){
		valor=strcmp(vetorI,vetorII);
		printf("\nsao diferentes e o valor retornado pela funcao e %d",valor);
		
	}
		
	return 0;
}
