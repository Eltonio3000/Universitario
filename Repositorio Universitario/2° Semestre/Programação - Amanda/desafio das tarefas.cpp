#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_DESC 100

 struct task{
    char description[MAX_DESC];
    char status[10];
};

task tasks[MAX_TASKS];
int task_count = 0;

void add_task() {
    if (task_count >= MAX_TASKS) {
        printf("\nLimite de tarefas atingido!\n");
        return;
    }

    printf("\nDigite a descricao da tarefa: ");
    getchar();
    scanf("%s", &tasks[task_count].description);

    strcpy(tasks[task_count].status, "Pendente");
    task_count++;

    printf("Tarefa adicionada com sucesso!\n");
}

void listarTarefas() {
    if (task_count == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }

    printf("\nLista de Tarefas:\n");
    for (int i = 0; i < task_count; i++) {
        printf("%d. %s [%s]\n", i + 1, tasks[i].description, tasks[i].status);
    }
    printf("\n");
}

void concluirTarefa() {
    if (task_count == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }

    listarTarefas();
    printf("Digite o numero da tarefa que deseja marcar como concluida: ");
    int index;
    scanf("%d", &index);

    if (index < 1 || index > task_count) {
        printf("Numero invalido!\n");
        return;
    }

    strcpy(tasks[index - 1].status, "Concluida");
    printf("Tarefa marcada como concluida!\n");
}

int main() {
    int opcao;

    do {
        printf("\n** Gerenciador de Tarefas **\n");
        printf("1. Adicionar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Concluir Tarefa\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                add_task();
                break;
            case 2:
                listarTarefas();
                break;
            case 3:
                concluirTarefa();
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção invalida!\n");
        }
    } while (opcao != 4);

    return 0;
}

