/*Faça um programa que receba dois números e execute as operações listadas a seguir de acordo
com a escolha do usuário:
	
	1 -media entre os numeros digitados
	2 -diferenca entros os numeros
	3 -produtos entre os numeros digitados
	4 -divisao do primeiro com o segundo

Se a opção digitada for inválida, mostrar uma mensagem de erro e terminar a execução do
programa. Ao final imprimir os dois números digitados e o resultado da operação entre eles.*/

#include <stdio.h>
int main(){
	int caminho;
	float num1, num2, resultado;
	
	printf("selecione um numero para realizae uma acao:\n'1' -media entre os numeros\n'2' -diferenca entros os numeros\n'3' -produtos entre os numeros \n'4' -divisao\n\n:");
	scanf("%d",&caminho);
	switch(caminho){
		case 1:
			printf("\npara saber a media entre os numeros\ndigite um numero: ");
			scanf("%f",&num1);
			printf("digite outro numero: ");
			scanf("%f",&num2);
			resultado = (num1 + num2) / 2;
			printf("a media e: %.2f", resultado);
			
			break;
		case 2:
			printf("\npara saber a diferenca entre os numeros\ndigite um numero: ");
			scanf("%f",&num1);
			printf("digite outro numero: ");
			scanf("%f",&num2);
			resultado = num1 - num2;
			printf("a diferenca e: %.2f",resultado);
			
			break;
		case 3:
			printf("\npara saber o produto entre os numeros\ndigite um numero: ");
			scanf("%f",&num1);
			printf("digite outro numero: ");
			scanf("%f",&num2);
			resultado = num1 * num2;
			printf("o produto e: %.2f",resultado);
			
			break;
		case 4:
			printf("\npara dividir\ndigite um numero: ");
			scanf("%f",&num1);
			printf("digite outro numero: ");
			scanf("%f",&num2);
			resultado = num1 / num2;
			printf("o resultado e: %.2f",resultado);
			
			break;
		default:
			printf("\nerro\nreinicie o programa e digite um dos caminhos listados anterimente.");
	}
	
	return 0;
}

/*Uma loja fornece 15% de desconto para funcionários e 10% de desconto para clientes vips e
5% para o cliente comum. O programa deverá ler o valor total da compra efetuada e um
código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).
Imprimir ao final o tipo de cliente o valor da venda sem desconto e o valor com desconto.*/

#include <stdio.h>
int main (){
	int classificacao;
	float valorTotal, valorDesconto, valorCompra;
	
	printf("digite a classificacao do cliente de acordo com a tabela a seguir\n1 -comum\n2 -funcionario\n3 -vip\n\n: ");
	scanf("%d",&classificacao);
	switch (classificacao){
	
	case 1: 
	 printf("\n**comum**\ndigite o valor da compra: ");
	 scanf("%f",&valorCompra);
	 valorDesconto = valorCompra/(5*100);
	 valorTotal = valorCompra - valorDesconto;
	 printf("o cliente de classificacao comum\nteve um desconto de %.2fR$\nem uma compra de %.2fR$\n\n--valorfinal: %.2fR$",valorDesconto, valorCompra, valorTotal);
	 
	break;
	
	case 2: 
	printf("\n**funcionario**\ndigite o valor da compra: ");
	 scanf("%f",&valorCompra);
	 valorDesconto = valorCompra/(15*100);
	 valorTotal = valorCompra - valorDesconto;
	 printf("o cliente de classificacao funcionario\nteve um desconto de %.2fR$\nem uma compra de %.2fR$\n\n--valorfinal: %.2fR$",valorDesconto, valorCompra, valorTotal);
	
	break;
	
	case 3:
		printf("\n**vip**\ndigite o valor da compra: ");
	 scanf("%f",&valorCompra);
	 valorDesconto = valorCompra/(10*100);
	 valorTotal = valorCompra - valorDesconto;
	 printf("o cliente de classificacao vip\nteve um desconto de %.2fR$\nem uma compra de %.2fR$\n\n--valorfinal: %.2fR$",valorDesconto, valorCompra, valorTotal);
	
	break;
	
	default:
		printf("digite um caminho listado anteriormente.");
    break;
		
	}
	
	return 0;
}

/*Dado o valor do produto e a forma de pagamento.
1= à vista;
2= à prazo.
Se o produto for pago à vista aplique um desconto de 10% antes de mostrar o valor final,
senão informe o mesmo valor do produto. Ao final imprimir o preço original e o preço com
desconto se houver*/

#include<stdio.h>
int main (){
	int formaPagamento;
	float valorProduto, valorFinal;
	
	printf("qual a forma de pagamento?\n\n1 -a vista\n2 -a prazo\n\n:");
	scanf("%d",&formaPagamento);
	
	switch (formaPagamento){
		case 1:
			printf("**a vista**\ndigite o valor do produto: ");
			scanf("%f",&valorProduto);
			valorFinal = valorProduto -(valorProduto /(10*100));
			printf("a compra de %.2fR$ recebeu um desconto:\n--valor final: %.2f",valorProduto, valorFinal);
		
		break;
		
		case 2:
			printf("**a prazo**\ndigite o valor do produto: ");
			scanf("%f",&valorProduto);
			printf("o cliente pagara: %.2f",valorProduto);
		
		break;
		default:
			printf("erro\nselecione um caminho listado anteriormente.");
			break;
		
	}
	
	return 0;
}

/*Desenvolva um algoritmo que leia um determinado código de produto, e em seguida mostre sua
classificação, de acordo com a tabela abaixo:
	codigo classificacao
	1 -alimento nao perecivel
	2,3 ou 4 -alimentpo perecivel
	5 ou 6 -vestuario
	7 -higiene pessoal
	8, 9, 10 -utensilios domesticos
	qualquer outro codigo invalido */
	
#include <stdio.h>
	int main (){
		int codigo;
		
		printf("digite o codigo do produto: ");
		scanf("%d",&codigo);
		
			switch (codigo){
				case 1:
				printf("classificacao:\nalimento nao perecivel");
				break;
				
				case 2:
				printf("classificacao:\nalimento perecivel");
				break;
				
				case 3:
				printf("classificacao:\nalimento perecivel");
				break;
				
				case 4:
				printf("classificacao:\nalimento perecivel");
				break;
				
				case 5:
				printf("classificacao:\nvestuario");
				break;
				
				case 6:
				printf("classificacao:\nvestuario");
				break;
				
				case 7:
				printf("classificacao:\nhigiene pessoal");
				break;
				
				case 8:
				printf("classificacao:\nutensilios domesticos");
				break;
				
				case 9:
				printf("classificacao:\nutensilios domesticos");
				break;
				
				case 10:
				printf("classificacao:\nutensilios domesticos");
				break;
			
	        default:
			printf("codigo invalido, reinicie o algoritmo e tente novamente.");
		     break;
		}
		
		return 0;
	}
	
/*Desenvolva um algoritmo que calcule e apresente quanto deve ser pago por um produto
considerando a leitura do preço de etiqueta (PE) e o código da condição de pagamento (CP). Utilize
para os cálculos a tabela de condições de pagamento a seguir:

1 -a vista em dinheiro ou cheque, com 10% de desconto
2 -a vista com cartao de credito, com 5% de desconto
3 -em 2 vezes, preco normal de etiqueta sem juros
4 -em 3 vezes, preco de etiqueta com acrescimo de 10%

Ao final imprima o valor original do produto, o desconto ou acréscimo se houver e a descrição a
condição de pagamento aplicada.*/

#include <stdio.h>
int main (){
	int caminho;
	float valorProduto, valorDesconto, valorAcrescimo, valorFinal, parcela;
	
	printf("qual a forma de pagamento:\n\n1 -a vista em dinheiro ou cheque.\n2 -a vista com cartao de credito\n3 -em 2 vezes\n4 -em 3 vezes\n\n: ");
	scanf("%d",&caminho);
	
	switch (caminho){
	case 1:
	printf("digite o valor do produto: ");
	scanf("%f",&valorProduto);
	valorDesconto = valorProduto /(10*100);
	valorFinal = valorProduto - valorDesconto;
	printf("forma de pagamento: a vista em dinheiro ou cheque\no valor vai receber um desconto de 10%%\n\nvalor do produto: %.2fR$\nvalor do desconto: %.2fR$\nvalor final: %.2fR$",valorProduto ,valorDesconto ,valorFinal);
	
	break;
	
	case 2:
	printf("digite o valor do produto: ");
	scanf("%f",&valorProduto);
	valorDesconto = valorProduto /(5*100);
	valorFinal = valorProduto - valorDesconto;
	printf("forma de pagamento: a vista com cartao de credito\no valor vai receber um desconto de 5%%\n\nvalor do produto: %.2fR$\nvalor do desconto: %.2fR$\nvalor final: %.2fR$",valorProduto ,valorDesconto ,valorFinal);
	
	break;
	
	case 3:
	printf("digite o valor do produto: ");
	scanf("%f",&valorProduto);
	parcela = valorProduto / 2;
	printf("forma de pagamento: parcelado em 2 vezes\no cliente vai pagar parcelar em 2x sem juros\n\nvalor do produto: %.2fR$\ncom 2 parcelas de:%.2fR$",valorProduto ,parcela);
	
	break;
	
	case 4:
	printf("digite o valor do produto: ");
	scanf("%f",&valorProduto);
	valorAcrescimo = valorProduto /(5*100);
	valorFinal = valorProduto + valorAcrescimo;
	parcela = valorProduto / 3;
	printf("forma de pagamento: parcelado em 3 vezes\no cliente vai parcelar em 3x com o acrescimo de 5%% no valor do produto\n\nvalor do produto: %.2fR$\nvalor do acrescimo: %.2fR$\n3x de: %.2fR$",valorProduto ,valorAcrescimo ,parcela);
	
	break;
	
	default:
		printf("\nerro\nreinicie o algoritmo e selecione um dos caminhos acima.");
    break;
}

return 0;
}
