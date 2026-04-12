/*
1. Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva o número de
alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2, e o número
de alunos cuja pior nota foi na prova 3.
*/

#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main (){
	float matriz[10][3];
	float piorNotaProvaUm=0, piorNotaProvaDois=0, piorNotaProvaTres=0;
	
	srand(time(NULL));
	for(int i=0 ; i<10 ; i++){
		for(int j=0 ; j<3 ; j++){
			matriz[i][j] = (float)rand() / RAND_MAX * 10.0;
		}
	}
	//tira prova 
	/*
	for(int i=0 ; i<10 ; i++){
		for(int j=0 ; j<3 ; j++){
			printf("%2.f",matriz[i][j]);
		}
		printf("\n");
	}
	*/
	
	for(int i=0 ; i<10 ; i++){
		for(int j=0 ; j<3 ; j++){
			if(j==0 && matriz[i][j]<=5.9){
				piorNotaProvaUm++;
			}
			if(j==1 && matriz[i][j]<=5.9){
				piorNotaProvaDois++;
			}
			if(j==2 && matriz[i][j]<=5.9){
				piorNotaProvaTres++;
			}
		}
	}
	
	printf("pior nota prova um: %2.f\npior nota prova dois: %2.f\npior nota prova tres: %2.f",piorNotaProvaUm,piorNotaProvaDois,piorNotaProvaTres);
	
	return 0;
}

/*
2.Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo.
Sabendo que cada cartela devera conter 5 linhas de 5 números, gere estes dados de modo a nao ter
números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.
*/

//forma com chance de da numero repetido
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char bingo[] = {'B','I','N','G','O'};
	int cartela[5][5];
	int validacao[99], auxiliar=0;
	
	for(int y=0 ; y<99 ;y++){
		validacao[y]=y;
	}
	
	srand(time(NULL));
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ; j<5 ; j++){
			cartela[i][j] = rand() % 99 + 1;
		}
	}
	
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ; j<5 ; j++ ){
			for(int y=0 ; y<99 ; y++){
				if(cartela[i][j]==validacao[y]){
					auxiliar=cartela[i][j];
					cartela[i][j]=0;
				}
				cartela[i][j]=auxiliar;
			}
		}
	}
	
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ; j<5 ; j++){
			if(cartela[i][j]==0){
			cartela[i][j] = rand() % 99 + 1;
			}
		}
	}
	
	cartela[2][2]= 0;
	for(int k=0 ; k<=5 ; k++){
		printf("  %c ",bingo[k]);
	}
	printf("\n");
	
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ; j<5 ; j++){
			printf(" %d ",cartela[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}*/

//forma que eu fiz usando a regra de criacao de cartela do bingo, no intervalo de 1 a 99 **maior chance de numeros unicos**

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char bingo[] = {'B','I','N','G','O'};
	int cartela[5][5];
	int validacao[99], auxiliar=0;
	
	for(int y=0 ; y<99 ;y++){
		validacao[y]=y;
	}
	
	srand(time(NULL));
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ; j<5 ; j++){
			if(j==0){ // 1 a 21
			cartela[i][j]= rand() % 21 + 1;
			}
			if(j==1){ // 22 a 40
			cartela[i][j]= rand() %  (40 - 22 + 1) + 22;
			}
			if(j==2){ // 41 a 59
			cartela[i][j]= rand() %  (59 - 41 + 1) + 41;
			}
			if(j==3){ // 60 a 79
			cartela[i][j]= rand() %  (79 - 60 + 1) + 60;
			}
			if(j==4){ // 80 a 99
			cartela[i][j]= rand() %  (99 - 80 + 1) + 80;
			}
		}
	}
	
	cartela[2][2]= 0;
	for(int k=0 ; k<=5 ; k++){
		printf("%-4c",bingo[k]);
	}
	printf("\n");
	
	for(int i=0 ; i<5 ; i++){
		for(int j=0 ; j<5 ; j++){
			printf("%-4d",cartela[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
