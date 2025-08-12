/*Solicite que o usuário informe um valor e em seguida mostre o nome do mês correspondente, valide o valor informado.*/

#include <stdio.h>

int main(){
	int mes;
	printf("digite um numero (1-12): ");
	scanf("%d",& mes);
	switch (mes) {
	case 1:
		printf("o mes %d e janeiro", mes);
		break;
	
	case 2:
		printf("o mes %d e fevereiro", mes);
		break;
	
	case 3:
		printf("o mes %d e marco", mes);
		break;
	
	case 4:
		printf("o mes %d e abril", mes);
		break;
	
	case 5:
		printf("o mes %d e maio", mes);
		break;
	
	case 6:
		printf("o mes %d e junho", mes);
		break;
	
	case 7:
		printf("o mes %d e julho", mes);
		break;
	
	case 8:
		printf("o mes %d e agosto", mes);
		break;
	case 9:
		printf("o mes %d e setembro", mes);
		break;
	
	case 10:
		printf("o mes %d e outubro", mes);
		break;
	
	case 11:
		printf("o mes %d e novembro", mes);
		break;
	
	case 12:
		printf("o mes %d e dezembro", mes);
		break;
	
	default:
		printf("%d, nao corresponde a um mes", mes);
		break;
    }
	
	return 0;
}

/*Crie um algoritmo que permite o usuário fazer cálculos matemáticos, no qual ele deve escolher entre + para SOMA – para 
SUBTRAÇÃO * para MULTIPLICAÇÃO e / para DIVISÃO, depois solicite que seja digitado dois valores para realizar o cálculo. 
Imprimir o resultado da operação*/

#include <stdio.h>

int main() {
	char opcao;
    float num1, num2, resultado;
    
    printf("Digite o tipo de operacao voce que voce quer realizar(+, -, *, /): ");
    scanf("%c", &opcao);
    
    switch (opcao){
	case'+':
		printf("para realizar uma soma...\ndigite um numero: ");
		scanf("%f",&num1);
		printf("digite outro numero: ");
		scanf("%f",&num2);
		resultado = num1 + num2;
		printf("o resultado da operacao e: %.2f",resultado);
	break;
	
	case'-':
		printf("para realizar uma subtracao...\ndigite um numero: ");
		scanf("%f",&num1);
		printf("digite outro numero: ");
		scanf("%f",&num2);
		resultado = num1 - num2;
		printf("o resultado da operacao e: %.2f",resultado);
	break;
	
	case'*':
		printf("para realizar uma multiplicacao...\ndigite um numero: ");
		scanf("%f",&num1);
		printf("digite outro numero: ");
		scanf("%f",&num2);
		resultado = num1 * num2;
		printf("o resultado da operacao e: %.2f",resultado);
	break;
	
	case'/':
		printf("para realizar uma divisao...\ndigite um numero: ");
		scanf("%f",&num1);
		printf("digite outro numero: ");
		scanf("%f",&num2);
		resultado = num1 / num2;
		printf("o resultado da operacao e: %.2f",resultado);
	break;
	default:
		printf("erro\no caracter nao e reconhecido como um tipo de operacao");
		break;
	}
    
    return 0;
}

/*Solicite que o usuário digite uma letra e verifique se é vogal ou consoante. Imprimir o resultado e mostrar a letra digitada.*/
#include <stdio.h>
int main (){
	char letra;
	
	printf("digite uma letra de 'a' a 'z': ");
	scanf("%c",&letra);
	switch(letra){
		case 'a':
			printf("a letra '%c' e uma vogal", letra);
		case 'e':
			printf("a letra '%c' e uma vogal", letra);
			break;
		case 'i':
			printf("a letra '%c' e uma vogal", letra);
			break;
		case 'o':
			printf("a letra '%c' e uma vogal", letra);
			break;
		case 'u':
			printf("a letra '%c' e uma vogal", letra);
			break;
		default:
		    printf("a letra '%c' e uma consoante", letra);
		    break;
	}
	return 0;
}
