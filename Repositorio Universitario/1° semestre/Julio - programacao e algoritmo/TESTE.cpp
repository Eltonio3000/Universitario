#include <stdio.h>
int main (){
	int num, resultado, i=1;
	
	printf("para calcular um fatoral\ndigite um numero: ");
	scanf("%d",&num);
	i = num;
	resultado = num;
	i--;
	
	for ( ; i != 0 ; i--){
		resultado = resultado * i;
		
	}
	printf("%d!= %d",num,resultado);
	
	return 0;
}
