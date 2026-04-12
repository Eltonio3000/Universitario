/*
1)Faça um programa em C que utilize structs para armazenar 
os dados de um funcionário de uma empresa. Um funcionário 
de uma empresa deve possuir:
Nome (string de até 30 caracteres)
Idade 
Sexo (representado por um caractere, ‘M’ ou ‘F’)
CPF (armazenado em string)
Cargo que ocupa (string de ate 30 caracteres)
Salário
Data de Nascimento (dia e ano números inteiros, mês deve ser
 uma string)
Código do Setor onde trabalha (ex: 099)

Você pode definir quantas estruturas achar necessário. Seu 
programa deve criar um vetor de 3 funcionários. Use a
diretiva DEFINE para definir o tamanho do vetor. Em seguida, 
o usuário deve entrar com as informações para preencher esse vetor.
Finalmente, seu programa deve imprimir o vetor preenchido.
*/

#include <stdio.h>

#define EMPLOYEE_COUNT 3 

struct BirthDate {
    int day;
    char month[10];
    int year;
};

struct Employee {
    char name[30];
    int age;
    char gender;
    char cpf[15];
    char position[30];
    float salary;
    struct BirthDate birthDate;
    int departmentCode;
};

int main() {
    struct Employee employees[EMPLOYEE_COUNT];

    for (int i = 0; i < EMPLOYEE_COUNT; i++) {
        printf("\n--- Dados do Funcionário %d ---\n", i + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]", employees[i].name);

        printf("Idade: ");
        scanf("%d", &employees[i].age);

        printf("Sexo (M/F): ");
        scanf(" %c", &employees[i].gender);

        printf("CPF: ");
        scanf("%s", employees[i].cpf);

        printf("Cargo: ");
        scanf(" %[^\n]", employees[i].position);

        printf("Salário: ");
        scanf("%f", &employees[i].salary);

        printf("Dia de Nascimento: ");
        scanf("%d", &employees[i].birthDate.day);

        printf("Mês de Nascimento: ");
        scanf("%s", employees[i].birthDate.month);

        printf("Ano de Nascimento: ");
        scanf("%d", &employees[i].birthDate.year);

        printf("Código do Setor: ");
        scanf("%d", &employees[i].departmentCode);
    }

    printf("\n--- Dados dos Funcionários ---\n");
    for (int i = 0; i < EMPLOYEE_COUNT; i++) {
        printf("\nFuncionário %d\n", i + 1);
        printf("Nome: %s\n", employees[i].name);
        printf("Idade: %d\n", employees[i].age);
        printf("Sexo: %c\n", employees[i].gender);
        printf("CPF: %s\n", employees[i].cpf);
        printf("Cargo: %s\n", employees[i].position);
        printf("Salário: %.2f\n", employees[i].salary);
        printf("Data de Nascimento: %02d %s %d\n", employees[i].birthDate.day, employees[i].birthDate.month, employees[i].birthDate.year);
        printf("Código do Setor: %d\n", employees[i].departmentCode);
    }

    return 0;
}
