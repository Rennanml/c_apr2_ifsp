#include <stdio.h>

float verificar(float x,float y,float z){
	if (x + y > z && y + z > x && z + x > y && x != 0 && y != 0 && z != 0)
	{
		if (x == z && z == y)
		{
			return 2;
		} else if (x != y && y != z && x != z)
		{
			return 3;
		} else if ((x == y && x != z) || (x == z && x != y) || (y == z && y != x))
		{
			return 4;
		}
	} else
	{
		return 1;
	}
	return 0;
	}

int main(){
	float x, y, z;
	int resultado;
	printf("Digite o valor de X: \n");
	scanf("%f", &x);
	printf("Digite o valor de Y: \n");
	scanf("%f", &y);
	printf("Digite o valor de Z: \n");
	scanf("%f", &z);
	resultado = verificar(x,y,z);
	switch (resultado)
	{
		case 1:
			printf("Triangulo invalido.\n");
			break;
		case 2:
			printf("Triangulo equilatero.\n");
			break;
		case 3:
			printf("Triangulo escaleno.\n");
			break;
		case 4:
			printf("Triangulo isoceles.\n");
			break;
		default:
			printf("Erro inesperado.\n");
			break;
	}
	
	
	}
