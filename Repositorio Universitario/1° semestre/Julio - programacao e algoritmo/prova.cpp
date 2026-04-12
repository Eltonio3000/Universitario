//questao 3

#include <stdio.h>
int main (){
	int idade, tempoCont;
	float salarioCont, salarioMin, salarioFinal;
	
	printf("digite a sua idade: ");
	scanf("%d",&idade);
	printf("digite o tempo de contribuicao(em anos): ");
	scanf("%d",&tempoCont);
	printf("digite o salario recebido durante a contribuicao: ");
	scanf("%f",&salarioCont);
	printf("digite o salario minimo atual: ");
	scanf("%f",&salarioMin);
	
    //apto
    if (idade >= 65 && tempoCont >= 30 || idade >= 60 && tempoCont >= 25){
    	if(salarioCont >= (salarioMin * 3)){//75
    		salarioFinal = salarioMin + (salarioMin * 0.75);
    		printf("\n\nvoce esta **apto**\ne o valor de sua aposentadoria e: %.2fR$",salarioFinal);
    		
		}
		else if(salarioCont >= (salarioMin * 2) && salarioCont <= (salarioMin * 2.9)){//50
    		salarioFinal = salarioMin + (salarioMin * 0.5);
    		printf("\n\nvoce esta **apto**\ne o valor de sua aposentadoria e: %.2fR$",salarioFinal);
    		
        }
		else if( salarioCont < (salarioMin * 2)){//25
    		salarioFinal = salarioMin + (salarioMin * 0.25);
    		printf("\n\nvoce esta **apto**\ne o valor de sua aposentadoria e: %.2fR$",salarioFinal);
    				
        }
	}
	//nao apto
	else if (idade < 65 && tempoCont < 30 || idade < 60 && tempoCont < 25){
		printf("\n\nvoce esta **nao apto** para aposentadoria");
	}
	else{
		printf("\n\nerro reinicie e tente novamente com novos dados");
	}
	
	return 0;
}
