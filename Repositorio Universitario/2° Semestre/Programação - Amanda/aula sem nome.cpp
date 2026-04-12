/*Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma de 5 alunos. 
O programa deve solicitar ao usuário os nomes do aluno, sempre perguntando se ele deseja 
inserir mais um nome na lista. Uma vez lidos todos os alunos, o usuário ira indicar um 
nome que ele deseja verificar se está presente na lista, onde o programa deve procurar pelo 
nome (ou parte deste nome) e se encontrar deve exibir na tela o nome completo e o índice do vetor 
onde está guardado este nome.*/

#include<stdio.h>
#include<string.h>
int main (){
	char nome[5][50];
	char pesquisa[100];
	char descisao[10];
	int i, j=1;
	
	printf("***tabela de nomes(alunos)***\n");
	for( i=0 ; i<5 ; i++, j++ ){
		printf("\ndigite o nome do %d aluno: ",j);
		gets(nome[i]);

		if(j<5){
			printf("deseja inserir mais um nome?('sim' ou 'nao')\n: ");
			gets(descisao);
		
			if((strcoll(descisao, "sim")==0)){
			
			}
			else if((strcoll(descisao, "nao")==0)){
				break;
			}
			else {
				printf("descisao nao reconhecida\nporem vamos continuar!");
				break;
				
			}
		}
		
	}

	printf("\n-------------------------\n");
	
	
	for( ; ; ){
		printf("\nqual nome deseja verificar na lista?\n: ");
		gets(pesquisa);
		for( i=0, j=1 ; i<5 ; i++,j++){
			if((strstr(pesquisa, nome[i]))){
				printf("\n\no nome %s esta na lista na posicao %d",nome[i],j);
			
			}
			
		}
		printf("\ndeseja procurar outro nome?('sim' ou 'nao')\n: ");
			gets(descisao);
		
			if((strcoll(descisao, "sim")==0)){
			
			}
			else if((strcoll(descisao, "nao")==0)){
				printf("algoritmo finalizado!");
				break;
				
			}
			else {
				printf("descisao nao reconhecida\nvamos encerrar!");
				break;
				
			}

	}
	
	return 0;
}
