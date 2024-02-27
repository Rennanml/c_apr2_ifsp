#include <stdio.h>

int main(int argc, char **argv)
{
	int aleatorio[8], positivos[8] = {0}, negativos[8] = {0};
	int contP = 0, contN = 0, i;
	
	
	for (i = 0; i < 8; i++)
	{
		printf("Digite um valor para o vetor de índice %d\n", i);
		scanf("%d", &aleatorio[i]);
	}
	
	for (i = 0; i < 8; i++)
	{
		if (aleatorio[i] > 0)
		{
			positivos[contP] = aleatorio[i];
			contP++;
			
		} else
		if (aleatorio[i] < 0)
		{
			negativos[contN] = aleatorio[i];
			contN++;
		}
		else
		{
			printf("Zero");
		}
	}
	
	printf("Positivos: ");
	for (i = 0; i < contP; i++)
	{
		printf("%d ", positivos[i]);
	}
	printf("\nNegativos: ");
	for (i = 0; i < contN; i++)
	{
		printf("%d ", negativos[i]);
	}
	return 0;
}

