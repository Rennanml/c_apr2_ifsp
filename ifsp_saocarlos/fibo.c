#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	int a = 0, b = 1, temp = 0;
	printf("Digite o numero de repeticoes da sua sequencia de fibo: \n");
	scanf("%d", &n);
	while (n >= 0)
	{
		temp = a;
		a = a + b;
		b = temp;
		n--;
		printf("%d ", b);
	}
	return 0;
}

