#include <stdio.h>
int main (){
	int x= 7;
	int y = x++ + ++x;
	printf("%d", y);
	
	return 0;
}
