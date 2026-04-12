/*A tabela abaixo foi copiada do website da Receita Federal, e traz as alíquotas do imposto de renda de
pessoa física retido na fonte para o exercício de 2013:

base de calculo mensal em r$     aliquota %    parcelas a deduzir do imposto em r$
ate 1.637,11                          -            -
de 1.637,12 ate 2.453,50          7,5                122,78
de 2.453,51 ate 3.271,38          15,0               306,80
de 3.271,39 ate 4.087,65          22,5               552,15
acima de 4.087,65                 27,5               756,53

A base de cálculo é dada pelo salário mensal, com certas deduções, como dependentes e contribuição
previdenciária. Abstraindo estes e outros detalhes, o imposto devido é calculado tomando a base de
cálculo mensal, verificando a faixa na qual ela se encontra, aplicando a alíquota correspondente, e
reduzindo o valor final da parcela a deduzir. Por exemplo, se a base de cálculo é de R$10.000,00, a
alíquota é de 27,5%, ou seja, R$2750,00. Deduzimos R$756,53 da parcela e obtemos como resultado
R$1993,47 de imposto devido. Escreva um programa que receba como entrada a base de cálculo mensal
de um trabalhador e retorne o imposto de renda devido.*/

#include <stdio.h>
int main (){
	float calculoMensal,impostoDevido;
	
	printf("digite a renda mensal: ");
	scanf("%f",&calculoMensal);
	
	if (calculoMensal <= 1637.11){
		printf("o imposto de renda devido e 00.00\npois o salario e menor que 1637.12");
		
	}
	else if(calculoMensal >= 1637.12 && calculoMensal <= 2453.50){//7.5 - 122.78
		impostoDevido = (calculoMensal * 0.075) - 122.78;
		printf("o imposto devido a pagar e: %.2f",impostoDevido);
		
	}
	else if(calculoMensal >= 2453.51 && calculoMensal <= 3271.38){//15.0 - 306.80
	    impostoDevido = (calculoMensal * 0.15) - 306.80;
		printf("o imposto devido a pagar e: %.2f",impostoDevido);
		
	}
	else if(calculoMensal >= 3271.39 && calculoMensal <= 4087.65){//22.5 - 552.15
		impostoDevido = (calculoMensal * 0.225) - 552.15;
		printf("o imposto devido a pagar e: %.2f",impostoDevido);
		
	}
	else if(calculoMensal > 4087.65){//27.5 - 756.53
	    impostoDevido = (calculoMensal * 0.275) - 756.53;
		printf("o imposto devido a pagar e: %.2f",impostoDevido);
		
	}
	else{
		printf("erro inesperado reinicie e tente novamente com outro valor");
	}
	
	return 0;
}

/*As maçãs custam R$ 1,50 cada se forem compradas menos de uma dúzia, e R$ 1,25 se forem compradas
de 12 a 18 unidades e R$1,00 acima de 18 unidades, o vendedor concede um desconto de 10% se a venda
for em dinheiro, se for no cartão de débito 5% e se for no cartão de crédito não tem desconto. Escreva um
programa que leia o número de maçãs compradas, a forma de pagamento, calcule e escreva o custo total
da compra aplicando o desconto se houver. (Utilize SWITCH – CASE para comparar as formas de
pagamento)*/

#include <stdio.h>
int main(){
	int formaPagamento,macas;
	float valorFinal;
	
	printf("quantas macas foram compradas: ");
	scanf("%d",&macas);
	
	if (macas < 12){//1.50 - 10%dinherio - debito5%
		printf("qual a forma de pagamento?\n\n1- dinheiro\n2- cartao de debito\n3- cartao de credito\n\n: ");
        scanf("%d",&formaPagamento);
        switch(formaPagamento){
        	case 1:
        		valorFinal = macas * 1.50 - (macas * 0.1);
        		printf("o valor a pagar e: %.2f",valorFinal);
        		
        	break;
        	case 2:
        		valorFinal = macas * 1.50 - (macas * 0.05);
        		printf("o valor a pagar e: %.2f",valorFinal);
        		
        	break;
        	case 3:
        		valorFinal = macas * 1.50;
        		printf("o valor a pagar e: %.2f",valorFinal);
        		
        	break;
        	default:
        		printf("digite uma forma de pagamento acima\nreinicie e tente de novo.");
        	break;
        	
		}
		
	}
	else if(macas >= 12 && macas <= 18 ){//1.25 - 10%dinherio - debito5%
		printf("qual a forma de pagamento?\n\n1- dinheiro\n2- cartao de debito\n3- cartao de credito\n\n: ");
        scanf("%d",&formaPagamento);
        switch(formaPagamento){
        	case 1:
        		valorFinal = macas * 1.25 - (macas * 0.1);
        		printf("o valor a pagar e: %.2f",valorFinal);
        		
        	break;
        	case 2:
        		valorFinal = macas * 1.25 - (macas * 0.05);
        		printf("o valor a pagar e: %.2f",valorFinal);
        		
        	break;
        	case 3:
        		valorFinal = macas * 1.25;
        		printf("o valor a pagar e: %.2f",valorFinal);
        		
        	break;
        	default:
        		printf("digite uma forma de pagamento acima\nreinicie e tente de novo.");
        	break;
        	
		}
		
	}
	else if(macas > 18){//1.00 - 10%dinherio - debito5%
		printf("qual a forma de pagamento?\n\n1- dinheiro\n2- cartao de debito\n3- cartao de credito\n\n: ");
        scanf("%d",&formaPagamento);
        switch(formaPagamento){
        	case 1:
        		valorFinal = macas * 1.00 - (macas * 0.1);
        		printf("o valor a pagar e: %.2f",valorFinal);
        		
        	break;
        	case 2:
        		valorFinal = macas * 1.00 - (macas * 0.05);
        		printf("o valor a pagar e: %.2f",valorFinal);
        		
        	break;
        	case 3:
        		valorFinal = macas * 1.00;
        		printf("o valor a pagar e: %.2f",valorFinal);
        		
        	break;
        	default:
        		printf("digite uma forma de pagamento acima\nreinicie e tente de novo.");
        	break;
        	
		}
		
	}
	else {
		printf("**erro**\ntente novamente com um numero diferente.");
	}
	
	return 0;
}

/*Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela poderá ou
não votar este ano, considere se o voto é facultativo ou não. (não é necessário considerar o mês em que a
pessoa nasceu).*/

#include <stdio.h>
int main (){
	int anoNas, anoAtual, calculo, caminho;
	
	printf("digite o ano atual: ");
	scanf("%d",&anoAtual);
	printf("digite o ano de nascimento: ");
	scanf("%d",&anoNas);
	printf("e analfabeto?\n\n1- sim\n2- nao\n\n: ");
	scanf("%d",&caminho);
	
	switch (caminho){
		case 1:
		    printf("votar e facultativo para voce");
		break;
		case 2:
			calculo = anoAtual - anoNas;
	        if(calculo < 16){
		        printf("\nvoce nao pode votar.");
	        }
	        else if(calculo >= 16 && calculo < 18 || calculo > 70){
		        printf("votar e facultativo para voce");
	        }
	        else if(calculo >= 18 && calculo <= 70 ){
	        	printf("votar e obrigatorio para voce");
			}
			else{
				printf("**erro**\nerro inesperado reinicie o algoritmo e tente novamente");
			}
	
	    break;
	    default:
	    	printf("**erro**\ndigite um dos caminhos anteriores (1 ou 2).");
	    break;
	}
	return 0;
}

//////////////////////////////

#include <stdio.h>

int main() {
    float precoAntigo, precoNovo;

    printf("Digite o preco antigo do produto: ");
    scanf("%f", &precoAntigo);

    if (precoAntigo <= 50) {
       precoNovo = precoAntigo + (precoAntigo * 0.05); 
    } else if (precoAntigo > 50 && precoAntigo <=100) {
        precoNovo = precoAntigo + (precoAntigo * 0.1);
    } else if (precoAntigo > 100) {
        precoNovo = precoAntigo + (precoAntigo * 0.15); 
    } else {
        printf("Error Unexpected! Try Again.");
        return 1;
    }
    
    if (precoNovo <= 80) {
        printf("O novo valor do produto e: R$%.2f e ele e taxado como barato", precoNovo);
    } else if (precoNovo > 80 && precoNovo <= 120) {
        printf("O novo valor do produto e: R$%.2f e ele e taxado como normal", precoNovo);
    } else if (precoNovo > 120 && precoNovo <= 200) {
        printf("O novo valor do produto e: R$%.2f e ele e taxado como caro", precoNovo);
    } else if (precoNovo > 200) {
        printf("O novo valor do produto e: R$%.2f e ele e taxado como muito caro", precoNovo);
    } else {
        printf("Error Unexpected! Try Again.");
        return 1;
    }

    return 0;
}
