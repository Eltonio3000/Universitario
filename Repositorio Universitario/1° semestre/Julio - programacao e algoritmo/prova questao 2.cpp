//questao 2

#include <stdio.h>

int main (){
	float valorVendas, salarioFinal, comissao;
	
	printf("digite o valor total em vendas realizadas pelo funcionario: ");
	scanf("%f",&valorVendas);
    
    if (valorVendas >= 30000){
    	comissao = valorVendas * 0.1;
    	salarioFinal = comissao + 2000;
    	printf("\nsalario fixo de 2000R$\nsalario final %.2fR$ com %.2fR$ de comissao", salarioFinal, comissao);		
    	
	}
	else if(valorVendas < 30000 && valorVendas > 0){
        comissao = valorVendas * 0.05;
    	salarioFinal = comissao + 2000;
    	printf("\nsalario fixo de 2000R$\nsalario final %.2fR$ com %.2fR$ de comissao", salarioFinal, comissao);		
	}
	else{
		printf("\no salario desse funcionario e 2000 sem comissao de vendas");
	}
	
	return 0;
}
