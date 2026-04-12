#include <stdio.h>

int main() {
    int matriz[10][10], n;
    int somaTotal = 0, somaBorda = 0, somaAcima = 0, somaAbaixo = 0;

    // Solicitar o tamanho da matriz
    printf("Digite o tamanho da dimensão da matriz entre 1 e 10: ");
    scanf("%d", &n);
    while (n < 1 || n > 10) {
        printf("A dimensão deve ter entre 1 e 10: ");
        scanf("%d", &n);
    }

    // Preencher a matriz e calcular a soma total
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = i + j; // Valor da célula
            somaTotal += matriz[i][j]; // Soma total
        }
    }

    // Calcular a soma da borda
    for (int j = 0; j < n; j++) {
        somaBorda += matriz[0][j]; // Primeira linha
        somaBorda += matriz[n-1][j]; // Última linha
    }
    for (int i = 1; i < n - 1; i++) {
        somaBorda += matriz[i][0]; // Primeira coluna
        somaBorda += matriz[i][n-1]; // Última coluna
    }

    // Calcular soma acima e abaixo da diagonal principal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                somaAcima += matriz[i][j]; // Acima da diagonal
            }
            if (i > j) {
                somaAbaixo += matriz[i][j]; // Abaixo da diagonal
            }
        }
    }

    // Exibir a matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%-3d", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibir resultados das somas
    printf("Soma total: %d\n", somaTotal);
    printf("Soma acima da diagonal principal: %d\n", somaAcima);
    printf("Soma abaixo da diagonal principal: %d\n", somaAbaixo);
    printf("Soma da borda: %d\n", somaBorda);

    return 0;
}

