/*explicacão do julio*/

#include<stdio.h>
int main (){
	for (int i=0; i <= 10; i++){
		printf("%3d",i);
		
	}
	
	return 0;
}

/*imprima os numeros divisiveis por 3 de 1 a 100*/

#include<stdio.h>
int main (){
	 for ( int cont=1; cont <= 100; cont++ ){
			 	if (cont % 3 == 0){
			 		printf("3 e divisivel por %d\n",cont);
			 		
				 }
			}
	
	return 0;
}

/*digite um valor ate que seja digitado 0,informe quantos pares e quantos impares fpram digitados*/

#include<stdio.h>
int main (){
	int num=1 ,contI=0 ,contP=0 ,i=1 ,nulo;
	
	for ( ;num>0; i++){
	    printf("%d) valor: ",i);
	    scanf("%d",&num);
	    if (num == 0){
		    nulo++;
		    
	    }
	    else if (num % 2 == 0){
	    	contP++;
	    	
		}
	    else{
	     	contI++;
	    	
		}
    }
    i--;
    printf("foram digitados %d valores\ndesses valores %d sao pares\ne %d sao impares",i,contP,contI);
	
	return 0;
}

/*crie um programa que peca 10 numeros inteiro e apresente a media desses valores*/

#include<stdio.h>
int main (){
	int media;
	
	for (int i=0; i <= 10; i++){
		printf("%3d",i);
		media = media + i;
				
	}
	
	media = media / 10;
	printf("\na media da lista a cima e: %d",media);
	
	return 0;
}
