#include <stdio.h>

int main(int argc, char **argv)
{
	int alunos, disciplinas;
	do
	{
		printf("Digite o numero de alunos (positivo)\n");
		scanf("%d", &alunos);
		if (alunos <= 0)
		{
			printf("Valor invalido\n");
		}
	} while (alunos <= 0);
	
	do
	{
		printf("Digite o numero de disciplinas (positivo)\n");
		scanf("%d", &disciplinas);
		if (disciplinas <= 0)
		{
			printf("Valor invalido\n");
		}
	} while (disciplinas <= 0);
	
	double notas[alunos][disciplinas];
	
	for (int i = 0; i < alunos; i++)
	{
		printf("Para o aluno %d: \n", i+1);
		for (int j = 0; j < disciplinas; j++)
		{
			do
			{
				printf("Digite a nota da disciplina %d: ", j+1);
				scanf("%lf", &notas[i][j]);
				printf("\n");
				if (notas[i][j] <= 0 || notas [i][j] > 10)
				{
					printf("Valor invalido\n");
				}
			} while (notas[i][j] <= 0 || notas [i][j] > 10);
		}
	}
	
	//Calcular a média dos alunos
	for (int i = 0; i < alunos; i++)
	{
		printf("Media do aluno %d: ", i+1);
		double media_alunos = 0;
		for (int j = 0; j < disciplinas; j++)
		{
			media_alunos += notas[i][j];
		}
		printf("%.2lf\n", media_alunos / alunos);
	}
	
	for (int i = 0; i < alunos; i++)
	{
		printf("Media da disciplina %d: ", i+1);
		double media_disciplinas = 0;
		for (int j = 0; j < disciplinas; j++)
		{
			media_disciplinas += notas[j][i];
		}
		printf("%.2lf\n", media_disciplinas/disciplinas);
	}
	
	
	return 0;
}

