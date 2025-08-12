#include<stdio.h>
int main (){
	float n1, n2, n3, media;
	char conceito;
	
	printf("digite a primeira nota: ");
	scanf("%f",&n1);
	printf("digite a segunda nota: ");
	scanf("%f",&n2);
	printf("digite a terceira nota: ");
	scanf("%f",&n3);
	
	media = (n1 + n2 + n3)/ 3;
	
	if(media > 9){
		conceito = 'A';
		printf("a media e: %.2f\no conceito e: %c",media ,conceito);
	}
	
	else if(media >= 8 && media <= 9 ){
		conceito = 'B';
		printf("a media e: %.2f\no conceito e: %c",media ,conceito);
	}
	else if(media >= 6 && media <= 8){
		conceito = 'C';
		printf("a media e: %.2f\no conceito e: %c",media ,conceito);
	}
	else if(media < 6 ){
		conceito = 'D';
		printf("a media e: %.2f\no conceito e: %c\n**REPROVADO**",media ,conceito);
	}
	
	return 0;
}
