#include <stdio.h>

void qualMaior(int a, int b, int c, int* p);

int main(int argc, char **argv)
{
	int a, b, c, *p = &a;
	printf("Qual o valor de a?\n");
	scanf("%d", &a);
	
	printf("Qual o valor de b?\n");
	scanf("%d", &b);
	
	printf("Qual o valor de c?\n");
	scanf("%d", &c);
	
	qualMaior(a, b, c, p);
	
	if (*p != -1)
	{
		printf("Maior numero: %d", *p);
	}
	
	
	return 0;
}

void qualMaior(int a, int b, int c, int* p)
{
	int maior = -1;
	*p = maior;
	
	if (a > b && a > c)
	{
		maior = a;
	}else if (b > a && b > c)
	{
		maior = b;
	}else if (c > a && c > b)
	{
		maior = c;
	}else
	{
		printf("Erro! Algum numero repetido");
	}
	
	*p = maior;
	
}
