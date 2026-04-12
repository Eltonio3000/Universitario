/*
O objetivo do jogo é descobrir todas as posições sem mina em um campo 
de 5x5. O jogador escolhe uma posição na matriz e descobre se há uma mina
ou não. O jogo termina quando o jogador encontra todas as posições sem mina
ou pisa em uma mina.

Requisitos:
A matriz será de 5x5 (ou qualquer tamanho que desejar), onde algumas posições 
serão minas ('*') e outras estarão vazias ('-').
O jogador deve ser capaz de selecionar uma posição para revelar.
Se o jogador escolher uma posição com uma mina, ele perde.
Se o jogador escolher uma posição vazia, o jogo continua e o número de minas 
adjacentes àquela posição será mostrado.
O jogador ganha ao revelar todas as posições que não possuem minas.
Deve haver uma forma de verificar se o jogador ganhou ou perdeu após cada jogada.

Passos para implementação:
Gerar o campo
Crie uma matriz 5x5.
Coloque minas aleatoriamente na matriz.
Inicialize as posições vazias como '-'
*/

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
int main (){
	int dimensao=20;
	char alfabeto[20]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'};
	char campo[dimensao][dimensao];
	char mascara[dimensao][dimensao];
	int vitoria=0, derrota=0;
	char letra;
	char escolha[5];
	bool boolean;
	
	srand(time(NULL));
	
	
	for(int i=0 ; ; i++){
	boolean = true;
		do {//validacao
        	printf("\nvamos comecar?(sim / nao)\n: ");
			scanf("%s",&escolha);

        	if (strcasecmp(escolha, "sim") != 0 && strcasecmp(escolha, "nao") != 0 ){
        	    printf("digite apenas(sim / nao)\ntente novamente: ");
        	}
    	} while( strcasecmp(escolha, "sim") != 0 && strcasecmp(escolha, "nao") != 0 );
    	
		if( strcasecmp(escolha, "sim") == 0 ){
			//limitador de campo
			do {
        		printf("qual o tamanho do campo(n X n)?\no tamanho do campo deve ser >= 5 e <= 20\n: ");
				scanf("%d",&dimensao);

        		if( dimensao < 5 || dimensao > 20 ){
        	    	printf("\nOPA!\nrespeite a regra.");
        		}
    		} while( dimensao < 5 || dimensao > 20  );
			//prencher matriz
			for( int i=0 ; i< dimensao ; i++ ){
				for(int j=0 ; j< dimensao ; j++){
					campo[i][j] = '-';
					mascara[i][j] = '-';
				}
			}
			
			//verificar o tamanho do campo
			//colocar as minas de acordo
			if( dimensao >= 5 && dimensao <= 10 ){//15 minas
				for( int count = 0, i = 0, j = 0 ; count < 15 ; ){
					i = rand() % dimensao;
					j = rand() % dimensao;
					
					if(campo[i][j] != '*'){
						campo[i][j] = '*';
						printf("%d %d\n",i,j);
						count++;
					}	
				}
				
				do{
					printf("   ");
					for(int ii=1, jj=0 ; jj<dimensao ; ii++, jj++){
						printf("%-3d",ii);
					}
					for( int k=1 ,i=0 ; i<dimensao ; i++,k++ ){
						
						printf("\n%d  ",k);
						for(int j=0 ; j<dimensao ; j++){
							printf("%-3c",mascara[i][j]);
						}
					}
					//iniciar jogo
					for(int count, i=0, j=0 ; ; count-- ){
						printf("\nnumero coluna: ");
						scanf("%d", & i);
						printf("\nnumero da coluna: ");
						scanf("%d", & j);
						
						mascara[i][j]=campo[i][j];
						
						//contar vitoria ou derrota
						if(campo[i][j]=='*'){
							printf("\n\nVOCE PERDEU!");
							derrota++;
							boolean = false;
							break;
						}
						count = (dimensao * dimensao) - 15;
						
						if(count == 0){
							printf("\n\nVOCE GANHOU!");
							vitoria++;
							boolean = false;
							break;
						}
					}
					
						
				} while(boolean==true);
				
			}
			if( dimensao >= 11 && dimensao <= 15 ){//100 minas
				for( int count = 0, i = 0, j = 0 ; count < 100 ; ){
					i = rand() % dimensao;
					j = rand() % dimensao;
					
					if(campo[i][j] != '*'){
						campo[i][j] = '*';
						printf("%d %d\n",i,j);
						count++;
					}	
				}
				
				do{
					printf("   ");
					for(int ii=1, jj=0 ; jj<dimensao ; ii++, jj++){
						printf("%-3d",ii);
					}
					for( int k=1 ,i=0 ; i<dimensao ; i++,k++ ){
						
						printf("\n%d  ",k);
						for(int j=0 ; j<dimensao ; j++){
							printf("%-3c",mascara[i][j]);
						}
					}
					//iniciar jogo
					for(int count, i=0, j=0 ; ;count-- ){
						printf("\nnumero coluna: ");
						scanf("%d", & i);
						printf("\nnumero da coluna: ");
						scanf("%d", & j);
						
						mascara[i][j]=campo[i][j];
						
						//contar vitoria ou derrota
						if(campo[i][j]=='*'){
							printf("\n\nVOCE PERDEU!");
							derrota++;
							boolean = false;
							break;
						}
						count = (dimensao * dimensao) - 100;
						
						if(count == 0){
							printf("\n\nVOCE GANHOU!");
							vitoria++;
							boolean = false;
							break;
						}
					}
					
						
				} while(boolean==true);
			if( dimensao >= 16 && dimensao <= 20 ){//130 minas
				for( int count = 0, i = 0, j = 0 ; count < 130 ; ){
					i = rand() % dimensao;
					j = rand() % dimensao;
					
					if(campo[i][j] != '*'){
						campo[i][j] = '*';
						printf("%d %d\n",i,j);
						count++;
					}
				}
				
				do{
					printf("   ");
					for(int ii=1, jj=0 ; jj<dimensao ; ii++, jj++){
						printf("%-3d",ii);
					}
					for( int k=1 ,i=0 ; i<dimensao ; i++,k++ ){
						
						printf("\n%d  ",k);
						for(int j=0 ; j<dimensao ; j++){
							printf("%-3c",mascara[i][j]);
						}
					}
					//iniciar jogo
					for(int count, i=0, j=0 ; ; count--){
						printf("\nnumero coluna: ");
						scanf("%d", & i);
						printf("\nnumero da coluna: ");
						scanf("%d", & j);
						
						mascara[i][j]=campo[i][j];
						
						//contar vitoria ou derrota
						if(campo[i][j]=='*'){
							printf("\n\nVOCE PERDEU!");
							derrota++;
							boolean = false;
							break;
						}
						count = (dimensao * dimensao) - 130;
						
						if(count == 0){
							printf("\n\nVOCE GANHOU!");
							vitoria++;
							boolean = false;
							break;
						}
					}
					
						
				} while(boolean==true);
		}
		if( strcasecmp(escolha, "nao") == 0 ){
			printf("\njogo finalizado...\nvitorias:%d\nderrota:%d",vitoria,derrota);
			break;
		}
		
	}
	
	return 0;
}
}
}






