/*
1. Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade
expressa em dias.
*

#include<stdio.h>

int calculo_dias(int a, int m, int d){
	int qtd_dias=0;

	if( a != 0 ){
		qtd_dias = a * 365;
	}
	if( m != 0 ){
		qtd_dias = qtd_dias + (m * 30);
	}
	qtd_dias += d;
	
	return qtd_dias;
}

int main(){
	int dias=0, meses=0, ano=0, resultado=0;
	
	printf("**contador de dias**\n\nquantos anos?\n: ");
	scanf("%d",&ano);
	printf("quantos meses?\n: ");
	scanf("%d",&meses);
	printf("quantos dias?\n: ");
	scanf("%d",&dias);
	
	resultado = calculo_dias(ano, meses, dias);
	
	printf("\n%d dias",resultado);
	
	return 0;
}*/

/*
2.Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A
função deve retornar um valor booleano.
*

#include<stdio.h>
#include<stdbOol.h>

int positivo_negativo(int num){
	bool resposta=true;
	int count=0;
	
	if( num < 0 ){
		resposta=false;
	}
	else if( num > 0 ){
		resposta=true;
	}
	else if( num < 0 && num > 0 ){
		count++;
		return count;
	}
	
	return resposta;
}

int main(){
	int numero=0;
	bool true_false;
	
	printf("digite um numero: ");
	scanf("%d",& numero);
	
	if( positivo_negativo(numero)==false ){
		printf("\nNEGATIVO");
	}
	else if( positivo_negativo(numero)==true ){
		printf("\nPOSITIVO");
	}
	// neutro não funciona
	else if( positivo_negativo(numero)==1){
		printf("\nNEUTRO");
	}
	
	return 0;
}*/

/*
3. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve
retornar um valor booleano.
*

#include<stdio.h>
#include<stdbOol.h>

int par_impar(int num){
	bool resposta=true;
	
	if( num % 2 == 0 ){
		resposta=false;
	}
	else if( num % 2 != 0 ){
		resposta=true;
	}
	
	return resposta;
}

int main(){
	int numero=0;
	bool true_false;
	
	printf("digite um numero: ");
	scanf("%d",& numero);
	
	if( par_impar(numero)==false ){
		printf("\nPAR");
	}
	else if( par_impar(numero)==true ){
		printf("\nIMPAR");
	}
	
	return 0;
}*/

/*
4. Faça uma função que recebe a média final de um aluno por parãmetro e retorna o seu conceito,
conforme a tabela abaixo:

   nota            conceito
de 0,0 a 4,9          D
de 5,0 a 6,9          C
de 7,0 a 8,9          B
de 9,0 a 10,0         A
*

#include <stdio.h>

char conceito_aluno(float media) {
    char conceito = 'D'; 

    if (media >= 0.0 && media <= 4.9) {
        conceito = 'D';
    } else if (media >= 5.0 && media <= 6.9) {
        conceito = 'C';
    } else if (media >= 7.0 && media <= 8.9) {
        conceito = 'B';
    } else if (media >= 9.0 && media <= 10.0) {
        conceito = 'A';
    }

    return conceito;
}

int main() {
    float media;
    char conceito;

    printf("Digite a media final do aluno: ");
    scanf("%f", &media);

    conceito = conceito_aluno(media);

    printf("\nO conceito do aluno e: %c\n", conceito);

    return 0;
}*/


/*
5.A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o
salário e número de filhos. Faça um procedimento que leia esses dados para um número não
determinado de pessoas e retorne a média de salário da população, a média do número de filhos, o
maior salário e o percentual de pessoas com salário até R$350,00.
*/

#include <stdio.h>

void pesquisa_habitantes() {
    float salario, soma_salario = 0, maior_salario = 0;
    int filhos, soma_filhos = 0, count_pessoas = 0, count_salario_baixo = 0;
    char continuar;

    do {
        printf("\nDigite o salario: ");
        scanf("%f", &salario);
        
        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);

        // Soma total de salários e filhos para cálculo da média
        soma_salario += salario;
        soma_filhos += filhos;
        count_pessoas++;

        // Verifica se é o maior salário
        if (salario > maior_salario) {
            maior_salario = salario;
        }

        // Conta o número de pessoas com salário até R$350,00
        if (salario <= 350.00) {
            count_salario_baixo++;
        }

        printf("\nDeseja inserir os dados de outra pessoa? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    // Cálculo das médias
    float media_salario = soma_salario / count_pessoas;
    float media_filhos = (float)soma_filhos / count_pessoas;
    float percentual_salario_baixo = (count_salario_baixo * 100.0) / count_pessoas;

    // Resultados
    printf("\nMedia de salario da populacao: %.2f", media_salario);
    printf("\nMedia do numero de filhos: %.2f", media_filhos);
    printf("\nMaior salario: %.2f", maior_salario);
    printf("\nPercentual de pessoas com salario ate R$350,00: %.2f%%\n", percentual_salario_baixo);
}

int main() {
    pesquisa_habitantes();
    return 0;
}

