//questao 1
#include <stdio.h>

int main (){
	float num1, num2, num3, num4, soma;
	
	printf("digite um numero: ");
	scanf("%f",&num1);
	printf("digite um numero: ");
	scanf("%f",&num2);
	printf("digite um numero: ");
	scanf("%f",&num3);
	printf("digite um numero: ");
	scanf("%f",&num4);
	
	if (num1 < num2 && num1 < num3 && num1 < num4){
		soma = num2 + num3 + num4;
		printf("os tres maiores numeros digitados e a soma deles sao respectivos:\n%.2f\n%.2f\n%.2f\nsoma: %.2f",num2,num3,num4,soma); 
		
	}
	else if (num2 < num1 && num2 < num3 && num2 < num4){
		soma = num1 + num3 + num4;
		printf("os tres maiores numeros digitados e a soma deles sao respectivos:\n%.2f\n%.2f\n%.2f\nsoma: %.2f",num1,num3,num4,soma); 
		
	}
	else if (num3 < num1 && num3 < num2 && num3 < num4){
		soma = num1 + num2 + num4;
		printf("os tres maiores numeros digitados e a soma deles sao respectivos:\n%.2f\n%.2f\n%.2f\nsoma: %.2f",num1,num2,num4,soma);
		
	}
	else if (num4 < num1 && num4 < num2 && num4 < num3){
		soma = num1 + num2 + num3;
		printf("os tres maiores numeros digitados e a soma deles sao respectivos:\n%.2f\n%.2f\n%.2f\nsoma: %.2f",num1,num2,num3,soma);
		
	}
	
	return 0;
}
