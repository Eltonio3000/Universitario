/*
Crie um programa em C que utiliza funções e procedimentos para gerenciar os 
jogos de uma atlética universitária. O programa deve permitir:

1. Registrar o resultado de jogos entre duas equipes, indicando:
Nome da equipe vencedora.
Nome da equipe perdedora.

2. Exibir um resumo com:
Todas as partidas registradas.
A quantidade de vitórias de cada equipe.
*/

#include <stdio.h>
#include <string.h>

#define MAX_GAMES 100
#define MAX_TEAMS 50
#define MAX_NAME 50

struct game{
    char winner[MAX_NAME];
    char loser[MAX_NAME];
};

struct team{
    char name[MAX_NAME];
    int wins;
};

game games[MAX_GAMES];
int gameCount = 0;

team teams[MAX_TEAMS];
int teamCount = 0;

void registerGame();
void displaySummary();
int findTeamIndex(char name[]);
void updateWins(char winner[]);

// Função principal
int main(){
    int option = 0;

    do{
        printf("\nMenu:\n");
        printf("1. Registrar resultado do jogo\n");
        printf("2. Exibir resumo\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        if(option == 1){
            registerGame();
        }
		else if(option == 2){
            displaySummary();
        }
		else if(option == 3){
            printf("Saindo...\n");
        }
		else{
            printf("Opcao invalida!\n");
        }
    }while(option != 3);

    return 0;
}

void registerGame(){
    if(gameCount >= MAX_GAMES){
        printf("Limite de jogos atingido!\n");
        return;
    }

    char winner[MAX_NAME];
    char loser[MAX_NAME];

    printf("Digite o nome da equipe vencedora: ");
    scanf(" %[^\n]", winner);

    printf("Digite o nome da equipe perdedora: ");
    scanf(" %[^\n]", loser);

    int i;
    for(i = 0; i < MAX_NAME; i++){
        games[gameCount].winner[i] = winner[i];
        games[gameCount].loser[i] = loser[i];
    }
    gameCount++;

    updateWins(winner);

    printf("Jogo registrado com sucesso!\n");
}

void displaySummary(){
    printf("\nResumo dos Jogos:\n");
    int i;
    for (i = 0; i < gameCount; i++) {
        printf("Jogo %d: Vencedor: %s, Perdedor: %s\n", i + 1, games[i].winner, games[i].loser);
    }

    printf("\nVitorias por equipe:\n");
    for (i = 0; i < teamCount; i++) {
        printf("Equipe: %s, Vitorias: %d\n", teams[i].name, teams[i].wins);
    }
}

int findTeamIndex(char name[]){
    int i, j;
    for(i = 0; i < teamCount; i++){
        int isEqual = 1;
        for(j = 0; j < MAX_NAME; j++){
            if(teams[i].name[j] != name[j]){
                isEqual = 0;
                break;
            }
            if(teams[i].name[j] == '\0' && name[j] == '\0'){
                break;
            }
        }
        if(isEqual){
            return i;
        }
    }
    return -1;
}

void updateWins(char winner[]){
    int index = findTeamIndex(winner);

    if(index == -1){
        int i;
        for(i = 0; i < MAX_NAME; i++){
            teams[teamCount].name[i] = winner[i];
        }
        teams[teamCount].wins = 1;
        teamCount++;
    }
	else{
        teams[index].wins++;
    }
}
