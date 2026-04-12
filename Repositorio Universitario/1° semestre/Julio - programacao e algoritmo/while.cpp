/*crie um programa que peca 10 numeros inteiros e apresente a media desses numeros*/

#include <stdio.h>
int main(){
	int num, cont=0, total, media;
	 printf("digite 10 numeros\n");
	 while(cont < 10){
	 	printf("digite um valor: ");
	 	scanf("%d",&num);
	 	
	 	total=total+num;
	 	cont++;
	 	
	 }
	 media = total/10;
	 printf("a media desses 10 numeros e: %d",media);
	
	return 0;
}

/*refaca o exercicio anterior e apresente o menor numero*/

#include <stdio.h>
int main(){
	int num, cont=0, total, menor=99999999999;
	 printf("digite 10 numeros\n");
	 while(cont < 10){
	 	printf("digite um valor: ");
	 	scanf("%d",&num);
	 	
	 	if (num < menor){
	 		menor = num;
	 		
		 }
	 	cont++;
	 	
	 }

	 printf("o menor numero digitado e: %d",menor);
	
	return 0;
}
