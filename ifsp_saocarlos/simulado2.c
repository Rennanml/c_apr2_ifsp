#include <stdio.h>

int main(int argc, char **argv)
{
	int qtd_alunos;
	do
	{
		printf("Digite a quantidade de alunos (maior que 0):\n");
		scanf("%d", &qtd_alunos);
		if (qtd_alunos <= 0)
		{
			printf("Valor invalido.\n");
		}
	} while (qtd_alunos <= 0);
	
	double alunos[qtd_alunos];
	double soma = 0;
	
	for (int i = 0; i < qtd_alunos; i++)
	{
		do
		{
			printf("Digite a nota do aluno %d: ", i+1);
			printf("\n");
			scanf("%lf%*c", &alunos[i]);
			if (alunos[i] < 0 || alunos[i] > 10)
			{
				printf("Nota invalida\n");
			}
		} while (alunos[i] < 0 || alunos[i] > 10);
	}
	
	for (int i = 0; i < qtd_alunos; i++)
	{
		soma += alunos[i];
	}
	
	printf("Media: %lf\n", soma/qtd_alunos);
	
	return 0;
}

