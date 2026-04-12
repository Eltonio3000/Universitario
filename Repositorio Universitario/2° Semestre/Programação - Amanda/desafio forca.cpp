#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TENTATIVAS 6

void desenharForca(int tentativas) {
    printf("Tentativas restantes: %d\n", MAX_TENTATIVAS - tentativas);
    printf("  _______\n");
    printf(" |/      |\n");
    if (tentativas > 0) printf(" |      (_)   \n");
    else printf(" |            \n");
    if (tentativas > 1) printf(" |      \\|/   \n");
    else if (tentativas == 1) printf(" |      \\|    \n");
    else printf(" |            \n");
    if (tentativas > 3) printf(" |       |    \n");
    else printf(" |            \n");
    if (tentativas > 4) printf(" |      / \\   \n");
    else if (tentativas == 4) printf(" |      /     \n");
    else printf(" |            \n");
    printf(" |\n");
    printf("|\n\n");
}

void exibirPalavra(char palavra[], int tamanho, int descobertas[]) {
    for (int i = 0; i < tamanho; i++) {
        if (descobertas[i])
            printf("%c ", palavra[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int verificarLetra(char letra, char palavra[], int tamanho, int descobertas[]) {
    int encontrada = 0;
    for (int i = 0; i < tamanho; i++) {
        if (tolower(palavra[i]) == tolower(letra) && !descobertas[i]) {
            descobertas[i] = 1;
            encontrada = 1;
        }
    }
    return encontrada;
}

int main() {
    srand(time(NULL));
    char palavra[10][20] = {
        "programacao", "cachorro", "cinto", "arvore", "terra",
        "projetor", "aniversario", "confete", "cadeira", "ponto"
    };
    
    int k = rand() % 10;
    int tamanho = strlen(palavra[k]);
    int descobertas[20] = {0};
    int tentativas = 0;

    printf("Bem-vindo ao jogo da forca!\n");

    while (tentativas < MAX_TENTATIVAS) {
        desenharForca(tentativas);
        exibirPalavra(palavra[k], tamanho, descobertas);

        char letra;
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        if (verificarLetra(letra, palavra[k], tamanho, descobertas)) {
            printf("Acertou!\n");
        } else {
            printf("Errou!\n");
            tentativas++;
        }

        // Verifica se todas as letras foram descobertas
        int acertos = 1; // Assume que temos pelo menos uma tentativa
        for (int j = 0; j < tamanho; j++) {
            if (!descobertas[j]) {
                acertos = 0; // Se alguma letra não foi descoberta
                break;
            }
        }

        if (acertos) {
        	exibirPalavra(palavra[k], tamanho, descobertas);
            break; // Todas as letras foram descobertas, termina o laço
        }
    }

    if (tentativas < MAX_TENTATIVAS) {
        printf("Parabens, voce venceu!\n");
    } else {
        desenharForca(tentativas);
        printf("Voce perdeu! A palavra era: %s\n", palavra[k]);
    }

    return 0;
}
