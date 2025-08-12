
//materia nova "if , else if , else"
//ler um valor e escrever a mensagem "e > 10!" se o valor lido for maior que 10,
//caso contrario escreve "nao e > 10"

#include <stdio.h>
int main (){

	int valor;
	printf("digite o valor: ");
	scanf("%d",&valor);
	if (valor >10){
	printf("\no valor %d e maior que 10",valor);
}
	else{
	printf("\no valor %d e menor que 10", valor);
}
	return 0;
}

//Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366 
//dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos.
//Escreva um programa que verilique se um ano é bissexto. Um ano é bissexto se ele é 
//divisível por 4. Entretanto, se o ano é divisível por 100, ele não é bissexto. Mas,
//se ele for divisível por 400, ele volta a ser bissexto.

#include<stdio.h>
int main (){
	int ano;
	printf("digite o ano: ");
	scanf("%d",&ano);
	//bissesto
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
		printf("o ano %d e um ano bissesto",ano);
}
    //nao bissesto
	else{
		printf("o ano %d nao e um ano bissesto",ano);
}
	
	return 0;
}


//faça um programa que leia um valor e identifique se ele e positivo ,negativo ou neutro.

#include <stdio.h>
int main (){

	float num;
	printf("digite um numero: ");
	scanf("%f",&num);
	//positivo
	if(num > 0){
		printf("o numero %.2f e positivo", num);
	}
	//negativo
	else if(num < 0){
		printf("o numero %.2f e negativo", num);
	}
	//neutro
	else{
		printf(" o numero %.2f e neutro", num);
	}
	
	return 0;
}

//Tendo como dados de entrada a altura e o sexo (M ou F) de uma pessoa, calcule e mostre seu
//peso ideal, utilizando as seguintes fórmulas:
//- para sexo masculino: peso ideal = (72.7 * altura) – 58
//- para sexo feminino: peso ideal = (62.1 * altura) - 44.7

#include <stdio.h>
#include <string.h>
int main (){
	float altura, pesoIdeal;
	char sexo[50];
    printf("digite sua altura: ");
    scanf("%f",&altura);
	printf("qual o seu sexo: ");
    scanf("%s",&sexo);
    //masculino
    if( strcmp(sexo, "masculino") == 0 || strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "MASCULINO") == 0) {
    	pesoIdeal = (72.7 * altura)- 58;
    	printf("o peso ideal para um homem que tenha %.2f de altura e: %.2f", altura, pesoIdeal);
	}
	//feminino
	else if(strcmp(sexo, "feminino") == 0 || strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "FEMININO") == 0) {
		pesoIdeal = (62.1 * altura)- 44.7;
		printf("o peso ideal para uma mulher que tenha %.2f de altura e: %.2f", altura, pesoIdeal);
	}
	//invalido
	else{
		printf("sexo invalido repita o processo e coloque um sexo valido (masculino ou feminino)");
	}
	return 0;
}

//Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que
//ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que
//ultrapassar este valor, calcular e escrever o seu salário total.

#include <stdio.h>
int main (){
	float salarioFixo, salarioFinal, valorVendas, comissao;
	printf("qual o salario fixo desse funcionario: ");
	scanf("%f",&salarioFixo);
	printf("qual o valor total das vendas efetuadas por ele: ");
	scanf("%f",&valorVendas);
	//ate 1.500
	if (valorVendas < 1500 ){
		comissao = (3.0 / 100)* valorVendas;
		salarioFinal = salarioFixo + comissao;
		printf("o salario desse funcionario e: %.2f\ncom uma comissao de %.2f reais",salarioFinal ,comissao);
	}
	//mais que 1.500
	else {
		comissao = (5.0 / 100)* valorVendas;
		salarioFinal = salarioFixo + comissao;
		printf("o salario desse funcionario e: %.2f\ncom uma comissao de %.2f reais",salarioFinal ,comissao);
	}
	
	return 0;
}

//Faça um algoritmo para ler: quantidade atual em estoque, quantidade máxima em estoque e
//quantidade mínima em estoque de um produto. Calcular e escrever a quantidade média ((quantidade
//média = quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou
//igual a quantidade média escrever a mensagem 'Não efetuar compra', senão escrever a mensagem
//'Efetuar compra'.
 
#include <stdio.h>
int main (){
	int quantiAtual, quantiMax, quantiMin, quantiMed;
	printf("qual a quantidade atual do produto: ");
	scanf("%d",&quantiAtual);
	printf("qual a quantidade maxima do produto: ");
	scanf("%d",&quantiMax);
	printf("qual a quantidade minima do produto: ");
	scanf("%d",&quantiMin);
	quantiMed = (quantiMax + quantiMin)/ 2;
	if(quantiAtual >= quantiMed){
		printf(" nao efetuar a compra");
	}
	else{
		printf(" efetuar compra");
	}
	
	return 0;
}
