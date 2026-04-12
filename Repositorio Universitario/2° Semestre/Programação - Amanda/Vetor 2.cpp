/*Faça um algoritmo para ler a nota de prova e de trabalho de dez alunos. Armazenar as notas em
dois vetores diferentes. Em seguida, calcular a média de cada aluno, armazenando-os em um outro
vetor. Imprimir a maior e a menor média, quantos alunos obtiveram média igual ou superior a 7 e os
três vetores.*/

#include<stdio.h>
int main(){
	float prova[10], trabalho[10], media[10];
	float maior=-9999999, menor=999999;
	int i, aluno=1, aprovados=0;
	
	printf("Digite a nota dos alunos");
	for(i=0;i<10;i++,aluno++){
		printf("\nAluno %d\nprova: ", aluno);
		scanf("%f", &prova[i]);
		printf("trabalho: ");
		scanf("%f", &trabalho[i]);
		media[i]= prova[i] + trabalho[i];
		media[i]= media[i] / 2;
		if(media[i] < menor){
			menor=media[i];
		}
		if(media[i] > maior){
			maior=media[i];
		}
		if(media[i] >= 7){
			aprovados++;
		}
		
	}
		
	printf("\nnotas e medias de todos os alunos");
	for(aluno=1, i=0; i<10; i++, aluno++){
		printf("\naluno %d\nnota prova: %.2f\nnota trabalho: %.2f\nnota media: %.2f",aluno,prova[i],trabalho[i],media[i]);
	}
	printf("\n\na maior  media foi %.2f\na menor  media foi %.2f\n\ne %d alunos tiraram media maior que 7",maior,menor,aprovados);
	
	return 0;
}

/*Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do
aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais alto.
Mostre o número do aluno mais baixo e do mais alto, acompanhado de suas alturas.*/

#include<stdio.h>
int main(){
	int numero[4];
	float altura[4];
	float maior=-9999999, menor=999999;
	int numAlto, numBaixo, i,aluno=0;
	
	printf("digite o numero e a altura (em metros) dos alunos");
	for(aluno=1, i=0;i<4;i++,aluno++){
		printf("\nAluno %d\nnumero: ",aluno,numero[i]);
		scanf("%d", &numero[i]);
		printf("altura: ");
		scanf("%f", &altura[i]);
		
		if(altura[i] < menor){
			menor=altura[i];
			numBaixo=numero[i];
		}
		if(altura[i] > maior){
			maior=altura[i];
			numAlto=numero[i];
		}
	}
	
	printf("\n\no codigo do aluno mais alto e %d\ne sua altura %.2f\no codigo do aluno mais baixo e %d\ne sua altura %.2f",numAlto,maior,numBaixo,menor);
	
	return 0;
}
