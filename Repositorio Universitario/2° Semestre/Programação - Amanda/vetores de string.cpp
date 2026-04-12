/*
1. Faça um programa que então leia uma string e a imprima.

2. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra
“ACEITA”, caso contrário imprimir “NAO ACEITA”

3. Entre com um nome e imprima o nome somente se a primeira letra do nome for “a” (maiúscula ou
minúscula).

4. Faça um programa que leia uma string com gets e imprima com puts.

5. Faça um programa que limite o tamanho da string na leitura scanf.

6. Faça um programa que leia uma frase inteira e imprima.
*/

#include<stdio.h>
#include<string.h>
int main(){
	char nome[50];
	char sexo[100];
	char frase[200];
	int idade;
	
	printf("digite o nome: ");
    gets(nome);
	printf("digite o sexo: ");
    scanf("%10s",sexo);
	printf("digite a idade: ");
	scanf("%d", &idade);
	printf("digite uma frase: ");
    scanf("%s[^\n]",frase);
			
	if( strcmp(sexo, "feminino")==0 || strcmp(sexo, "Feminino")==0 && idade < 25 && nome[0]=='a' || nome[0]=='A' ){
		puts(nome);
		printf("aceita.\n\nsua frase foi\n:%s",frase);
		
	}
	else{
		printf("nao aceita.");
	}
	
	return 0;
}
