/*
Desenvolva um programa em C que organize uma lista de estudantes com base em suas notas e identifique as melhores colocações, 
usando o método de ordenação Bubble Sort para ordenar os dados. O programa deve seguir os seguintes passos e requisitos:

Estrutura de Dados: Crie uma struct chamada Aluno que contenha os seguintes campos:

char nome[50]: Nome do aluno.
int matricula: Número de matrícula do aluno.
float nota: Nota final do aluno.

Leitura dos Dados: No programa principal, leia os dados de até 15 alunos, solicitando o nome, matrícula e nota de cada um. O 
usuário deve escolher quantos alunos deseja inserir (até o máximo de 15).

Função de Ordenação: Implemente uma função chamada ordenarPorNota que usa o método Bubble Sort para ordenar o vetor de Aluno 
em ordem decrescente com base na nota. A função deve receber o vetor de alunos e o número de alunos como parâmetros.

Exibição dos Dados Ordenados: Após a ordenação, o programa principal deve exibir a lista dos alunos em ordem de classificação, 
da maior para a menor nota, com nome, matrícula e nota.

Função de Identificação dos Melhores: Implemente uma função chamada exibirTopAlunos que recebe o vetor de Aluno já ordenado e o
 número de alunos, e exibe os três alunos com as maiores notas. Caso haja menos de três alunos, a função deve exibir todos.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char name[50];
    int registration;
    float grade;
} Student;

void sortByGrade(Student students[], int count){
    for (int i = 0; i < count - 1; i++){
        for (int j = 0; j < count - i - 1; j++){
            if (students[j].grade < students[j + 1].grade){
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayTopStudents(Student students[], int count){
    int topCount = count < 3 ? count : 3;
    printf("\nTop %d Estudantes:\n", topCount);
    for (int i = 0; i < topCount; i++){
        printf("%d. %s (Matricula: %d, Nota: %.2f)\n", i + 1, students[i].name, students[i].registration, students[i].grade);
    }
}

int main(){
    Student students[15];
    int numStudents;

    printf("Digite o numero de estudantes (maximo 15): ");
    scanf("%d", &numStudents);

    if (numStudents <= 0 || numStudents > 15){
        printf("Numero invalido de estudantes.\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++){
        printf("\nInsira os detalhes do estudante %d:\n", i + 1);
        printf("Nome: ");
        getchar();
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Matricula: ");
        scanf("%d", &students[i].registration);
        printf("Nota: ");
        scanf("%f", &students[i].grade);
    }

    sortByGrade(students, numStudents);

    printf("\nEstudantes ordenados por nota (da maior para a menor):\n");
    for (int i = 0; i < numStudents; i++){
        printf("%d. %s (Matricula: %d, Nota: %.2f)\n", i + 1, students[i].name, students[i].registration, students[i].grade);
    }

    displayTopStudents(students, numStudents);

    return 0;
}
