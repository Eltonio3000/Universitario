/*Você está escrevendo um programa que calcula o preço de uma corrida de táxi. O
preço é baseado na distância percorrida e no tempo gasto. O preço base é de R$ 2,00, e
a cada quilômetro rodado é adicionado R$ 1,50 ao preço. Além disso, a cada 2 minutos
de tempo gasto é adicionado R$ 0,50 ao preço, conceder um desconto de 10% para
pagamentos no PIX ou em DINHEIRO. Escreva um programa que leia a distância
percorrida em quilômetros e o tempo gasto em minutos, e calcule o preço da corrida e
aplique o desconto se houver.*/

#include <stdio.h>
#include <string.h>

int main (){
	float distancia, tempo, preco, desconto;
	char modo[8];
	
	printf("digite a distancia percorrida em quilometros: ");
	scanf("%f",&distancia);
	printf("digite o tempo em minutos: ");
	scanf("%f",&tempo);
	
	preco = 2 + (distancia * 1.50) + ((tempo/2)*0.50);
	
	printf("\nqual a forma de pagamento(pix, dinheiro ou cartao)?\n\n: ");
	scanf("%s", &modo);
	
	if( strcmp(modo, "pix")==0 || strcmp(modo, "dinheiro")==0 ){
		desconto = preco *0.1;
		preco =  preco - desconto;
		printf("\no preco a ser pago por essa corrida e %.2fR$ com %.2fR$ de desconto",preco,desconto);
	}
	else if(strcmp(modo, "cartao") == 0){
		printf("\no preco a ser pago por essa corrida e %.2fR$",preco);
	}
	else {
		printf("\nerro inesperado\nreinicie o algotimo e tente novamnete.");
	}
	
	return 0;
}

/*Utilizando a biblioteca MATH.H solicite que seja digitado a BASE e o EXPOENTE, em
seguida calcule o resultado, valide que o expoente seja menor que 4 e a base seja
menor que 10.*/

#include <stdio.h>
#include <math.h>

int main (){
	int base, expoente, resultado;
	
	printf("digite o valor da base: ");
	scanf("%d",&base);
	printf("digite o valor do expoente: ");
	scanf("%d",&expoente);
	
	
	if (expoente <= 4 && base <= 10){
	resultado = pow(base, expoente);
	printf("\no resultado e: %d", resultado);
		
	}
	else {
		printf("\nessa potenciacao nao corresponde a validacao dessa aplicacao");
	}
	
	return 0;
}

/*Construa um algoritmo que receba o valor de três variáveis a, b e c. O algoritmo deve
trocar o valor das variáveis de forma que a fique com o valor de b, b fique com o valor
de c e c fique com o valor de a. Imprima os valores originais e os valores trocados.*/

#include <stdio.h>
int main (){
	int a, b, c,ab,bc,ca;
	
	printf("digite o valor de A: ");
	scanf("%d",&a);
	printf("digite o valor de B: ");
	scanf("%d",&b);
	printf("digite o valor de C: ");
	scanf("%d",&c);
	
	ab = b;
	bc = c;
	ca = a;
	
    printf("\noriginais:\nA=%d  B=%d  C=%d\n\ntrocados\nA=%d  B=%d  C=%d",a,b,c,ab,bc,ca);
	
	return 0;
}

/*Refaça o exercício 2, e extraia a raiz quadrada do resultado da potenciação.*/

#include <stdio.h>
#include <math.h>

int main (){
		int base, expoente, resultado, raiz;
	
	printf("digite o valor da base: ");
	scanf("%d",&base);
	printf("digite o valor do expoente: ");
	scanf("%d",&expoente);
	
	
	if (expoente <= 4 && base <= 10){
	resultado = pow(base, expoente);
	raiz = sqrt(resultado);
	printf("\no resultado da potenciacao e: %d\no resultado da raiz e: %d", resultado,raiz);
		
	}
	else {
		printf("\nessa potenciacao nao corresponde a validacao dessa aplicacao, portanto nao mostrarei a raiz");
	}
	
	return 0;
}

/*Utilizando SWITCH e CASE, faça um algoritmo para que o usuário informe o seu destino
de viagem de acordo com a tabela abaixo:

Código/Destino/Preço diária
100    Recife     R$250
101   Maceió      R$350
102    Natal      R$450
103   Paraguai    R$150

O algoritmo deve solicitar o destino, a quantidade de diárias (mín. 1 máx. 7) e a forma de
pagamento, caso seja no PIX conceder 10% de desconto.*/

#include <stdio.h>
#include <string.h>

int main (){
	int codigo, diaria;
	float preco, desconto;
	char forma[8];
	
	printf("**viagens disponiveis**\n\n100-    Recife     R$250\n101-    Maceio     R$350\n102-    Natal      R$450\n103-   Paraguai    R$150\n\n: ");
	scanf("%d",&codigo);
	
	
	switch(codigo){
		case 100:
			printf("quantas diarias?\n: ");
			scanf("%d",&diaria);
			if (diaria >= 1 && diaria <= 7){
				preco = 250 * diaria;
			    printf("qual a forma de pagamento (no momento aceitamos apenas pix ou cartao)?\n: ");
			    scanf("%s",&forma);
			    if( strcmp(forma , "pix") == 0){
			        desconto = preco * 0.1;
			        preco = preco - desconto;
				    printf("o preco de hospedagem para essa viagem e de: %.2fR$\ncom %.2fR$ de desconto",preco,desconto);
				    
			    }
			    else if( strcmp(forma , "cartao") == 0){
				    printf("o preco de hospedagem para essa viagem e de: %.2fR$",preco);
			    	
				}
				
			}
			else {
				printf("a quantidade minima de diaria e 1 e o maximo e 7\nreinicie o algoritmo e tente novamente.");
			}
			
		break;
		case 101:
			printf("quantas diarias?\n: ");
			scanf("%d",&diaria);
			if (diaria >= 1 && diaria <= 7){
			preco = 350 * diaria;
            printf("qual a forma de pagamento (no momento aceitamos apenas pix ou cartao)?\n: ");
			    scanf("%s",&forma);
			    if( strcmp(forma , "pix") == 0){
			        desconto = preco * 0.1;
			        preco = preco - desconto;
				    printf("o preco de hospedagem para essa viagem e de: %.2fR$\ncom %.2fR$ de desconto",preco,desconto);
				    
			    }
			    else if( strcmp(forma , "cartao") == 0){
				    printf("o preco de hospedagem para essa viagem e de: %.2fR$",preco);
			    	
				}
				
			}
			else {
				printf("a quantidade minima de diaria e 1 e o maximo e 7\nreinicie o algoritmo e tente novamente.");
			}
					break;
		case 102:
			printf("quantas diarias?\n: ");
			scanf("%d",&diaria);
			if (diaria >= 1 && diaria <= 7){
			preco = 450 * diaria;
            printf("qual a forma de pagamento (no momento aceitamos apenas pix ou cartao)?\n: ");
			    scanf("%s",&forma);
			    if( strcmp(forma , "pix") == 0){
			        desconto = preco * 0.1;
			        preco = preco - desconto;
				    printf("o preco de hospedagem para essa viagem e de: %.2fR$\ncom %.2fR$ de desconto",preco,desconto);
				    
			    }
			    else if( strcmp(forma , "cartao") == 0){
				    printf("o preco de hospedagem para essa viagem e de: %.2fR$",preco);
			    	
				}
				
			}
			else {
				printf("a quantidade minima de diaria e 1 e o maximo e 7\nreinicie o algoritmo e tente novamente.");
			}
					break;
		case 103:
			printf("quantas diarias?\n: ");
			scanf("%d",&diaria);
			if (diaria >= 1 && diaria <= 7){
			preco = 150 * diaria;
            printf("qual a forma de pagamento (no momento aceitamos apenas pix ou cartao)?\n: ");
			    scanf("%s",&forma);
			    if( strcmp(forma , "pix") == 0){
			        desconto = preco * 0.1;
			        preco = preco - desconto;
				    printf("o preco de hospedagem para essa viagem e de: %.2fR$\ncom %.2fR$ de desconto",preco,desconto);
				    
			    }
			    else if( strcmp(forma , "cartao") == 0){
				    printf("o preco de hospedagem para essa viagem e de: %.2fR$",preco);
			    	
				}
				
			}
			else {
				printf("a quantidade minima de diaria e 1 e o maximo e 7\nreinicie o algoritmo e tente novamente.");
			}
					break;
		default:
			printf("**erro**\nreinicie o algotimo e digite um dos valores acima.");
		break;
		
	}
	
	return 0;
}
