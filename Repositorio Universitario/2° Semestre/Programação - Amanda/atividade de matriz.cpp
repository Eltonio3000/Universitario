/*
Escreva um programa em C que trabalhe com uma matriz quadrada de 
inteiros de ordem N, onde N é fornecido pelo usuário (com um valor máximo de 10). 
O programa deve preencher a matriz da seguinte maneira:

Cada célula da matriz deve conter o valor da soma dos índices da linha e da coluna em 
que está localizada (por exemplo, o valor da célula na linha i e coluna j será i + j).

Após preencher a matriz, o programa deve calcular e exibir:

A soma de todos os elementos da matriz.
A soma dos elementos na borda da matriz (elementos da primeira e última linha, e elementos da primeira e última coluna).
A soma dos elementos das células que estão localizadas acima da diagonal principal.
A soma dos elementos das células que estão localizadas abaixo da diagonal principal.
*/

#include<stdio.h>


int main (){
	int matriz[10][10], n=0;
	int somaTotal=0, somaBorda=0, somaAcima=0, somaAbaixo=0;
	int linha=0, coluna=0;
	
	printf("digite o tamanho da dimensao da matriz entre 1 e 10: ");
	scanf("%d", &n);
	while( n < 0 && n >= 10){
		printf("a dimensao deve ter entre 1 e 10: ");
		scanf("%d", &n);
	}
	printf("digite a linha  coluna consecutivamente...\n");
	for( int i = 0 ; i < n ; i++ ){
		for( int j = 0 ; j < n ; j++ ){
			printf("\nlinha: ");
			scanf("%d", &linha);
			printf("coluna: ");
			scanf("%d", &coluna);
			
			//atribuindo valor correto
			matriz[i][j] = linha + coluna;
			
			//soma total
			somaTotal = somaTotal + matriz[i][j];			
		}
	}
	
	//soma borda
	for (int j = 0; j < n; j++) {
        somaBorda += matriz[0][j]; // Primeira linha
        somaBorda += matriz[n-1][j]; // Última linha
    }
    for (int i = 1; i < n - 1; i++) {
        somaBorda += matriz[i][0]; // Primeira coluna
        somaBorda += matriz[i][n-1]; // Última coluna
    }
	
	//soma acima e abaixo diagonal
	for( int i = 0 ; i < n ; i++ ){
		for( int j = 0 ; j < n ; j++ ){
			if( i < j ){
				somaAcima = somaAcima + matriz[i][j];
			}
			if( i > j ){
				somaAbaixo = somaAbaixo + matriz[i][j];
			}
		}
	}
	printf("\n");
	for( int i = 0 ; i < n ; i++ ){
		for( int j = 0 ; j < n ; j++ ){
			printf("%-3d",matriz[i][j]);
		}
		printf("\n");
	}
	printf("soma total: %d\nsoma acima da diagonal principal: %d\nsoma abaixo da diagonal principal: %d\nsoma da borda: %d",somaTotal,somaAcima,somaAbaixo,somaBorda);
	
	return 0;
}
