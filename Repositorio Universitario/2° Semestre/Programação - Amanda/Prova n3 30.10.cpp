/*
linahs = produtos
colunas = dias da semana

soma de vendas dos produtos separados
pegar a media semanal e verificar quais dias utrapassou esse valor
pegar a media diaria e veridicar qual produto mais vendeu
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    int matriz[3][7];
    int dia_maior_venda=0, dia_menor_venda=0;
    int soma_produto_um=0, soma_produto_dois=0, soma_produto_treis=0;
    int media_semanal[3][1], quantidade_dias_maior_que_media=0;

    srand(time(NULL));
    for( int i=0 ; i<3 ; i++ ){
        for( int j=0 ; j<7 ; j++ ){
        matriz[i][j] = rand() % 100;
        if( i==0 ){ soma_produto_um += matriz[i][j]; }
        if( i==1 ){ soma_produto_dois += matriz[i][j]; }
        if( i==2 ){ soma_produto_treis += matriz[i][j]; }
        }
    }
    printf("A soma de vendas semanais do primeiro produto: %d",soma_produto_um);
    printf("A soma de vendas semanais do segundo produto: %d",soma_produto_dois);
    printf("A soma de vendas semanais do terceiro produto: %d",soma_produto_treis);

    media_semanal[0][o] = soma_produto_um / 7;
    media_semanal[0][o] = soma_produto_um / 7;
    media_semanal[0][o] = soma_produto_um / 7;
    for( int j=0, count=1 ; j<3 ; j++, count++ ){
        for( int i=0 ; i<7 ; i++ ){
            
        }
        
    }

    return 0;
}