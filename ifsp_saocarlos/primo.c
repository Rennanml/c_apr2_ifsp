#include <stdio.h>

int main(int argc, char **argv)
{
	int primo, aux = 1;
	scanf("%d", &primo);
	if (primo <= 0)
	{
		printf("ERRO");
		return 0;
	}
	
	for (int i = 2; i < primo; i++)
	{
		if (primo % i == 0)
		{
			aux = 0;
			break;
		}
	}
	
	
	if (aux)
	{
		printf("O numero e primo\n");
	}else
	{
		printf("O numero nao e primo\n");
	}

	return 0;
}

