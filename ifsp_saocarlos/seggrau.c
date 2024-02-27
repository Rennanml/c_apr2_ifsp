#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	float a, b, c, x, x1, x2, delta;
	printf("Digite o valor de A:\n");
	scanf("%f", &a);
	if (a == 0)
	{
		printf("Erro.");
		return 0;
		}
	printf("Digite o valor de B:\n");
	scanf("%f", &b);
	printf("Digite o valor de C:\n");
	scanf("%f", &c);
	delta = pow(b, 2) - (4 * a * c);
	if (delta < 0)
	{
		printf("Não tem raiz");
	} else if (delta == 0)
	{
		x = (-b) / (2*a);
		printf("x = %g", x);
	} else
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("x1 = %g\nx2 = %g", x1, x2);
	}
	return 0;
}

