//atividade 5//

#include <stdio.h>
int main (){
	float altura, pesoIdeal;
	printf("digite a altura: ");
	scanf("%f", &altura);
	pesoIdeal = (72.7*altura)-58;
	printf("o peso ideal e: %.2f", pesoIdeal);
	return 0;
}

//atividade 6//

#include <stdio.h>
int main (){
	float lata, metroQua, precoTotal;
	printf("digite o metro quadrado a ser pintado: ");
	scanf("%f", &metroQua);
	lata = metroQua / 3; 
	precoTotal = 80 * lata;
	printf ("a quantidades de latas para essa medida e: %.2f\ne o orcamento e: %.2f",lata ,precoTotal);
	return 0;
}

//atividade 7//

#include <stdio.h>
int main (){
	float valorProduto, novoValor, valorDesconto;
	printf("digite o valor do produto: ");
	scanf("%f", &valorProduto);
	valorDesconto = ((9*100)/ valorProduto);
	novoValor = valorProduto - valorDesconto;
	printf("o novo valor e: %.2f\ncom %.2f$ de desconto.", novoValor, valorDesconto);
	return 0;
}
