/*Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito.
 Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito). 
 Também testar se saldo atual for maior ou igual a zero escrever a mensagem 'Saldo Positivo', 
 senão escrever a mensagem 'Saldo Negativo'.  
*/

#include <stdio.h>
int main (){
	float saldo, debito, credito, saldoAtual;
	int conta;
	
	printf("digite o numero da conta: ");
	scanf("%d",&conta);
	printf("digite o saldo da conta: ");
	scanf("%f",&saldo);
    printf("digite o debito da conta: ");
	scanf("%f",&debito);
	printf("digite o credito da conta: ");
	scanf("%f",&credito);
	
	saldoAtual = saldo - debito + credito;
	if (saldoAtual < 0){
		printf("\nseu saldo atual: %.2f\nsaldo negativo",saldoAtual);
	}
	else{
		printf("\nseu saldo atual: %.2f\nsaldo positivo.",saldoAtual);
	}
	
	return 0;
}
