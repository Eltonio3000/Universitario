/*1 . Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
- Ter pelo menos 65 anos;
- Ou ter trabalhado pelo menos 30 anos;
- Ou ter pelo menos 60 anos e trabalhado 25 anos

Imprimir no final a idade o tempo de serviço e informar se ele esta apto ou não para aposentar.*/

#include <stdio.h>
int main (){
	int idade, tempo;
	printf("digite a idade do trabalhador: ");
	scanf("%d",&idade);
	printf("digite os anos de trabalho desse trabalhador: ");
	scanf("%d",&tempo);
	if (idade >= 65 && tempo >= 30 || idade >= 60 && tempo >= 25){
		printf("o trabalhador com %d anos e com %d anos de trabalho, esta apto para se aposentar", idade, tempo);
	}
	else if( idade < 44 && tempo <= 30){
		printf("a idade %d nao corresponde ao tempo de trabalho,nao esta apto para se aposentar", idade);
	}
	else {
	    printf("o trabalhador com %d anos e com %d anos de trabalhado, nao esta apto para se aposentar", idade, tempo);
	}
	
	return 0;
}
