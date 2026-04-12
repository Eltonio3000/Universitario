/*
1. Faça uma função que recebe, por parâmetro, a hora de início e a hora de término de um jogo, 
ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar a duração do 
jogo em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e 
que o jogo pode começar em um dia e terminar no outro.
*/

#include <stdio.h>
#include <stdbool.h>

int convert_hour(int hours, bool to_minutes) {
    if (to_minutes) {
        return hours * 60;
    } else {
        return hours / 60;
    }
}

void hour_play_game(int mS, int hS, int mF, int hF, int *hoursDuration, int *minutesDuration) {
    int start_minutes = hS * 60 + mS;
    int end_minutes = hF * 60 + mF;
    int duration_minutes;

    if (end_minutes >= start_minutes) {
        duration_minutes = end_minutes - start_minutes;
    } else {
        duration_minutes = (1440 - start_minutes) + end_minutes;
    }

    *hoursDuration = duration_minutes / 60;
    *minutesDuration = duration_minutes % 60;
}

void show_result() {
    int minuteStart, hourStart, minuteFinish, hourFinish;
    int hoursDuration, minutesDuration;

    printf("Que horas o jogo comecou?\n: ");
    scanf("%d", &hourStart);
    printf("Que minuto o jogo comecou?\n: ");
    scanf("%d", &minuteStart);

    printf("\nQue horas o jogo terminou?\n: ");
    scanf("%d", &hourFinish);
    printf("Que minuto o jogo terminou?\n: ");
    scanf("%d", &minuteFinish);

    hour_play_game(minuteStart, hourStart, minuteFinish, hourFinish, &hoursDuration, &minutesDuration);

    printf("Duracao do jogo: %d horas e %d minutos\n", hoursDuration, minutesDuration);
}

int main() {
    show_result();
    return 0;
}
