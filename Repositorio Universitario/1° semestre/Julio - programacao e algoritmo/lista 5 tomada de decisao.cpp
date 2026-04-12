/*Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor
da compra for menor que igual R$ 20,00, se o produto custar entre R$20,01 e R$30 o lucro
será de 30% e se o custo for maior que 30, o lucro será de 25%. Elabore um algoritmo
que leia o valor do produto e imprima o valor de venda para o produto aplicando a taxa
do custo*/

#include <stdio.h>
int main (){
	float valorProduto, valorVenda;
	
	printf("digite o valor do produto: ");
	scanf("%f",&valorProduto);
	
	if (valorProduto <= 20.00){ //45% 
		valorVenda = valorProduto +(valorProduto * 0.45);
		printf("o valor de venda e: %.2f",valorVenda);
	}
	else if (valorProduto >= 20.01 && valorProduto <= 30.00){ //30%
		valorVenda = valorProduto +(valorProduto * 0.30);
		printf("o valor de venda e: %.2f",valorVenda);
	}
	else if (valorProduto > 30.00){ //25%
		valorVenda = valorProduto +(valorProduto * 0.25);
		printf("o valor de venda e: %.2f",valorVenda);
	}
	else{
		printf("erro inesperado reinicie o algoritmo");
	}
	
	return 0;
}

/*Um triângulo é uma forma geométrica (polígono) composta de três lados, sendo que
cada lado é menor que a soma dos outros dois lados. Assim, para que um triângulo seja
válido, é preciso que seus lados A, B e C obedeçam à seguinte regra:
          A < (B + C), B < (A + C) e C < (A + B).
Escreva um programa C que leia os três lados de um triângulo e verifique se tais valores
realmente formam um triângulo. Se o teste for satisfatório, informe se o triângulo é
isósceles (dois lados iguais e um diferente), escaleno (todos os lados diferentes) ou
equilátero (todos os lados iguais).*/

#include <stdio.h>
int main (){
    float a, b, c;
    
    printf("digite o valor de A: ");
    scanf("%f",&a);
    printf("digite o valor de B: ");
    scanf("%f",&b);
    printf("digite o valor de C: ");
    scanf("%f",&c);
    
    if ( a < (b + c) && b < (a + c) && c < (a + b) ){
    	if(a == b && a != c || b == c && a != c || c == a && a != b){//isosceles
    		printf("\ne um triangulo isosceles");
		}
		else if(a == b && a == c && b == c){//equilatero
    		printf("\ne um triangulo equilatero");
		}
		else {//escaleno
    		printf("\ne um triangulo escaleno");
	    }
	
    }
	else{
		printf("\nesses valores de 'A', 'B' e 'C' nao formam um triangulo");
	}
	
	return 0;
}
/*Implemente um código para aprovar empréstimo bancário. O código deve pedir 4
informações: valor do empréstimo, número de parcelas, salário do solicitante e a idade.
Aprovar empréstimo caso o valor das parcelas representem no máximo 30% do salário
do solicitante e se a idade for menor que 75 anos*/

#include <stdio.h>
int main(){
	float emprestimo, parcelas, valPar, salario, idade;
	
	printf("**emprestimo**\ndigite o valor do emprestimo: ");
	scanf("%f",&emprestimo);
	printf("em quantas parcelas: ");
	scanf("%f",&parcelas);
	printf("qual seu salario mensal: ");
	scanf("%f",&salario);
	printf("qual a sua idade: ");
	scanf("%f",&idade);
	
	if ((emprestimo/parcelas) <= (salario*0.3) && idade < 75){
		valPar = emprestimo / parcelas;
		printf("\n**emprestimo aprovado**\nvalor: %.2fR$\nparcelas: %.0fx de %.2fR$", emprestimo, parcelas, valPar);
	}
	else if((emprestimo/parcelas) > (salario*0.3) && idade > 75){
		printf("**emprestimo negado**");
	}
	else {
		printf("**erro inesperado**\nreinicie o algoritmo e tente novamente");
	}
		
	return 0;
}

/*Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas
começaram a fazer pesquisas para descobrir um plano de saúde, não muito caro. Um
vendedor de um plano de saúde apresentou a tabela a seguir. Faça um algoritmo que
receba a idade e o nome da pessoa, mostre a idade, o nome e também mostre o valor
que ela deverá pagar, segundo a seguinte tabela:

ate 10 anos r$30,00
acima de 10 ate 29 anos R$ 60,00
acima de 29 ate 45 anos r$ 120,00
acima de 45 ate 59 anos R$ 150,00
acima de 59 anos R$ 300,00
*/

#include <stdio.h>
int main (){
	int idade;
	char nome [50];
	
	printf("digite seu nome: ");
	scanf("%s", &nome);
	printf("digite su a idade: ");
	scanf("%d",&idade);
	
	if (idade <= 10){//30
	    printf("**plano de saude**\nnome do solicitanate: %s\nidade do solicitante: %d\nvalor mensal a pagar: 30,00R$",nome,idade);
	}
	else if (idade > 10 && idade <= 29){//60
	    printf("**plano de saude**\nnome do solicitanate: %s\nidade do solicitante: %d\nvalor mensal a pagar: 60,00R$",nome,idade);

	}
	else if (idade > 29 && idade <= 45){//120
	    printf("**plano de saude**\nnome do solicitanate: %s\nidade do solicitante: %d\nvalor mensal a pagar: 120,00R$",nome,idade);
	}
	else if (idade > 45 && idade <= 59){//150
	    printf("**plano de saude**\nnome do solicitanate: %s\nidade do solicitante: %d\nvalor mensal a pagar: 150,00R$",nome,idade);
	}
	else if (idade > 59){//300
	    printf("**plano de saude**\nnome do solicitanate: %s\nidade do solicitante: %d\nvalor mensal a pagar: 300,00R$",nome,idade);
	}
	else{
		printf("**erro inesperado**\nreinicie o algotitmo e tente novamente");
	}
	
	return 0;
}
