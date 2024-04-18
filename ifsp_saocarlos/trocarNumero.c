#include <stdio.h>

void trocarValores(int* pa, int* pb);

int main(int argc, char **argv)
{
	int a = 10, b = 2;
	int *pb = &b, *pa = &a;
	
	printf("%02d %02d\n", *pa, *pb);
	
	trocarValores(pa, pb);
	
	printf("%02d %02d\n", *pa, *pb);
	
	return 0;
}

void trocarValores(int* pa, int* pb)
{
	int aux = *pa;
	*pa =  *pb;
	*pb =  aux;
	
}
