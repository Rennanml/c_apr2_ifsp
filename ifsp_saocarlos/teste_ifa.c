#include <stdio.h>

int main(int argc, char **argv)
{
	double nota = 0;
	int maiores_igual_6 = 0, ifa = 0, menores_4 = 0;
	
	while (1)
	{
		
		printf("Digite uma nota: \n");
		scanf("%lf", &nota);
		if (nota < 0)
		{
			break;
		}
		if (nota >= 6)
		{
			maiores_igual_6++;
		}else if (nota >= 4 && nota < 6)
		{
			ifa++;
		}else
		{
			menores_4++;
		}
	}
	printf("Passaram direto: %d\n", maiores_igual_6);
	printf("Ficaram de IFA: %d\n", ifa);
	printf("Reprovaram: %d\n", menores_4);
	return 0;
}

