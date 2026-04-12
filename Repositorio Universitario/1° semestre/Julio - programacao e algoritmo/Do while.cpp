/*Imprimir os números no intervalo [10,20] (incluindo os valores 10
e 20 no intervalo)*/

#include <stdio.h>
int main (){
	int cont=10;
	
	do{
		printf("%3d",cont);
		cont++;
	} while (cont < 21);
	
	return 0;
}

/*Escreva um algoritmo para ler 10 números e ao final da leitura
escrever a soma total dos 10 números lidos e o maior valor
informado.*/

#include <stdio.h>
int main (){
	int num, cont=1, maior=-9999999, soma;
	printf("digite 10 numeros:\n\n");
	
	do{
		printf("digite o %d numero: ",cont);
		scanf("%d",&num);
		if(num > -9999999){
			maior = num;
		}
		
		soma = soma + num;
		
		cont++;
	} while (cont < 11);
	
	printf("\na soma dos numeros digitados e %d\ne o maior numero digitado e %d",soma,maior);
	
	return 0;
}
