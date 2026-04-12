/*
1.Crie um programa que leia uma matriz de inteiros de tamanho N x M (onde N e M são fornecidos pelo usuário) e execute as seguintes operações:
Calcule e exiba a soma de todos os elementos da matriz.
Encontre e exiba o maior elemento da matriz e sua posição (linha e coluna).
Crie uma nova matriz que contenha apenas os elementos pares da matriz original.
Exiba essa nova matriz.
*/

#include<stdio.h>
#include<stdbool.h>

#define SIZE 100

int main(){
	int matrizBase[SIZE][SIZE];
	int matrizPar[SIZE][SIZE];
	int elementos=0, soma=0;
	int maiorNumero=0, posicaoMaior[2];
	int n=1, m=1, i=0, j=0;
	
	printf("define a linha e a coluna respectivamente.\n: ");
	scanf("%d %d" ,&n ,&m);
	
	printf("de valores aos elementos da sua matriz...\n");
			
	for( int ii=0, jj=0,i=0 ; i < n ;i++){
			for(int j=0 ; j < m ; j++ ){
			printf(": ");
			scanf("%d",&elementos);
			matrizBase[i][j] = elementos;
			
			soma = matrizBase[i][j] + soma;
			
			if( i == 0 && j == 0 ){
				maiorNumero = matrizBase[i][j];
				posicaoMaior[0] = i + 1;
				posicaoMaior[1] = j + 1;
			}
			if( matrizBase[i][j] > maiorNumero ){
				maiorNumero = matrizBase[i][j];
				posicaoMaior[0] = i + 1;
				posicaoMaior[1] = j + 1;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrizBase[i][j] % 2 == 0) {
                int ii = 0, jj = 0;
                bool found = false;

                while (ii < n && !found) {
                    jj = 0;
                    while (jj < m) {
                        if (matrizPar[ii][jj] == 0) {
                            matrizPar[ii][jj] = matrizBase[i][j];
                            found = true;
                            break;
                        }
                        jj++;
                    }
                    ii++;
                }
            }
        }
    }
	
	printf("\n");
		for( int i=0; i<n ;i++){
			for(int j=0 ; j<m ; j++ ){
				printf("%d",matrizPar[i][j]);
			}
			printf("\n");
		} 
		printf("\nsoma: %d\nmaior numero: %d\nlinha %d, coluna %d",soma,maiorNumero,posicaoMaior[0],posicaoMaior[1]);
		
	
	return 0;
}

/*
2. Elabore um programa que leia uma matriz de strings de tamanho N x M (onde N e M são fornecidos pelo usuário). O programa deve realizar as seguintes tarefas:
Conte e exiba quantas strings na matriz contêm a letra 'a'.
Crie uma nova matriz que contenha apenas as strings que têm mais de 5 caracteres. 
Exiba essa nova matriz.
Exiba as strings da matriz original na ordem inversa (da última para a primeira linha).
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 100

int main() {
    char matrizA[SIZE][SIZE];
    char matrizB[SIZE][SIZE];
    char caractere = 'a';
    int count = 0;
    int n = 0, m = 0;
    int bIndex = 0; // Índice para matrizB

    printf("Defina a linha e a coluna respectivamente (N M): ");
    scanf("%d %d", &n, &m);

    printf("Digite as strings:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("String [%d][%d]: ", i, j);
            scanf("%s", matrizA[i]); // Corrigido para ler corretamente a string

            // Verifica se a string contém a letra 'a'
            if (strchr(matrizA[i], caractere) != NULL) {
                count++;
            }

            // Verifica se a string tem mais de 5 caracteres
            if (strlen(matrizA[i]) > 5) {
                strcpy(matrizB[bIndex], matrizA[i]); // Copia a string para matrizB
                bIndex++; // Incrementa o índice da matrizB
            }
        }
    }

    // Exibe a matrizB (strings com mais de 5 caracteres)
    printf("\nStrings com mais de 5 caracteres:\n");
    for (int i = 0; i < bIndex; i++) {
        printf("| %s ", matrizB[i]);
    }
    printf("\n");

    // Exibe a matrizA na ordem inversa
    printf("\nMatriz original na ordem inversa:\n");
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            printf("| %s ", matrizA[i]);
        }
        printf("\n");
    }

    printf("Quantidade de strings que tem a letra 'a': %d\n", count);

    return 0;
}


