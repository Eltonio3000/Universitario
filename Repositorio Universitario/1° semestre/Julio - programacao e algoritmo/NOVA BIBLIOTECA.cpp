#include <stdio.h>
#include <math.h>

int main(){
	double raiz, areBaixo, areCima, potencia ,sen ,cos;
	float num1, num2;
	int caminho;
	
	printf("selecione uma das operacoes abaixo\n\n1- raiz quadrada\n2- aredondar para baixo\n3- aredondar para cima\n4- potenciacao\n5- seno\n6- coseno\n\n: ");
	scanf("%f",&caminho);
	switch (caminho){
		case 1: //raiz
		    
			printf("**raiz quadrada**\ndigite o numero da base da raiz: ");
			scanf("%f",&num1);
			
			raiz = sqrt(45);
			
			printf("o resultado dessa raiz e: %.2f",raiz);
			
		break;
		case 2://areBaixo
			
		break;
		case 3://areCima
			
		break;
		case 4://potencia
			
		break;
		case 5://seno
			
		break;
		case 6://cosseno
			
		break;
		default:
		printf("**erro**\nreinicie e selecione um dos caminhos acima");
		break;
	}
	
	return 0;
}
