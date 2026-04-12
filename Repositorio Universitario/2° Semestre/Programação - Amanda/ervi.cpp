/*
Criar um programa em C para gerenciar um sistema simples de reservas de salas em um prédio comercial.
O programa deve:

Permitir cadastrar até 5 salas, informando o nome e a capacidade máxima de cada uma.
Registrar uma reserva, onde o usuário escolhe a sala e a quantidade de pessoas que irão utilizá-la.
Verificar se a quantidade de pessoas não excede a capacidade da sala selecionada.
Exibir o resumo da reserva, indicando se foi bem-sucedida ou não.

Regras do Exercício:

O programa deve ser dividido em funções:
Cadastrar as salas.
Registrar a reserva.
Verificar a disponibilidade da sala.
Exibir o resumo da reserva.

Função cadastrarSalas:
Deve receber os nomes e capacidades das salas.
Permite registrar até 5 salas.

Função realizarReserva:
Recebe os nomes e capacidades das salas.
Solicita ao usuário o nome da sala e a quantidade de pessoas para a reserva.
Retorna 1 se a reserva for bem-sucedida, ou 0 caso contrário.

Procedimento exibirResumoReserva:
Informa se a reserva foi realizada com sucesso ou se houve falha.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
   int id;
   int capacity;
   char status[10];
} rooms;

void registerRooms(rooms vet[], int n) { 
   for (int i = 0; i < n; i++) {
      printf("\nDigite o numero da sala:\n");
      scanf("%d", &vet[i].id);
      printf("Digite a capacidade maxima da sala:\n");
      scanf("%d", &vet[i].capacity);
      strcpy(vet[i].status, "disponivel");
   }
}

void listRooms(rooms vet[], int n){
    for (int i = 0; i < n; i++) {
       printf("--Sala ID: %d\nCapacidade: %d\nStatus: %s\n\n", vet[i].id, vet[i].capacity, vet[i].status);
   }
}

int makeReservation(rooms vet[], int n) {
   int idRooms = 0;
   int capacityDesired = 0;
   int trueFalse = 0;
   
   printf("Escolha a sala desejada pelo ID:\n");
   scanf("%d", &idRooms); 
   
   printf("Digite a quantidade de pessoas no evento:\n");
   scanf("%d", &capacityDesired);
   
   for (int i = 0; i < n; i++) {
      if (vet[i].id == idRooms) {
         if (vet[i].capacity >= capacityDesired && strcmp(vet[i].status, "disponivel") == 0) { 
            trueFalse = 1;
            strcpy(vet[i].status, "reservada");
         } else {
            trueFalse = 0;
         }
         break; 
      }
   }
   return trueFalse;
}

void showSummaryReservation(int trueFalse) {
    if (trueFalse == 1) { 
        printf("Reservado com sucesso\n");
    } else {
        printf("Falha na reserva\n");
    }
}

int main() {
    int size = 5;
    int trueFalse = 0;
    int select=0;
    rooms vet[size]; 
    
    for( ; ; ){
        printf("\n**reserva de salas**\nmenu\n1-adicionar sala\n2-listar salas\n3-reservar sala\n4-sair\n\n: ");
        scanf("%d", &select);

        int aux=0;
        
        switch (select)
        {
        case 1:
            printf("Digite quantas salas vão ser cadastradas:\n");
            scanf("%d", &size);
        
            registerRooms(vet,size);
        break;
        case 2:
            listRooms(vet, size);
        break;
        case 3:
            trueFalse = makeReservation(vet, size);
            showSummaryReservation(trueFalse);
        break;
        case 4:
            printf("\nsaindo...");
            aux=1;
        break;
        default:
            printf("erro\nnumero invalido, reinicie e tente novamnete");
        break;
        }
        if (aux == 1){
            break;
        }
    }
    
    return 0;
}
