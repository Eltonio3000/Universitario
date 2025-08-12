#include<stdio.h>
int main (){
	float numCarro, totalVendas, salarioFinal, salarioFixo, comissaoFixa, comissao1, comissao2;
	printf("digite o valor dos salario fixo: ");
	scanf("%f",&salarioFixo);
	printf("qual o numero de carros vendidos: ");
	scanf("%f",&numCarro);
	printf("digite o valor total das vendas dos funcionarios: ");
	scanf("%f",&totalVendas);
	printf("digite o valor da comissao fixa: ");
	scanf("%f",&comissaoFixa);
	comissao1 = (totalVendas * 5)/100;
	comissao2 = comissaoFixa * numCarro;
	salarioFinal =  salarioFixo + comissao1 + comissao2;
	
	printf("\no salario final desse funcionario e: %.2f",salarioFinal);
	
	return 0;
}
