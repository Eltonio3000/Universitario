#include <stdio.h>
#include <string.h>
int main (){
	float altura, pesoIdeal;
	char sexo[50];
    printf("digite sua altura: ");
    scanf("%f",&altura);
	printf("qual o seu sexo: ");
    scanf("%s",&sexo);
    //masculino
    if( strcmp(sexo, "masculino") == 0 || strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "MASCULINO") == 0) {
    	pesoIdeal = (72.7 * altura)- 58;
    	printf("o peso ideal para um homem que tenha %.2f de altura e: %.2f", altura, pesoIdeal);
	}
	//feminino
	else if(strcmp(sexo, "feminino") == 0 || strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "FEMININO") == 0) {
		pesoIdeal = (62.1 * altura)- 44.7;
		printf("o peso ideal para uma mulher que tenha %.2f de altura e: %.2f", altura, pesoIdeal);
	}
	//invalido
	else{
		printf("sexo invalido repita o processo e coloque um sexo valido (masculino ou feminino)");
	}
	return 0;
}
