#include <stdio.h>

int main(int argc, char **argv)
{
	int matriz[3][3];
	int linha, coluna, aux = 1;
	
	//construir matriz
	for (linha = 0; linha < 3; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("Valor de %d/%d: \n", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	//Checar matriz
	for (linha = 0; linha < 3; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			if (matriz[linha][coluna] == matriz[coluna][linha])
			{
				continue;
			}
			else
			{
				aux = 0;
				break;
			}
		}
	}
	if (aux)
	{
		printf("Matriz simetrica");
	}
	else
	{
		printf("Matriz nao simetrica");
	}
	
	//printar matriz
	for (linha = 0; linha < 3; linha++)
	{
		printf("\n");
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("%d ", matriz[linha][coluna]);
		}
	}
	
	return 0;
}

