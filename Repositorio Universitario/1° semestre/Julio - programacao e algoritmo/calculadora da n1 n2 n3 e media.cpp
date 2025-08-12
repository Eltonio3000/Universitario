#include<stdio.h>
#include <string.h>
int main (){
	float prova, test1, test2, test3, totalTest, notaFinal, n1, n2, n3, media;
	char nivel[5];
	printf("qual o nivel de nota voce quer calcular(N1 N2 N3 ou MEDIA)? ");
	scanf("%s",&nivel);
	//n1
	if (  strcmp(nivel, "n1")== 0 ){
	printf("digite a nota da prova: ");
	scanf("%f",&prova);
	printf("digite a nota do teste 1: ");
	scanf("%f",&test1);
	printf("digite a nota do teste 2: ");
	scanf("%f",&test2);
	printf("digite a nota do teste 3: ");
	scanf("%f",&test3);
	totalTest = (((test1 + test2 +test3)/3)*2)/10;
	notaFinal = prova + totalTest;
	printf("a nota da N1 e: %.2f",notaFinal);
}
    //n2
    else if(  strcmp(nivel, "n2")== 0 ){
    		printf("digite a nota da prova: ");
	scanf("%f",&prova);
	printf("digite a nota do teste 1: ");
	scanf("%f",&test1);
	printf("digite a nota do teste 2: ");
	scanf("%f",&test2);
	printf("digite a nota do teste 3: ");
	scanf("%f",&test3);
	totalTest = (((test1 + test2 +test3)/3)*2)/10;
	notaFinal = prova + totalTest;
	printf("a nota da N2 e: %.2f",notaFinal);
	}
	//n3
	else if(  strcmp(nivel, "n3")==0 ){
	  printf("digite a nota da prova: ");
	scanf("%f",&prova);
	printf("digite a nota do teste 1: ");
	scanf("%f",&test1);
	printf("digite a nota do teste 2: ");
	scanf("%f",&test2);
	printf("digite a nota do teste 3: ");
	scanf("%f",&test3);
	totalTest = (((test1 + test2 +test3)/3)*2)/10;
	notaFinal = prova + totalTest;
	printf("a nota da N3 e: %.2f",notaFinal);
	}
	//media
	else if (  strcmp(nivel, "media")==0 ){
	  printf("digite a nota da n1: ");
	scanf("%f",&n1);
	printf("digite a nota da n2: ");
	scanf("%f",&n2);
	printf("digite a nota da n3: ");
	scanf("%f",&n3);
	media = (n1 + n2 + n3)/ 3;
	printf("a nota da medida e: %.2f",media);
	if (media >= 6.0){
		printf("\nvoce passou PARABENS");
	}
	else {
		printf("\nvoce reprovou...");
	}
	}
	
	return 0;
}

















