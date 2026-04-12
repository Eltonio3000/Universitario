/*1. Faça um programa em C que conte quantas letras maiúsculas existem numa string inserida pelo
usuário.

2.Faça um programa em C que conte quantas letras minúsculas existem numa string inserida pelo
usuário.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
    char palavra[100], i;
    int contadorMi=0, contadorMa=0;

    printf("Digite uma palavra: ");
	scanf("%s",&palavra);
	    
    i=strlen(palavra);
	i--;

    for ( ; palavra[i] > 0 ; i--){
        if (islower(palavra[i])) {
            contadorMi++;
        }
        if (isupper(palavra[i])) {
            contadorMa++;
        }
    }

    printf("ha %d letras maiusculas.\nhe %d letras minusculas", contadorMa, contadorMi);
    
    return 0;
}

//-------------------------OU

#include<stdio.h>
#include<string.h>

int main() {
    char palavra[100], i;
    int contadorMi=0, contadorMa=0;

    printf("Digite uma palavra: ");
	gets(palavra);

    for ( i=0 ; i < strlen(palavra) ; i++){
        if (palavra[i] >= 'A' && palavra[i] <= 'Z' ) {
            contadorMi++;
        }
        if (palavra[i] >= 'a' && palavra[i] <= 'z' ) {
            contadorMa++;
        }
    }

    printf("ha %d letras maiusculas.\nhe %d letras minusculas", contadorMa, contadorMi);
    
    return 0;
}

/*3. Faça um programa em C que receba 2 strings (A e B) e retorne uma terceira string (C) formada
pelos caracteres de A e B intercalados. Ex.: Se A='Quarta' e B='Segunda', a resposta deve ser
'QSueagrutnada'.*/

#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100], C[200];
    int i, j=0;

    printf("Digite seu nome: ");
    gets(A);
    printf("Digite seu sobrenome: ");
    gets(B);

    int qntA = strlen(A);
    int qntB = strlen(B);

    for ( i=0 ; i<qntA || i<qntB; i++) {
        if (i < qntA) {
            C[j++] = A[i];
        }
        if (i < qntB) {
            C[j++] = B[i];
        }
    }

    printf("seu nome intercalado: %s\n", C);
    return 0;
}
