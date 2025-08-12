/*Questão 1 - Escreva um algoritmo que leia três valores inteiros e
diferentes e mostre-os em ordem decrescente.*/

#include <stdio.h>

int main() {
	int n1, n2, n3;
	
	printf("Digite um valor: ");
	scanf("%d", &n1);
	
	printf("Digite um valor: ");
	scanf("%d", &n2);
	
	printf("Digite um valor: ");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3 && n2 > n3) {
		printf("Os valores em ordem decrescente sao: %d, %d, %d", n1, n2, n3);
	} else if (n1 > n2 && n1 > n3 && n3> n2) {
		printf("Os valores em ordem decrescente sao: %d, %d, %d", n1, n3, n2);
	} else if (n2 > n1 && n2 > n3 && n1 > n3) {
		printf("Os valores em ordem decrescente sao: %d, %d, %d", n2, n1, n3);
	} else if (n2 > n3 && n2 > n1 && n3 > n1) {
		printf("Os valores em ordem decrescente sao: %d, %d, %d", n2, n3, n1);
	} else if (n3 > n1 && n3 > n2 && n1 > n2) {
		printf("Os valores em ordem decrescente sao: %d, %d, %d", n3, n1, n2);
	} else if (n3 > n2 && n3 > n1 && n2 > n1) {
		printf("Os valores em ordem decrescente sao: %d, %d, %d", n3, n2, n1);
	} else {
		printf("Erro inesperado! Reinicie a aplicaçao!!");
	}
	
	return 0;
}

/*Questão 2 - O IMC – Índice de Massa Corporal é um critério da Organização
Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa
adulta. A fórmula é

IMC = peso / (altura) ²

Elabore um algoritmo que leia o peso e a altura de um adulto e
mostre sua condição de acordo com a tabela abaixo.

- Condição Abaixo de 18,5 Abaixo do peso
- Entre 18,5 e 25 Peso normal
- Entre 25 e 30 Acima do peso
- Acima de 30 obeso*/

#include <stdio.h>

int main() {
    float peso, altura, imc;
    
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    
    printf("Digite seu peso (em quilogramas): ");
    scanf("%f", &peso);
    
    imc = peso / (altura * altura);
    
    if (imc < 18.5) {
        printf("Seu IMC é: %.2f, você está abaixo do peso\n", imc);
    } else if (imc >= 18.5 && imc < 25) {
        printf("Seu IMC é: %.2f, você está no peso ideal\n", imc);
    } else if (imc >= 25 && imc < 30) {
        printf("Seu IMC é: %.2f, você está acima do peso\n", imc);
    } else {
        printf("Seu IMC é: %.2f, você é obeso\n", imc);
    }
    
    return 0;
}

