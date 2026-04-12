/*Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.
Ex.: 5!= 5x4x3x2x1=120*/
/*pronto*/

#include <stdio.h>
int main (){
	int num, resultado, i=1;
	
	printf("para calcular um fatoral\ndigite um numero: ");
	scanf("%d",&num);
	i = num;
	resultado = num;
	i--;
	
	for ( ; i != 0 ; i--){
		resultado = resultado * i;
		
	}
	printf("%d!= %d",num,resultado);
	
	return 0;
}

/*Fazer um programa para receber dois números do usuário e calcular o seu MDC utilizando o
método de Euclides (O método de Euclides funciona da seguinte maneira: Comece com os
números A e B. Enquanto B não for 0, calcule o resto da divisão de A por B. Substitua A por B e
B pelo RESTO. O MDC é o valor final de A). O programa deve continuar pedindo dois números
até que 0 e 0 sejam fornecidos.*/

#include <stdio.h>
int main (){
	
	
	
	return 0;
}

/*Faça um algoritmo que verifica se o valor é primo ou não. FACULTATIVO.*/
/*pronto*/

#include<stdio.h>
int main (){
	int num, primo;
	
	printf("digite um valor\n: ");
	scanf("%d",&num);
	
	if(num <=0){
	for( ; num <= 0; ){
		    printf("\no numero digitado e menor que 1, nao existe numero primo menor que 1\n\ntente outro valor\n: ");
		    scanf("%d",&num);
    }
    }
	
	if(num > 0){
		if(num % num == 0 && num  % 1 == 0){
			printf("primo");
			
		}
		else if(num % num != 0 && num  % 1 != 0){
			printf("composto");
			
		}
	}
	
	return 0;
}

/*Supondo que a população de um país A seja da ordem de 80000 habitantes população de B seja
200000 habitantes. Faça um programa que permitindo ao usuário informar as taxas de
crescimento iniciais, ao final imprima a quantidade de habitantes ao longo de 10 anos.*/
/*pronto*/

#include <stdio.h>
int main (){
	float popA=80000, popB=200000, taxaA, taxaB;
	
	printf("**populacao inicial**\nA- 80000\nB- 200000");
	printf("\npara saber quantos habitantes teram em 10 anos\ndigite as taxas (em forma decimal) de...\nA: ");
	scanf("%f",&taxaA);
	printf("B: ");
	scanf("%f",&taxaB);
	
    for( int i=0 ; i < 10 ; i++){
    	popA = popA+ (popA* taxaA);
        popB = popB+ (popB* taxaB);
	}
	
	printf("\npais A: %0.f\npais B: %0.f",popA,popB);
	
	return 0;
}

/*Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro, em seguida
no mesmo código mostre os números um ao lado do outro.*/



/*Faça um programa que recebe a altura de um triangulo em um número inteiro e imprima-o
utilizando asteriscos. Veja o Exemplo:
Entrada: 5
*
**
***
****
*****
*/
/*pronto*/

#include<stdio.h>
int main (){
	int altura;
	char simbolo;
	
	simbolo = '*';
	
	printf("digite a altura do triangulo: ");
	scanf("%d",&altura);
		
	for ( int i=1 ; altura != 0; altura--,i++){
		
		printf("\n");
		
		for(int ii=0 ; ii != i; ii++){
		printf("%c",simbolo);
	
		}
	}
	
	return 0;
}

/*Em uma competição de salto em distância cada atleta tem direito a cinco saltos. No final da série
de saltos de cada atleta, o melhor e o pior resultados são eliminados. O seu resultado fica sendo a
média dos três valores restantes. Você deve fazer um programa que receba o nome e as cinco
distâncias alcançadas pelo atleta em seus saltos e depois informe a média dos saltos conforme a
descrição acima informada (retirar o melhor e o pior salto e depois calcular a média). O
programa deve ser encerrado quando não for informado o nome do atleta. A saída do programa
deve ser conforme o exemplo abaixo:
Primeiro Salto: 6.5 m
Segundo Salto: 6.1 m
Terceiro Salto: 6.2 m
Quarto Salto: 5.4 m
Quinto Salto: 5.3 m
Melhor salto: 6.5 m
Pior salto: 5.3 m
Média dos demais saltos: 5.9 m
Resultado final: 5.9 m*/
