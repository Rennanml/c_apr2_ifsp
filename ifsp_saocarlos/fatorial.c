#include <stdio.h>

int main(int argc, char **argv)
{
	int num, fatorial = 1;
	printf("Digite um numero para ver seu fatorial:\n");
	scanf("%d", &num);
	while (num != 0)
	{
		fatorial *= num;
		num--;
	}
	printf("%d", fatorial);
	return 0;
}

