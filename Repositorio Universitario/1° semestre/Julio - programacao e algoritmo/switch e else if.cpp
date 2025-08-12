/*O cardápio de uma casa de lanches é dado pela tabela abaixo:

100 -cachorro quente 1,70
101 -bauru simples 2,30
102 -bauru com ovo 2,60
103 -hamburguer 2,40
104 -chesseburguer 2,50
105 -refrigerante 1,00

Escreva um algoritmo que leia o código do item adquirido pelo consumidor e a quantidade,
calculando e mostrando o valor a pagar. Imprima uma mensagem informado o valor total e o
produto comprado*/

#include <stdio.h>
int main (){
	int pedido, quant;
	float total, preco;
	printf("**cardapio**\n\n100 - cachorro quente   1,70\n101 -  bauru simples    2,30\n102 -  bauru com ovo    2,60\n103 -   hamburguer      2,40\n104 -  chesseburguer    2,50\n105 -   refrigerante    1,00\n\ndigite o numero do lanche que deseja(escolha um por vez): ");
	scanf("%d",&pedido);
	
	switch(pedido){
		case 100:
			printf("\n**cachorro quente**\nquantas unidades: ");
	        scanf("%d",&quant);
	        if (quant > 1){
	        	preco = 1.70;
	        	total = quant * preco;
	        	printf("\n%d cachorro quente.\no lanche ficou: %.2f", quant, total);
	        	
			}
			else if(quant == 1){
			preco = 1.70;
			printf("um cachorro quente\no lanche ficou: %.2f",preco);
	    }
		break;
		case 101:
			printf("\n**bauru simples**\nquantas unidades: ");
	        scanf("%d",&quant);
	        if (quant > 1){
	        	preco = 2.30;
	        	total = quant * preco;
	        	printf("\n%d bauru simples.\no lanche ficou: %.2f", quant, total);
	        	
			}
			else if(quant == 1){
			preco = 2.30;
			printf("um bauru simples\no lanche ficou: %.2f",preco);
	    }
		break;
		case 102:
			printf("\n**bauru com ovo**\nquantas unidades: ");
	        scanf("%d",&quant);
	        if (quant > 1){
	        	preco = 2.60;
	        	total = quant * preco;
	        	printf("\n%d bauru com ovo.\no lanche ficou: %.2f", quant, total);
	        	
			}
			else if(quant == 1){
			preco = 2.60;
			printf("um bauru com ovo\no lanche ficou: %.2f",preco);
	    }
		break;
		case 103:
			printf("\n**hamburguer**\nquantas unidades: ");
	        scanf("%d",&quant);
	        if (quant > 1){
	        	preco = 2.40;
	        	total = quant * preco;
	        	printf("\n%d hamburguer.\no lanche ficou: %.2f", quant, total);
	        	
			}
			else if(quant == 1){
			preco = 2.40;
			printf("um hamburguer\no lanche ficou: %.2f",preco);
	    }
		break;
		case 104:
			printf("\n**chesseburguer**\nquantas unidades: ");
	        scanf("%d",&quant);
	        if (quant > 1){
	        	preco = 2.50;
	        	total = quant * preco;
	        	printf("\n%d chesseburguer.\no lanche ficou: %.2f", quant, total);
	        	
			}
			else if(quant == 1){
			preco = 2.50;
			printf("um chesseburquer\no lanche ficou: %.2f",preco);
	    }
		break;
		case 105:
			printf("\n**refigerante**\nquantas unidades: ");
	        scanf("%d",&quant);
	        if (quant > 1){
	        	preco = 1.00;
	        	total = quant * preco;
	        	printf("\n%d refrigerante.\no lanche ficou: %.2f", quant, total);
	        	
			}
			else if(quant == 1){
			preco = 1.00;
			printf("um refrigerante\no lanche ficou: %.2f",preco);
	    }
		break;
		default:
			printf("\ncodigo nao reconhecido, reinicie o algoritmo\ne selecione um item do cardapio.");
		break;
	}
	
	return 0;
}

/*Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool:

até 20 litros, desconto de 3% por litro
acima de 20 litros, desconto de 5% por litro
Gasolina:
até 20 litros, desconto de 4% por litro
Acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da
seguinte forma: A-Alcool, G-Gasolina) e o valor do litro. Calcule e imprima o valor a ser pago
pelo cliente. */

#include <stdio.h>
int main (){
	char tipo;
	float litros, totalPagar, litro, valor;
	
	printf("digite o tipo de combustivel:\n\nA -Alcool\nG -Gasolina\n(escreva o caracter em maiusculo)\n\n: ");
	scanf("%c",&tipo);
	
	switch (tipo){
		case 'A':
			if (litros <= 20 ){
				printf("\nquanto vale o litros? ");
	            scanf("%f",&litro);
	            printf("quantos litros foram vedidos? ");
	            scanf("%f",&litros);
				valor = litro * litros;
			    totalPagar = valor *(valor /(3*100));
				printf("\n**alcool**\ntotal a pagar %.2fR$",totalPagar);
			}
			else if (litros > 20){
			    printf("\nquanto vale o litros? ");
	            scanf("%f",&litro);
	            printf("quantos litros foram vedidos? ");
	            scanf("%f",&litros);
				valor = litro * litros;
			    totalPagar = valor *(valor /(5*100));
				printf("\n**alcool**\ntotal a pagar %.2fR$",totalPagar);	
			}
			
		break;
		case 'G':
			if (litros <= 20 ){
                printf("\nquanto vale o litros? ");
	            scanf("%f",&litro);
	            printf("quantos litros foram vedidos? ");
	            scanf("%f",&litros);
				valor = litro * litros;
			    totalPagar = valor *(valor /(4*100));
				printf("\n**gasolina**\ntotal a pagar %.2fR$",totalPagar);
			}
			else if (litros > 20){
			    printf("\nquanto vale o litros? ");
	            scanf("%f",&litro);
	            printf("quantos litros foram vedidos? ");
	            scanf("%f",&litros);
				valor = litro * litros;
			    totalPagar = valor *(valor /(6*100));
				printf("\n**gasolina**\ntotal a pagar %.2fR$",totalPagar);	
			}
		
				
		break;
    }
	return 0;
}

/*Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus de
salário. Faça um programa que leia:
O valor do salário atual do funcionário, o tempo de serviço deste funcionário na empresa
(número de anos de trabalho na empresa) e o nome desse funcionário. Use as tabelas abaixo para
calcular o salário reajustado deste funcionário e imprima o valor do salário final reajustado e o
seu nome, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

ate 400,00 - 25% - abaixo de um ano - sem bonus
ate 1000,00 - 20% - de 1 a 3 anis - 100
ate 1500,00 - 15% - de 4 a 6 anos - 200
ate 2000,00 - 10% - de 7 a 10 anos - 300

acima de 2000,00 - sem reajuste - mais de 10 anos - 500,00 */

#include <stdio.h>
int main (){
	char nome[11];
	int tempo;
	float salarioAtual, salarioFinal, acrescimo;
	
	printf("digite o nome do funcionario: ");
	scanf("%10s", &nome);
	printf("qual o salario atual do funcionario: ");
	scanf("%f", &salarioAtual);
	printf("quantos anos o funcionario tem na empresa: ");
	scanf("%d", &tempo);
	
	
	if(salarioAtual <= 400){
		if (tempo < 1){
			acrescimo = (salarioAtual /(25*100));
			salarioFinal = salarioAtual + acrescimo;
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$\n**sem valor bonus**",nome ,salarioFinal);
		}
		else if(tempo >= 1 && tempo <= 3){
		 acrescimo = (salarioAtual /(25*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+100 (bonus)",nome ,salarioFinal);
		 }
		 else if(tempo >= 4 && tempo <= 6 ){
		 acrescimo = (salarioAtual /(25*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+200 (bonus)",nome ,salarioFinal);
		 }
		 else if(tempo >= 7 && tempo <= 10 ){
		 acrescimo = (salarioAtual /(25*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+300 (bonus)",nome ,salarioFinal);
		 }
		 else if( tempo > 10 ){
		 acrescimo = (salarioAtual /(25*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+500 (bonus)",nome ,salarioFinal);
		 }
	}
	else if(salarioAtual > 400 && salarioAtual <= 1000){
		if (tempo < 1){
			acrescimo = (salarioAtual /(20*100));
			salarioFinal = salarioAtual + acrescimo;
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$\n**sem valor bonus**",nome ,salarioFinal);
		}
		else if(tempo >= 1 && tempo <= 3){
		 acrescimo = (salarioAtual /(20*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+100 (bonus)",nome ,salarioFinal);
		 }
		 else if(tempo >= 4 && tempo <= 6 ){
		 acrescimo = (salarioAtual /(20*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+200 (bonus)",nome ,salarioFinal);
		 }
		 else if(tempo >= 7 && tempo <= 10 ){
		 acrescimo = (salarioAtual /(20*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+300 (bonus)",nome ,salarioFinal);
		 }
		 else if( tempo > 10 ){
		 acrescimo = (salarioAtual /(20*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+500 (bonus)",nome ,salarioFinal);
		 }
	}
	else if(salarioAtual > 400 && salarioAtual > 1000 && salarioAtual <= 1500){
		if (tempo < 1){
			acrescimo = (salarioAtual /(15*100));
			salarioFinal = salarioAtual + acrescimo;
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$\n**sem valor bonus**",nome ,salarioFinal);
		}
		else if(tempo >= 1 && tempo <= 3){
		 acrescimo = (salarioAtual /(15*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+100 (bonus)",nome ,salarioFinal);
		 }
		 else if(tempo >= 4 && tempo <= 6 ){
		 acrescimo = (salarioAtual /(15*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+200 (bonus)",nome ,salarioFinal);
		 }
		 else if(tempo >= 7 && tempo <= 10 ){
		 acrescimo = (salarioAtual /(15*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+300 (bonus)",nome ,salarioFinal);
		 }
		 else if( tempo > 10 ){
		 acrescimo = (salarioAtual /(15*100));
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+500 (bonus)",nome ,salarioFinal);
		 }
	}
	else if(salarioAtual > 400 && salarioAtual > 1000 && salarioAtual > 1500 && salarioAtual <= 2000){
         if (tempo < 1){
			acrescimo = (salarioAtual /(10*100));
			salarioFinal = salarioAtual + acrescimo;
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$\n**sem valor bonus**",nome ,salarioFinal);
		}
		else if(tempo >= 1 && tempo <= 3){
		 acrescimo = (salarioAtual /(10*100));
		 salarioFinal = salarioAtual + acrescimo;
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+100 (bonus)",nome ,salarioFinal);
		 }
		 else if(tempo >= 4 && tempo <= 6 ){
		 acrescimo = (salarioAtual /(10*100));
		 salarioFinal = salarioAtual + acrescimo;
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+200 (bonus)",nome ,salarioFinal);
		 }
		 else if(tempo >= 7 && tempo <= 10 ){
		 acrescimo = (salarioAtual /(10*100));
		 salarioFinal = salarioAtual + acrescimo;
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+300 (bonus)",nome ,salarioFinal);
		 }
		 else if( tempo > 10 ){
		 acrescimo = (salarioAtual /(10*100));
		 salarioFinal = salarioAtual + acrescimo;
		 printf("\n\no funcionario: %s\npassa a receber: %.2fR$+500 (bonus)",nome ,salarioFinal);
		 }
    }
    else if(salarioAtual > 400 && salarioAtual > 1000 && salarioAtual > 1500 && salarioAtual > 2000){
    	if( tempo < 10 ){
		 printf("\n\no funcionario: %s\nnao recebe reajuste\n**sem valor bonus**",nome);
		 }
		else if( tempo > 10 ){
		 printf("\n\no funcionario: %s\nnao recebe reajuste\nporem tem +500 (bonus)",nome);
		 }
	}
	else {
		printf("**erro inesperado**\nreinicie o algoritmo e tente novamnete com novos dados.");
	}
   return 0;
}

/*Em C faça um algoritmo que leia um número inteiro menor que 1000 e imprima a quantidade de
centenas, dezenas e unidades do mesmo.*/

#include <stdio.h>
int main (){
	int num, centena, dezena, unidade;
	
	printf("digite um numero menor 	que 1000: ");
	scanf("%d",&num);
	
	if( num <= 1000){
	    centena = num / 100;
	    dezena  = num / 10;
	    unidade = num / 1;
	    printf("o numero: %d\ntem %d centana\ntem %d dezena\ntem %d unidade",num ,centena ,dezena ,unidade);
	    
	}
	else{
		printf("o valor digitado nao e menor que 1000\nreinicie o algoritmo e tente novamente.");
	}
	
	return 0;
}

/*Faça um algoritmo que leia 2 números e em seguida pergunte ao usuário qual operação da
calculadora ele deseja realizar (reaproveitar código da lista anterior). Ao final imprimir o
resultado da operação acompanhado de uma frase que diga se o número é:
par ou ímpar;
positivo ou negativo;*/

#include <stdio.h>
int main (){
	int operacao, resultado;
	float num1, num2;
	
printf("qual oeracao voce quer fazer:\n'1' -soma\n'2' -subtracao\n'3' -multiplicacao \n'4' -divisao\n\n: ");
	scanf("%d",&operacao);
	switch(operacao){
		case 1:
			printf("\n**soma**\ndigite um numero: ");
			scanf("%f",&num1);
			printf("digite outro numero: ");
			scanf("%f",&num2);
			resultado = num1 + num2;

			printf("a soma e: %d\n", resultado);
			
			if(resultado % 2 != 0 ){
				if(resultado < 0 ){
			        printf("o numero e impar\no numero e negativo");
				}
			
			    else{
				    printf("o numero e impar\no numero e positivo");
			    }
			}
			else{
			    if(resultado < 0){
			    	printf("o numero e par\no numero e negativo");
				}
				else{
					printf("o numero e par\no numero e positivo");
				}
			}
		    
		
			
		break;
		case 2:
			printf("\n**subtracao**\ndigite um numero: ");
			scanf("%f",&num1);
			printf("digite outro numero: ");
			scanf("%f",&num2);
			resultado = num1 - num2;

			printf("a subtracao e: %d\n", resultado);
			
			if(resultado % 2 != 0 ){
				if(resultado < 0 ){
			        printf("o numero e impar\no numero e negativo");
				}
			
			    else{
				    printf("o numero e impar\no numero e positivo");
			    }
			}
			else{
			    if(resultado < 0){
			    	printf("o numero e par\no numero e negativo");
				}
				else{
					printf("o numero e par\no numero e positivo");
				}
			}
			
			break;
		case 3:
			printf("\n**multiplicacao**\ndigite um numero: ");
			scanf("%f",&num1);
			printf("digite outro numero: ");
			scanf("%f",&num2);
			resultado = num1 * num2;

			printf("a multiplicacao e: %d\n", resultado);
			
			if(resultado % 2 != 0 ){
				if(resultado < 0 ){
			        printf("o numero e impar\no numero e negativo");
				}
			
			    else{
				    printf("o numero e impar\no numero e positivo");
			    }
			}
			else{
			    if(resultado < 0){
			    	printf("o numero e par\no numero e negativo");
				}
				else{
					printf("o numero e par\no numero e positivo");
				}
			}
			break;
		case 4:
			printf("\n**divisao**\ndigite um numero: ");
			scanf("%f",&num1);
			printf("digite outro numero: ");
			scanf("%f",&num2);
			resultado = num1 / num2;

			printf("a divisao e: %d\n", resultado);
			
			if(resultado % 2 != 0 ){
				if(resultado < 0 ){
			        printf("o numero e impar\no numero e negativo");
				}
			
			    else{
				    printf("o numero e impar\no numero e positivo");
			    }
			}
			else{
			    if(resultado < 0){
			    	printf("o numero e par\no numero e negativo");
				}
				else{
					printf("o numero e par\no numero e positivo");
				}
			}
			break;
		default:
			printf("\nerro\nreinicie o programa e digite um dos caminhos listados anterimente.");
	}
	
	return 0;
}

/*Em C faça um algoritmo para um caixa eletrônico. deverá perguntar ao usuário o valor do saque
e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de
1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O algoritmo não
deve se preocupar com a quantidade de notas existentes na máquina.
Exemplo 1: Para sacar a quantia de 256 reais, o algoritmo fornece duas notas de 100, uma nota
de 50, uma nota de 5 e uma nota de 1;
Exemplo 2: Para sacar a quantia de 399 reais, o algoritmo fornece três notas de 100, uma nota de
50, quatro notas de 10, uma nota de 5 e quatro notas de 1.*/

#include <stdio.h>
int main (){
	int valor,nota1, nota5, nota10, nota50, nota100;

	printf("digite o valor do saque: ");
	scanf("%d",&valor);
	
	if(valor > 10 && valor < 600){
		if (valor >= 10 && valor <= 600) {
        nota100 = valor / 100;
        valor %= 100;

        nota50 = valor / 50;
        valor %= 50;

        nota10 = valor / 10;
        valor %= 10;

        nota5 = valor / 5;
        valor %= 5;

        nota1 = valor;
	}
		printf("\npara sacar a quantia de %dR$\nvoce vai receber...\n%d notas de 100\n%d notas de 50\n%d notas de 10\n%d notas de 5\n%d notas de 1",valor,nota100,nota50,nota10,nota5,nota1);
		
	}
	else if(valor < 10){
		printf("o valor minimo para saque e *10R$*");
	}
	else {
		printf("o valor maximo para saque *600R$*");;
	}
	
	return 0;
}

/*O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:

  Produto          Até 5kg          Acima de 5kg

1- Filé Mignon    R$29,90             R$25,90
2- Alcatra        R$27,90             R$23,90
3- Picanha        R$39,90             R$35,90

Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da
promoção, porém não há limites para a quantidade de carne por cliente. Se compra for feita no
cartão Tabajara o cliente receberá ainda um desconto de 5% sobre o total a compra, se for paga
em outra forma de pagamento não dar desconto.
Escreva um algoritmo que peça o tipo e a quantidade de carne comprada pelo usuário e gere um
cupom fiscal, contendo as informações da compra: tipo e quantidade de carne, preço total, tipo
de pagamento, valor do desconto e valor a pagar.*/

#include <stdio.h>
int main (){
	int tipo, caminho;
	float precoTotal, desconto, totalPagar,kg;
	
	printf("tipo de carne\n\n1- file mignon\n2- alcatra\n3- picanha\n\n: ");
	scanf("%d",&tipo);
	
	if(tipo >= 1 && tipo <= 3){
	switch(tipo){
		case 1:
			printf("\n**file mignon**\nquantos quilos: ");
			scanf("%f",&kg);
			printf("escolha a forma de pagamento conforme a tabela\n\n1- cartao da loja\n2- outro metodo\n\n: ");
			scanf("%d",&caminho);
			switch(caminho){
				case 1:
					if(kg < 5 ){ 
						precoTotal = kg * 29.90;
						desconto = precoTotal /(5*100);
						totalPagar = precoTotal - desconto;
						printf("\n**cupom fiscal**\nfile mignon\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: cartao da loja\ndesconto: %.2f\ntotal a pagar: %.2f",kg ,precoTotal ,desconto ,totalPagar);
					}
					else if(kg >= 5){ 
				        precoTotal = kg * 25.90;
						desconto = precoTotal /(5*100);
						totalPagar = precoTotal - desconto;
						printf("\n**cupom fiscal**\nfile mignon\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: cartao da loja\ndesconto: %.2f\ntotal a pagar: %.2f",kg ,precoTotal ,desconto ,totalPagar);
					}
				break;
				case 2:
					if(kg < 5 ){ 
						precoTotal = kg * 29.90;
						totalPagar = precoTotal;
						printf("\n**cupom fiscal**\nfile mignon\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: outro metodo\ndesconto: 00,00\ntotal a pagar: %.2f",kg ,precoTotal ,totalPagar);
					}
					else if(kg >= 5 ){ 
						precoTotal = kg * 25.90;
						totalPagar = precoTotal;
						printf("\n**cupom fiscal**\nfile mignon\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: outro metodo\ndesconto: 00,00\ntotal a pagar: %.2f",kg ,precoTotal ,totalPagar);
					}
				break;
				default:
				        printf("erro\nselecione um caminho na tabela acima.");
				break;
				
			}
			
		break;
		case 2:
			printf("\n**alcatra**\nquantos quilos: ");
			scanf("%f",&kg);
			printf("escolha a forma de pagamento conforme a tabela\n\n1- cartao da loja\n2- outro metodo\n\n: ");
			scanf("%d",&caminho);
			switch(caminho){
				case 1:
					if(kg < 5 ){ 
						precoTotal = kg * 27.90;
						desconto = precoTotal /(5*100);
						totalPagar = precoTotal - desconto;
						printf("\n**cupom fiscal**\nalcatra\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: cartao da loja\ndesconto: %.2f\ntotal a pagar: %.2f",kg ,precoTotal ,desconto ,totalPagar);
					}
					else if(kg >= 5){ 
				        precoTotal = kg * 23.90;
						desconto = precoTotal /(5*100);
						totalPagar = precoTotal - desconto;
						printf("\n**cupom fiscal**\nalcatra\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: cartao da loja\ndesconto: %.2f\ntotal a pagar: %.2f",kg ,precoTotal ,desconto ,totalPagar);
					}
				break;
				case 2:
					if(kg < 5 ){ 
						precoTotal = kg * 27.90;
						totalPagar = precoTotal;
						printf("\n**cupom fiscal**\nalcatra\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: outro metodo\ndesconto: 00,00\ntotal a pagar: %.2f",kg ,precoTotal ,totalPagar);
					}
					else if(kg >= 5 ){ 
						precoTotal = kg * 23.90;
						totalPagar = precoTotal;
						printf("\n**cupom fiscal**\nalcatra\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: outro metodo\ndesconto: 00,00\ntotal a pagar: %.2f",kg ,precoTotal ,totalPagar);
					}
				break;
				default:
				        printf("erro\nselecione um caminho na tabela acima.");
				break;
				
			}
			
		break;
		case 3:
			printf("\n**picanha**\nquantos quilos: ");
			scanf("%f",&kg);
			printf("escolha a forma de pagamento conforme a tabela\n\n1- cartao da loja\n2- outro metodo\n\n: ");
			scanf("%d",&caminho);
			switch(caminho){
				case 1:
					if(kg < 5 ){ 
						precoTotal = kg * 39.90;
						desconto = precoTotal /(5*100);
						totalPagar = precoTotal - desconto;
						printf("\n**cupom fiscal**\npicanha\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: cartao da loja\ndesconto: %.2f\ntotal a pagar: %.2f",kg ,precoTotal ,desconto ,totalPagar);
					}
					else if(kg >= 5){ 
				        precoTotal = kg * 35.90;
						desconto = precoTotal /(5*100);
						totalPagar = precoTotal - desconto;
						printf("\n**cupom fiscal**\npicanha\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: cartao da loja\ndesconto: %.2f\ntotal a pagar: %.2f",kg ,precoTotal ,desconto ,totalPagar);
					}
				break;
				case 2:
					if(kg < 5 ){ 
						precoTotal = kg * 39.90;
						totalPagar = precoTotal;
						printf("\n**cupom fiscal**\npicanha\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: outro metodo\ndesconto: 00,00\ntotal a pagar: %.2f",kg ,precoTotal ,totalPagar);
					}
					else if(kg >= 5 ){ 
						precoTotal = kg * 35.90;
						totalPagar = precoTotal;
						printf("\n**cupom fiscal**\npicanha\nkg: %.2f\npreco total: %.2f\ntipo de apagamento: outro metodo\ndesconto: 00,00\ntotal a pagar: %.2f",kg ,precoTotal ,totalPagar);
					}
				break;
				default:
				        printf("erro\nselecione um caminho na tabela acima.");
				break;
				
			}
			
		break;
		
	}	
	}
	else{
		printf("erro\nselecione o tipo da carne conforme a tabela acima\nreinicie e tente novamente");
	}
	
	return 0;
}

/* O algoritmo abaixo faz as seguintes considerações, se a MÉDIA for MAIOR que 9 o
CONCEITO é A se for entre 8 e 9 o CONCEITO é B se for entre 6 e 8 o CONCEITO é C e se
for menor que 6 o CONCEITO é D. Considerando que MEDIA menor que 6 o aluno está
REPROVADO, analise o algoritmo abaixo, e reescreva corrigindo os erros existentes.*/

#include<stdio.h>
int main (){
	float n1, n2, n3, media;
	char conceito;
	
	printf("digite a primeira nota: ");
	scanf("%f",&n1);
	printf("digite a segunda nota: ");
	scanf("%f",&n2);
	printf("digite a terceira nota: ");
	scanf("%f",&n3);
	
	media = (n1 + n2 + n3)/ 3;
	
	if(media > 9){
		conceito = 'A';
		printf("a media e: %.2f\no conceito e: %c",media ,conceito);
	}
	
	else if(media >= 8 && media <= 9 ){
		conceito = 'B';
		printf("a media e: %.2f\no conceito e: %c",media ,conceito);
	}
	else if(media >= 6 && media <= 8){
		conceito = 'C';
		printf("a media e: %.2f\no conceito e: %c",media ,conceito);
	}
	else if(media < 6 ){
		conceito = 'D';
		printf("a media e: %.2f\no conceito e: %c\n**REPROVADO**",media ,conceito);
	}
	
	return 0;
}
