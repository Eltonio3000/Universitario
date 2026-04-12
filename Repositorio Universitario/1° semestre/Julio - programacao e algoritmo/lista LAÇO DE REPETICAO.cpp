/*Cada espectador de um cinema respondeu a um questionário no qual
constava sua idade e a sua opinião em relação ao filme: ótimo – 3, bom – 2,
regular – 1.
Faça um programa que receba a idade e a opinião de 15 espectadores e que
calcule e mostre:
- A média das idades das pessoas que responderam ótimo;
- A quantidade de pessoas que respondeu regular;
- A percentagem de pessoas que respondeu bom entre todos os espectadores
analisados.*/
/*pronto*/

#include <stdio.h>
int main (){
	int otimo, mediaIdade, quantRegular, porcentBom;
	
	printf("**placar de notas**\n3 - OTIMO\n2 - BOM\n1 - REGULAR");
	
	for ( int i=0, idade, nota ; i < 15 ; i++){
		printf("\n\nqual a sua idade: ");
		scanf("%d",&idade);
		printf("qual a sua nota: ");
		scanf("%d",&nota);
		if (nota == 1 || nota == 2 || nota == 3){
		    if(nota == 3){
		    	otimo++;
			    mediaIdade = mediaIdade + idade;
		    }
		    else if(nota == 2){
			    porcentBom++;
		    }
		    else if(nota == 1){
			    quantRegular++;
		    }
	    }
	    else{
	    	printf("\nnota nao reconhecivel.\nreinicie o algoritmo e tente novamente");
	    	break;
		}
		
	}
	mediaIdade = mediaIdade / otimo;
	porcentBom = (porcentBom * 100) / 15;	

	printf("\n\na media das idades de quem avaliou como bom: %d\nquantidade de quem avaliou como regular: %d\nporcentagem das pessoas que avaliou como bom: %d%%\n\n",mediaIdade,quantRegular,porcentBom);
	
	return 0;
}

/*Faça um programa que leia dez conjuntos de dois valores, o primeiro
representando o número do aluno e o segundo representando a sua altura em
centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número do
aluno mais alto e o número do aluno mais baixo, junto com suas alturas.*/
/*pronto*/

#include <stdio.h>
int main (){
	int codAluno=0, altura=0, alunoBaixo=9999999, alunoAlto=-9999999, codAlunoBaixo=0, codAlunoAlto=0;
	int alto=0, baixo=0;
	
	printf("serao requeridos 10 alunos e suas respectivas altura (digite em centimetro).");
	
	for(int i=0; i<10 ; i++){
		printf("\n\ndigite o codigo do aluno: ");
		scanf("%d",&codAluno);
		printf("digite a altura: ");
		scanf("%d",&altura);
		if(altura > alunoAlto){
			alunoAlto = altura;
			codAlunoAlto = codAluno;
			alto++;
		}
		else if(altura < alunoBaixo){
			alunoBaixo = altura;
			codAlunoBaixo = codAluno;
			baixo++;
		}
		
	}
	alto--;
	baixo--;
	printf("\no aluno mais baixo e: %.2d\ncom altura: %d\na %d alunos com essa altura\n\no aluno mais alto e: %.2d\ncom altura: %d\na %d alunos com essa altura",codAlunoBaixo,alunoBaixo,baixo,codAlunoAlto,alunoAlto,alto);
	
	return 0;
}

/*Fazer um programa no qual o usuário vai entrando sucessivamente com
valores positivos. Quando o usuário entrar com um valor negativo o
programa para de pedir valores e calcula a média dos valores já fornecidos.*/
/*pronta*/

#include <stdio.h>
int main (){
	int media, i, num;
	
	for( ; ; ){
		printf("\ndigite um numero: ");
		scanf("%d",&num);
		
		if( num < 0){
			break;
			
		}
		else if(num > 0){
	    	i++;
	    	
		}
		media = media + num;

		
	}
	
	media = media / i;
	
	printf("\na media dos numeros positivos digitados e: %d",media);
	
	return 0;
}

/*Faça um programa que peça um número inteiro positivo e em seguida mostre
este número invertido. Exemplo: 12376489 => 98467321.*/
/*pronta*/

#include <stdio.h>
int main (){
	int num, invertido, digito;
	
	printf("digite um valor inteiro positivo: ");
	scanf("%d",&num);
	
	if(num >= 0){
	for( ; num > 0 ;num /= 10 ){
		
		digito = num % 10;
		invertido = (invertido * 10) + digito; 
		
	}
		printf("%d",invertido);
	}
	else{
		printf("\no numero nao esta dentro da regra de 'inteiro positivo'\nreinicie o algoritmo e tente novamente");
	}
	
	return 0;
}

/*Faça um programa que receba como entrada uma lista de números positivos
ou negativos, terminada com o número zero. O programa deve usar laços de
repetição para produzir como saída a soma dos números positivos, a soma
dos números negativos e a soma das duas somas parciais.*/
/*pronto*/

#include<stdio.h>
int main (){
	int num=1, somaPositiva=0, somaNegativa=0, somaTotal=0;
	
	for( int i=0 ; num != 0 ; i++ ){
		printf("digite um valor: ");
		scanf("%d",&num);
		
		somaTotal = somaTotal + num;
		
		if(num < 0){
			somaNegativa = somaNegativa + num;
			
		}
		else if(num > 0){
			somaPositiva = somaPositiva + num;
			
		}
		
	}
	
	printf("\nsoma Positivo: %d\nsoma Negativo: %d\nsoma Total: %d",somaPositiva,somaNegativa,somaTotal);
	
	return 0;
}

/*Desenvolva um algoritmo que solicite a entrada de 3 valores A, B e C
ininterruptamente, o algoritmo deve parar de pedir solicitar a entrada de
valores quando C for igual a ZERO. No final mostre o maior valor
informado, o menor valor informado e quantos números pares foram
digitados.*/
/*correto*/

#include<stdio.h>
int main (){
	int maior=-9999999, menor=9999999, par;
	
	for(int a=0, b=0, c=1 ; c != 0 ; ){
		printf("\ndigite valor de A: ");
		scanf("%d",&a);
		printf("digite valor de B: ");
		scanf("%d",&b);
		printf("digite valor de C: ");
		scanf("%d",&c);
		
		//par
		if (a % 2 == 0) {
            par++;
        }
        else if (b % 2 == 0) {
            par++;
        }
        else if (c % 2 == 0) {
            par++;
        }
	
		//maior
		if (a > maior) {
            maior = a;
        }
        if (b > maior) {
            maior = b;
        }
        if (c > maior) {
            maior = c;
        }
		
		//menor
		if (a < menor && a != 0) {
            menor = a;
        }
        if (b < menor && b != 0) {
            menor = b;
        }
        if (c < menor && c != 0) {
            menor = c;
        }
		
	}
	par++;
	printf("\no maior numero digitado e: %d\no menor numero digitado e: %d\nforam digitados %d numeros pares",maior,menor,par);
	
	return 0;
}
