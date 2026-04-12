/*faca um algoritmo que verifique se uma palavra e um palindromo utilizando a biblioteca string*/

#include<stdio.h>
#include<string.h>
int main (){
	char palavra[30];
	int i, j, resposta;
	char palindromo[30];
	
	printf("digite o suposto palindromo: ");
	scanf("%s",& palavra);
	
	i=strlen(palavra);
	i--;
	for(int j=0; i >= 0; i--,j++){
		palindromo[j]=palavra[i];
	}
	
	
	if((strcmp(palavra, palindromo)) == 0){
		printf("%s e um palindromo.",palavra);
	}
	else {
		printf("%s, nao e um palindromo.",palavra);
	}
	
	return 0;
}
