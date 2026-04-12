//questao 1

#include <stdio.h>
int main (){
	int par, i=0, num;
	
	printf("digite apenas valores positivos.");
	for( ; ; i++ ){
		printf("\ndigite um numero: ");
		scanf("%d",&num);
		
		if(num < 0){
			break;
			
		}
		
		//par
		else if( num % 2 == 0 ){
			par++;
		}
	    	
    }
			
	printf("\na quantidade de numeros positivos digitados e: %d\ne desses numeros %d sao pares.",i,par);
	
	return 0;
}

//questao 2

#include <stdio.h>
int main (){
	int voto=0, votoUm=0, votoDois=0, votoTres=0, votoBranco=0, nulo=0, eleitores=0, i=0;
	
	printf("qual a quantidade de eleitores: ");
	scanf("%d",&eleitores);
	
	//validacao
	for( ; eleitores <= 0 ; ){
	    if(eleitores <= 0 ){
		    printf("\ndeve se ter pelomenos 1 eleitor\nreinicie e tente novamente.");
		    break;
		    i++;
	    }
    }
	printf("\nvote...\n1 - para canditado 1\n2 - para candidato 2\n3 - para candidato 3\n0- para nulo");
	
	
	if(eleitores > 0 ){
		
	    for( ; eleitores != 0 ; eleitores --){
	    	if(i != 0){
			    break;
		    }
	    	printf("\nseu voto: ");
	    	scanf("%d",&voto);
	    	
	    	//nulo
	    	if(voto == 0){
	    		nulo++;
			}
			//candidato um
			else if(voto == 1){
				votoUm++;
			}
			//candidato dois
			else if(voto == 2){
				votoDois++;
			}
			//candidato tres
			else if(voto == 3){
				votoTres++;
			}
	    			
		}
	
	
	}
	
	printf("\n\ncandidato um: %d\ncandidato dois: %d\ncandidato tres: %d\nnulo: %d",votoUm,votoDois,votoTres,nulo);
	
	
	return 0;
}

//questao 3

#include<stdio.h>
int main(){
	int num, regraUm, regraDois=0, regraTres, regraQuatro;
	
	printf("digite valores dentre essas regras:\nentre 0 - 10\nentre 11 - 20\nentre 21 - 30\nacima de 30.");
	
	for( int i=0 ; i < 10; i++ ){
	    printf("\ndigite um valor: ");
	    scanf("%d",&num);
	
	    //erro
	    if( num < 0){
		    printf("o valor digitado nao pertente a nenhuma regra.");
		    break;
		
	    }
	    //0 - 10
	    else if( num >= 0 && num <= 10){
	    	regraUm++;
	    }
	    //11 - 20
	    else if( num >= 11 && num <= 20){
	    	regraDois++;
	    	
		}
		//21 - 30
		else if( num >= 21 && num <= 30){
			regraTres++;
			
		}
		//maior que 30
		else if( num > 30){
			regraQuatro++;
			
		}
		
	}
	
	printf("\n\nforam digitados...\nentre 0 - 10: %d\nentre 11 - 20: %d\nentre 21 - 30: %d\nacima de 30: %d",regraUm,regraDois,regraTres,regraQuatro);
	
	return 0;
}
