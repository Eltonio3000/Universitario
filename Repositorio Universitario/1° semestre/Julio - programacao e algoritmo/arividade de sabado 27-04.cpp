#include <stdio.h>
#include <string.h>

int main() {
    char um[3], dois[3], tres[3], quatro[3], cinco[3];
    int count = 0;

    printf("Telefonou para a vitima?\n: ");
    scanf("%s", &um);
    if (strcmp(um, "sim") == 0){
        count++;
    }

    printf("Esteve no local do crime?\n: ");
    scanf("%s", &dois);
    if (strcmp(dois, "sim") == 0){
        count++;
    }

    printf("Mora perto da vitima?\n: ");
    scanf("%s", &tres);
    if (strcmp(tres, "sim") == 0){
        count++;
    }

    printf("Devia para a vitima?\n: ");
    scanf("%s", &quatro);
    if (strcmp(quatro, "sim") == 0){
        count++;
    }

    printf("Ja trabalhou com a vitima?\n: ");
    scanf("%s", &cinco);
    if (strcmp(cinco, "sim") == 0){
        count++;
    }
    if (count == 2){
        printf("\nSuspeita\n");
    } 
	else if (count == 3 || count == 4){
        printf("\nCumplice\n");
    } 
	else if (count == 5){
        printf("\nAssassino\n");
    } 
	else {
        printf("\nInocente\n");
    }

    return 0;
}
