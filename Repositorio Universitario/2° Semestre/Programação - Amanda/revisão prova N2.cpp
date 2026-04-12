/*
dia mais quente a oartir da media diaria
temperatura mais fria dentre as horas semanal
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int temperatura[7][24], i, j;
	int temp_mais_fria=0, dia_mais_quente=0, temp_dia_mais_quente, auxiliar=0;
	int horas_semanais=0;
	float media_diaria=0;
	bool boolean=true;
	
	srand(time(NULL));
	
	for( i=0 ; i < 7 ; i++ ){
		for( j=0 ; j < 24 ; j++ ){
			
			temperatura[i][j] = rand() % 32 ;
			printf("%-3d",temperatura[i][j]);
			
			media_diaria += temperatura[i][j];
			
		}
		
		printf("\n\n");
		media_diaria = media_diaria / 24;
		
		if( boolean==true ){
			
			temp_dia_mais_quente = media_diaria;
			
			if( media_diaria > temp_dia_mais_quente ){
				dia_mais_quente = i;	
			}
			boolean=false;
		}
		
		if( media_diaria > temp_dia_mais_quente ){
			dia_mais_quente = i;	
		}
		
		media_diaria = 0;
	}
	
	horas_semanais = 24 * 7;
	temp_mais_fria = temperatura[0][0];
	
	for( i=0 ; i < 7 ; i++ ){
		for( j=0 ; j< 24 ; j++ ){
			
			if( temperatura[i][j] < temp_mais_fria ){
				
				temp_mais_fria = temperatura[i][j];
				
			}
			
		}
	}
		
	printf("dia mais quente %d\nhora mais fria da semana %dC",dia_mais_quente+1 ,temp_mais_fria);

	
	return 0;
}
