/*Faça um programa que leia um número e apresente todos os divisores (resto da divisão igual a
0) desse número.*/

#include <stdio.h>
int main (){
	int num, cont=1;
	
	printf("digite um numero entre 1 a 100\n : ");
	scanf("%d",&num);
	
	while (num < 1 || num > 100){
	    printf("o numero digitado nao esta entre 1 a 100\ntente um valor com as regras acima\n : ");
	    scanf("%d",&num);
	
	};
	
	if (num >= 1 && num <= 100){
	    printf("---------------------------------\n");
			 while (cont <= num){
			 	if (num % cont == 0){
			 		printf("%d e divisor de %d\n",cont,num);
			 		
				 }
				cont++;
			}
	}
	
	return 0;
}

/*Ler 10 valores e escrever quantos desses valores lidos são NEGATIVOS.*/

#include <stdio.h>
int main (){
	int num, cont=1, negativos=0;
	
	printf("serao requisitados 10 numeros:\n\n");
	
	do{
		printf("digite o %d numero: ",cont);
		scanf("%d",&num);
		if(num < 0){
			negativos++;
		}
		cont++;
	} while (cont < 11);
	
	printf("\nforam digitados %d numeros negativos",negativos);
	
	return 0;
}

/*Ler o número de alunos existentes em uma turma e, após isto, ler as notas destes alunos,
calcular e escrever a média aritmética dessas notas lidas. Quantidade de alunos limitados a 10
e notas limitadas a 100, tratar essas informações.*/

#include <stdio.h>

int main (){
	int alunos, nota, media, limit10, limit100, cont=0,contA=1;
	
	printf("digite a quantidade de alunos: ");
	scanf("%d",&alunos);
	
	printf("---------------------------------");
	
	do{
		printf("\ndigite a nota do %d aluno: ",contA);
		scanf("%d",&nota);
		
		media = media + nota;
		
		cont++;
		contA++;
	} while (cont < alunos);
	
	printf("---------------------------------");
	contA--;
	media = media / contA;
	printf("\na media das %d notas e %d",contA,media);
	
	
	return 0;
}

/*A série de Fibonacci é formada pela sequência: • 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Escreva um
programa que gere a série de FIBONACCI até o N-ésimo termo (com N sendo uma entrada do
algoritmo).*/

#include <stdio.h>
int main (){
	int serie, fibonacci, cont=0, resultado, valA=1, valB=1, numeracao=2;
	
	printf("digite a quantidade de sequencia de FIBONACCE que deseja\n\n: ");
	scanf("%d",&serie);
	
	printf("---------------------------------");
	printf("\n1---------%d\n2---------%d",valA,valB);
	serie = serie - 2;
	
	do{
		numeracao++;
		resultado = valA + valB;
		if (cont > 0){
			valB = valA;
		}
		valA = resultado;
		
		printf("\n%d---------%d",numeracao,resultado);
		
		cont++;
	}while (cont < serie);
	
	return 0;
}
