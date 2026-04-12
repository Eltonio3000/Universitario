/*1. Faça um programa, utilizando for e listas,
que pergunte ao usuário quantos produtos ele deseja cadastrar, cadastre os produtos e seus
respectivos preços em listas separadas e os mostre na tela juntos.*/

#include<stdio.h>
int main(){
	int qntProduto, preco , i=0;
    char cadastro[20];
    
    printf("quantos produtos deseja cadastrar?\n");
    scanf("%d",&qntProduto);
    
    for(; i<qntProduto ;i++ ){
    
    printf("nome do produto: ");
    scanf("%s",&cadastro);
    printf("valor do produto: ");
    scanf("%d",&preco);
    	
    	printf("%s -- %d\n\n", cadastro, preco);
	}
	
	
	return 0;
}

/*2. Escrever um programa em "C" que solicita as notas das duas
provas feitas por cada um dos alunos de uma turma (as notas tem de estar no intervalo [0 10]) e imprime para cada um
a média das notas. O programa  deve parar imediatamente após ter sido digitado o valor 50 para a nota
da primeira prova.*/
/*Obs: Leia nota de 10 alunos.*/

#include<stdio.h>

int main(){
	
	int nota1=5, nota2=5;
	float media=0;
	
	for ( int i=1 ; i!=11 ; i++){		
		printf("\ndigite a nota da primeira prova: ");
		scanf("%d",&nota1);
		printf("digite a nota da segunda prova: ");
		scanf("%d",&nota2);
		
		if( nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota1 != 50){
		media = nota1 + nota2 / 2;
		printf("a media da nota do aluno %d e: %.1f\n",i,media);
		
		}
		else if( nota1 == 50){
		printf("\naplicacao encerrada!");
		break;
		
		}
		else if( nota1 <= 0 && nota1 >= 10 && nota2 <= 0 && nota2 >=10 || nota1 <= 0 || nota1 >= 10 || nota2 <= 0 || nota2 >=10 ){
			printf("\nvalor invalido! tente novamente.\n");
	    	i--;
	    	
		}
		
	}
		
	return 0;
}

/*3. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000
reais. Em 1996 recebeu aumento de
1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do ano
anterior. Faça programa que
determine o salário atual do funcionário.*/

#include<stdio.h>
int main(){
	float inicioSalario=2000, finalSalario, aumento=0.015;
	
	finalSalario = inicioSalario +(inicioSalario * aumento);
	
	for(int i=1997 ; i<2025 ; i++ ){
		finalSalario = inicioSalario +(inicioSalario * aumento);
		aumento = aumento * 2;
		
	}
	
	printf("em 2024 o funcionartio ira receber: %.2fR$",finalSalario);
	
	return 0;
}
