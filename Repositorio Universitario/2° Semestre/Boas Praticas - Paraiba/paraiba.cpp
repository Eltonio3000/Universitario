#include <stdio.h>

int main() {
	int imovel = 1, meses = 0;
	float iptu, somaMulta = 0, somaJuros = 0, somaIptu=0 , calcMulta, calcJuros, total;
		
	for( ; imovel < 4; imovel++){
		printf("\nDigite o valor do IPTU: ");
		scanf("%f", &iptu);
		
		printf("Digite a quantidade de meses em atraso: ");
		scanf("%d", &meses);
		
		calcMulta = iptu * 0.02;
		calcJuros = meses *(iptu * 0.015);
		total = iptu + calcMulta + calcJuros;
		
		somaIptu += iptu;
		somaMulta += calcMulta;
		somaJuros += calcJuros;
			
	}
	
	printf("imoveis: %d\nIPTU: %.2f\nMulta: %.2f\nJuros: %.2f\nTotal: %.2f", imovel, somaIptu, somaMulta, somaJuros, total);
	
	return 0;
}
