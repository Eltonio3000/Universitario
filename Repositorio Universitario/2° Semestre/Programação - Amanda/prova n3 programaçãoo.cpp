#include<stdio.h>
#include<string.h>

struct vendedor
{
	char nome[50];
	int vendas;
};

void vendedores(vendedor vet, int size){
	
	for( int i=0 ; i < size ; i++ ){	
	printf("\ndigite o nome do vendedor: ");
	scanf("%s",&vet.nome[i]);
	printf("\ndigite a quantidade de vendas do vendedor: ");
	scanf("%d",&vet.venda[i]);
	}
}

void melhor_vendedor( vendedor vet, int size ){
	int melhor=vet.vendas[1];
	for( int i=0 ; i < size ; i++ ){	
		if( melhor>vet[i].vendas){
			melhor=vet[i].vendas;
			nomeMelhor = vet.nome[i];
		}
	}
	return=melhor;
}

void listar_Vendedores( vendedor vet, int size,){
	for( int i=0 ; i < size ; i++ ){	
		printf("\nNome:%s\nVenda:%d"vet[i].nome, vet.vendas[i]);
	}
}

void exibir_relatorio(vendedor vet,int size, float media){
	printf("\na media das vendas e %.2f",media);
	for(int i ; i < size ; i++){
		if( vet.vendas < media ){
			printf("\nnome:%s\nvenda:%d",vet.nome[i], vet.vendas[i]);
		}
	}
	
	int melhor=vet.vendas[1];
	int nomeMelhor=vet.nome[1];
	for( int i=0 ; i < size ; i++ ){	
		if( melhor>vet.vendas[i]){
			melhor=vet.vendas[i];
			nomeMelhor = vet.nome[i];
		}
	}
	printf("\nnome do melhor:%s\nvendas do melhor:%d",nomeMelhor,melhor);
}

int main(){
	int size=0;
	float media=0;
	int melhor=0;
	
	printf("digite quantidade de vnededores que serao registrados(max 10)\n: ");
	scanf("%d", &size);
	
	vendedor vet[size];
	
	if( qntdVendedores <= 10 ){
		
		vendedores(vet, size);
		for( int i=0 ; i < size ; i++ ){
			media+=vet.vendas[i];
		}
		media = media/size;
		
		printf("\nessa e a lista de vendedores...");
		listar_vendedores(vet,size);
		
		printf("\nesse eo relatorio...");
		exibir_relatorio(vet,size,media);

	}
	else{
	
		printf("quantidade maxima atingida! ");
	}
	
	
}

//correção
/*
#include <stdio.h>
#include <string.h>

struct vendedor {
    char nome[50];
    int vendas;
};

void vendedores(struct vendedor vet[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nDigite o nome do vendedor: ");
        scanf("%s", vet[i].nome);
        printf("Digite a quantidade de vendas do vendedor: ");
        scanf("%d", &vet[i].vendas);
    }
}

void listar_vendedores(struct vendedor vet[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nNome: %s\nVenda: %d", vet[i].nome, vet[i].vendas);
    }
}

void exibir_relatorio(struct vendedor vet[], int size, float media) {
    printf("\nA média das vendas é %.2f", media);
    printf("\nVendedores abaixo da média:");
    for (int i = 0; i < size; i++) {
        if (vet[i].vendas < media) {
            printf("\nNome: %s\nVenda: %d", vet[i].nome, vet[i].vendas);
        }
    }

    int melhor = vet[0].vendas;
    char nomeMelhor[50];
    strcpy(nomeMelhor, vet[0].nome);

    for (int i = 1; i < size; i++) {
        if (vet[i].vendas > melhor) {
            melhor = vet[i].vendas;
            strcpy(nomeMelhor, vet[i].nome);
        }
    }
    printf("\nNome do melhor vendedor: %s\nVendas do melhor: %d", nomeMelhor, melhor);
}

int main() {
    int size = 0;
    float media = 0;

    printf("Digite a quantidade de vendedores que serão registrados (máx 10): ");
    scanf("%d", &size);

    if (size <= 10) {
        struct vendedor vet[size];

        vendedores(vet, size);

        for (int i = 0; i < size; i++) {
            media += vet[i].vendas;
        }
        media = media / size;

        printf("\nEssa é a lista de vendedores:");
        listar_vendedores(vet, size);

        printf("\nEsse é o relatório:");
        exibir_relatorio(vet, size, media);

    } else {
        printf("Quantidade máxima atingida!");
    }

    return 0;
}

*/
