#include <stdio.h>

int main(){
	printf("Ola\n");
	printf("%s", 1 > 2 ? "verdade\n" : "falso\n");
	
	double a, x = 1, y = 1;
	a = x++ + y; //caso a expressão seja = x + ++y, o valor acrescenta em 1, pois o ++ é lido.
	printf("%lf\n", a);
	
	int j = 3;
	int k = j == 3;
	printf("%d", k);
	}

