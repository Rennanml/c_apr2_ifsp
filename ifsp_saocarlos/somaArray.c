#include <stdio.h>

float soma(int tamanho, int *array);

int main(int argc, char **argv)
{
	int array[10] = {1, 50, 20, 58, 3}, *parray;
	parray = array;
	int tamanho; tamanho = (sizeof(array)/sizeof(array[0]));
	printf("%.2f", soma(tamanho, parray));
	
	return 0;
}

float soma(int tamanho, int *array)
{
	float soma = 0.0;
	for (int i = 0; i < tamanho; i++)
	{
		soma += array[i];
	}
	return soma;
}
