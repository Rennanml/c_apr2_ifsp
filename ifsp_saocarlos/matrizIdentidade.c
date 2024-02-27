#include <stdio.h>

int main(int argc, char **argv)
{
	int n, aux = 1;
	printf("Digite o valor de n: \n");
	scanf("%d", &n);
	int matriz[n][n], linha, coluna;
	
	for (linha = 0; linha < n; linha++)
	{
		for (coluna = 0; coluna < n; coluna++)
		{
			printf("Digite o valor de %d/%d\n", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	
	//checar se é identidade
	for (linha = 0; linha < n; linha++)
	{
		for (coluna = 0; coluna < n; coluna++)
		{
			if (linha == coluna)
			{
				if (matriz[linha][coluna] == 1)
				{
					continue;
				}
				else
				{
					aux = 0;
					break;
				}
			}
			else
			{
				if (matriz[linha][coluna] == 0)
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
	}
	
	for (linha = 0; linha < n; linha++)
	{
		for (coluna = 0; coluna < n; coluna++)
		{
			printf("%d", matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	if (aux)
	{
		printf("Matriz identidade!!");
	}
	else
	{
		printf("Matriz nao identidade");
	}
	
	return 0;
}

