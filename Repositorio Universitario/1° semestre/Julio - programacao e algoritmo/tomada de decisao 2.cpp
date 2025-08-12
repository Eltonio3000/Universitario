//Crie um algoritmo que permite o usuário fazer cálculos matemáticos, no qual ele deve escolher
//entre 1 para SOMA 2 para SUBTRAÇÃO 3 para MULTIPLICAÇÃO e 4 para DIVISÃO, depois
//solicite que seja digitado dois valores para realizar o cálculo.

#include <stdio.h>
#include <string.h>
int main (){
	char operacao[15];
	float num1, num2, resul;
	printf("qual operacao voce quer fazer? ");
	scanf("%s",&operacao);
	//soma
	if( strcmp(operacao, "soma")==0){
		printf("digite o primeiro valor: ");
	scanf("%f",&num1);
	printf("digite o segundo valor: ");
	scanf("%f",&num2);
	resul = num1 + num2;
	printf("o resultado da soma e: %.2f",resul);
}
	//subtracao
	else if( strcmp(operacao, "subtracao")==0){
		printf("digite o primeiro valor: ");
	scanf("%f",&num1);
	printf("digite o segundo valor: ");
	scanf("%f",&num2);
	resul = num1 - num2;
	printf("o resultado da subtracao e: %.2f",resul);
}
	//multiplicacao
	else if( strcmp(operacao, "multiplicacao")==0){
		printf("digite o primeiro valor: ");
	scanf("%f",&num1);
	printf("digite o segundo valor: ");
	scanf("%f",&num2);
	resul = num1 * num2;
	printf("o resultado da multiplicacao e: %.2f",resul);
}
	//divisao
	else if( strcmp(operacao, "divisao")==0){
		printf("digite o primeiro valor: ");
	scanf("%f",&num1);
	printf("digite o segundo valor: ");
	scanf("%f",&num2);
	resul = num1 / num2;
	printf("o resultado da divisao e: %.2f",resul);
}
    //error
    else{
    	printf("error\nreinicie e digite uma das sequintes operacoes\n(soma, subtracao, multiplicacao e divisao)\npor favoe digite tudo em minusculo.");
	}
	return 0;
}

//solicite quatro numeros distintos, desenvolva um algoritmo que determine e
//imprima a soma dos 3 menores

#include <stdio.h>

int main(){

float num1, num2, num3, num4, soma;
printf("digite o primeiro numero: ");
scanf("%f",&num1);
printf("digite o segundo numero: ");
scanf("%f",&num2);
printf("digite o terceiro numero: ");
scanf("%f",&num3);
printf("digite o quarto numero: ");
scanf("%f",&num4);

if(num1 > num2 && num1 > num3 && num1 > num4){
	soma = num2 + num3 + num4;
	printf("a soma dos 3 numeros menores e: %.2f", soma);
	
}
if(num2 > num1 && num2 > num3 && num2 > num4){
	soma = num1 + num3 + num4;
	printf("a soma dos 3 numeros menores e: %.2f", soma);
	
}
if(num3 > num1 && num3 > num2 && num3 > num4){
	soma = num1 + num2 + num4;
	printf("a soma dos 3 numeros menores e: %.2f", soma);
	
}
if(num4 > num1 && num4 > num2 && num4 > num3){
	soma = num1 + num2 + num3;
	printf("a soma dos 3 numeros menores e: %.2f", soma);
	
}

   return 0;
}

/*Solicite que 3 usuários digitem seus respectivos salários e também seja informado o valor do
salário mínimo, em seguida considere um aumento para os seguintes fatores:
a. 50% para aqueles que ganham menos do que 3 salários mínimos;
b. 20% para aqueles que ganham mais que 3 salários mínimos até 5 salários mínimos;
c. 10% para aqueles que ganham mais que 5 salários mínimos.
Imprimir o novo salário já com o acréscimo.*/

#include <stdio.h>

int main() {
	float salarioUserA,salarioUserB, salarioUserC, salarioMinimo, salarioAcrescimoA, salarioAcrescimoB, salarioAcrescimoC;
	
	printf("Informe o Salario Minimo: ");
	scanf("%f", &salarioMinimo);
	
	printf("Informe o seu salario atual: ");
	scanf("%f", &salarioUserA);
	
	if (salarioUserA < (salarioMinimo * 3)) {
		salarioAcrescimoA = salarioUserA + (salarioUserA * 0.5);
	} else if (salarioUserA > (salarioMinimo * 3) && salarioUserA < (salarioMinimo * 5)) {
		salarioAcrescimoA = salarioUserA + (salarioUserA * 0.2);
	} else if (salarioUserA > (salarioMinimo * 5)) {
		salarioAcrescimoA = salarioUserA + (salarioUserA * 0.1);
	} else {
		printf("Erro inesperado! Reinicie a aplicaçao!!");
	}
	
	printf("Informe o seu salario atual: ");
	scanf("%f", &salarioUserB);
	
	if (salarioUserB < (salarioMinimo * 3)) {
		salarioAcrescimoB = salarioUserB + (salarioUserB * 0.5);
	} else if (salarioUserB > (salarioMinimo * 3) && salarioUserB < (salarioMinimo * 5)) {
		salarioAcrescimoB = salarioUserB + (salarioUserB * 0.2);
	} else if (salarioUserB > (salarioMinimo * 5)) {
		salarioAcrescimoB = salarioUserB + (salarioUserB * 0.1);
	} else {
		printf("Erro inesperado! Reinicie a aplicaçao!!");
	}
	
	printf("Informe o seu salario atual: ");
	scanf("%f", &salarioUserC);
	
	if (salarioUserC < (salarioMinimo * 3)) {
		salarioAcrescimoC = salarioUserC + (salarioUserC * 0.5);
	} else if (salarioUserC > (salarioMinimo * 3) && salarioUserC < (salarioMinimo * 5)) {
		salarioAcrescimoC = salarioUserC + (salarioUserC * 0.2);
	} else if (salarioUserC > (salarioMinimo * 5)) {
		salarioAcrescimoC = salarioUserC + (salarioUserC * 0.1);
	} else {
		printf("Erro inesperado! Reinicie a aplicaçao!!");
	}
	
	printf("O salario com Acrescimo do\n usuario 1 e: R$%.2f;\n do usuario 2 e: R$%.2f;\n do usuario 3 e: R$%.2f", salarioAcrescimoA, salarioAcrescimoB, salarioAcrescimoC);
	
  return 0;
}

/*Um determinado clube de futebol pretende classificar seus atletas em categorias e para isto ele
contratou um programador para criar um programa que executasse esta tarefa. Para isso o clube
criou uma tabela que continha a faixa etária do atleta e sua categoria.

Faça um programa que solicite a idade e informe em qual categoria se encaixa*/

#include <stdio.h>
int main (){
	float idade;
	printf("digite a idade do atleta: ");
	scanf("%f", &idade);
	//infantil
	if(idade >= 5 && idade <= 10){
		printf("esse atleta e ""infantil"" ");
	}
	
	//juvenil
	else if(idade >= 11 && idade <= 15){
		printf("esse atleta e ""juvenil"" ");
	}
	
	//junior
	else if(idade >= 16 && idade <= 20){
		printf("esse atleta e ""junior"" ");
	}
	
	//profissional
	else if(idade >= 21 && idade <= 25){
		printf("esse atleta e ""profissional"" ");
	}
	
	
	return 0;
}
