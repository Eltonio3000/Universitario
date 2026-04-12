#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, delta, x, xUm, xDois, raizDelta;
	
	printf("**baskara**\ndigite apenas valores numericos.\ndigite o valor de A: ");
	scanf("%f",&a);
	printf("digite o valor de B: ");
	scanf("%f",&b);
	printf("digite o valor de C: ");
	scanf("%f",&c);
	
	
	delta = (pow(b,2))-4*a*c;
	
	printf("delta %.2f\n\n",delta);
	
	if (delta > 0){
	    raizDelta = sqrt(delta);
	    xUm = (-b + raizDelta) / (2*a);
	    xDois = (-b - raizDelta) / (2*a);
	    printf("x' = %.2f\nx'' = %.2f", xUm, xDois);
	
	}
	else if (delta == 0){
	    raizDelta = sqrt(delta);
	    xUm = (-b + raizDelta) / (2*a);
	    xDois = (-b - raizDelta) / (2*a);
	    printf("x' = %.2f\n\ncom o delta igual a 0 a equacao possui apenas x'", xUm);
	
	}
	else if(delta < 0 ){
		printf("essa equacao nao possui raiz real, pois o delta e menor que 0");
		
	}
	
	return 0;
}
