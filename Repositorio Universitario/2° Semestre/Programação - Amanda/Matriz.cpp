/*1.Desenvolva um algoritmo que preencha uma matriz numérica de inteiros de dimensão 3x3. 
Após preencher toda matriz, o usuário deve inserir uma chave de busca X. Caso exista algum 
número igual a X, dentro da matriz, o algoritmo deve mostrar, na tela, os índices da linha 
e da coluna da posição na qual X foi encontrado pela primeira vez. Caso contrário, o algoritmo 
deve se encerrar com uma única mensagem, dizendo "Chave não encontrada".
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int matriz [3][3],i, j,  busca;
    bool  validacao = false;
    
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 100;
        }
    }    

    printf("Insira uma chave para buscar na matriz 3x3: ");
    scanf("%d", &busca);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (busca == matriz[i][j]) {
                validacao = true;
                printf("a chave de busca foi encontrada na linha: %d, e na coluna %d", i,j);
            }
        }
    }
    if(validacao == false) {
       printf("Chave nao encontrada"); 
    } 

    return 0;
}

/*
2.Elabore um programa que preencha uma matriz 3 x 4 com números inteiros, calcule e mostre quantos 
elementos dessa matriz são maiores que 30 e, em seguida, monte uma segunda matriz com os elementos 
diferentes de 30. No lugar do número 30, da segunda matriz, coloque o número zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz [3][4],i, j,  busca, conttrinta;
    int matriz2 [3][4];
    bool  validacao = false;
    
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 100;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(matriz[i][j]>30){
            	conttrinta++;
			}
			if(matriz[i][j]==30){
				matriz2[i][j]=0;
			}
			else{
				matriz2[i][j]=matriz[i][j];
			}
        }
    }
	
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d",matriz2[i][j]);
        }
        printf("\n");
    }
	    
}

