#include <stdio.h>

int main()
{
	int N, num = 1, den = 1;
	double s = 0;
	printf("Digite o valor de n \n");
	scanf("%d", &N);
	while (num <= N)
	{
		s += (double) num/den;
		num++;
		den += 2;
	}
	
	printf("%lf", s);
}

