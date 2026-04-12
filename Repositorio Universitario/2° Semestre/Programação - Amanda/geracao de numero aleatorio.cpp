#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int vetor[20];
	
    // Inicializar o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Gerar um número aleatório entre 1 e 100
    for( int i=0 ; i<20 ; i++ ){
    int vetor[i] = rand() % 100;
	}
    // Imprimir o número aleatório gerado
    for( int i=0 ; i<20 ; i++ ){
    printf("Número aleatório gerado: %d\n", vetor[i]);
	}

    return 0;
}

