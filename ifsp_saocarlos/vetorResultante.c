#include <stdio.h>

int main(int argc, char **argv)
{
	int vetor1[5] = {0}, vetor2[5] = {0}, resultante[10] = {0};
	int i, j = 0;
	// colher dados do vetor 1
	for (i = 0; i < 5; i++)
	{
		printf("Digite o valor de %d do vetor 1: \n", i);
		scanf("%d", &vetor1[i]);
	}
	//colher dados do vetor 2
	for (i = 0; i < 5; i++)
	{
		printf("Digite o valor de %d do vetor 2: \n", i);
		scanf("%d", &vetor2[i]);
	}
	// construir o resultante
	for (i = 0; i < 5; i++)
	{
		resultante[j] = vetor1[i];
		j++;
		resultante[j] = vetor2[i];
		j++;
	}
	
	//printar vetor 1
	printf("Vetor 1: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", vetor1[i]);
	}
	
	//printar vetor 2
	printf("\nVetor 2: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", vetor2[i]);
	}
	
	//printar resultante
	printf("\nResultante: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", resultante[i]);
	}
	
	return 0;
}

