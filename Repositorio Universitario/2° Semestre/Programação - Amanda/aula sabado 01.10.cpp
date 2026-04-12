#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_CARTAS 10
#define CARTAS_POR_JOGADOR 5
#define RODADAS 5

void embaralhar(int *baralho) {
    for (int i = 0; i < TOTAL_CARTAS; i++) {
        baralho[i] = i + 1;
    }
    for (int i = TOTAL_CARTAS - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }
}

void distribuir_cartas(int *baralho, int *jogador, int *computador) {
    for (int i = 0; i < CARTAS_POR_JOGADOR; i++) {
        jogador[i] = baralho[i];
        computador[i] = baralho[i + CARTAS_POR_JOGADOR];
    }
}

void mostrar_cartas(int *cartas, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("indice %d: Carta %d\n", i, cartas[i]);
    }
}

int main() {
    int baralho[TOTAL_CARTAS];
    int cartas_jogador[CARTAS_POR_JOGADOR];
    int cartas_computador[CARTAS_POR_JOGADOR];
    int vitorias_jogador = 0, vitorias_computador = 0, empates = 0;

    srand(time(NULL));
    embaralhar(baralho);
    distribuir_cartas(baralho, cartas_jogador, cartas_computador);

    printf("Suas cartas:\n");
    mostrar_cartas(cartas_jogador, CARTAS_POR_JOGADOR);

    for (int rodada = 0; rodada < RODADAS; rodada++) {
        int indice_jogador, indice_computador;

        printf("Escolha o indice da carta que deseja jogar (0 a %d): ", CARTAS_POR_JOGADOR - 1);
        scanf("%d", &indice_jogador);
        while (indice_jogador < 0 || indice_jogador >= CARTAS_POR_JOGADOR) {
            printf("indice invalido. Tente novamente: ");
            scanf("%d", &indice_jogador);
        }

        // O computador escolhe uma carta aleatória (0 a CARTAS_POR_JOGADOR - 1)
        indice_computador = rand() % CARTAS_POR_JOGADOR;

        printf("Voce jogou: %d\n", cartas_jogador[indice_jogador]);
        printf("O computador jogou: %d\n", cartas_computador[indice_computador]);

        // Determinar o vencedor da rodada
        if (cartas_jogador[indice_jogador] > cartas_computador[indice_computador]) {
            printf("Voce venceu esta rodada!\n");
            vitorias_jogador++;
        } else if (cartas_jogador[indice_jogador] < cartas_computador[indice_computador]) {
            printf("O computador venceu esta rodada!\n");
            vitorias_computador++;
        } else {
            printf("Empate nesta rodada!\n");
            empates++;
        }

        // Remover as cartas jogadas 
         cartas_jogador[indice_jogador] = -1;
         cartas_computador[indice_computador] = -1;
    }

    // Exibir o resultado final
    printf("\nResultados Finais:\n");
    printf("Voce venceu %d rodadas.\n", vitorias_jogador);
    printf("O computador venceu %d rodadas.\n", vitorias_computador);
    printf("Empates: %d\n", empates);

    if (vitorias_jogador > vitorias_computador) {
        printf("Voce e o vencedor do jogo!\n");
    } else if (vitorias_jogador < vitorias_computador) {
        printf("O computador e o vencedor do jogo!\n");
    } else {
        printf("O jogo terminou empatado!\n");
    }

    return 0;
}

