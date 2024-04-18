#include <stdio.h>

void intercalar(int* v1, int* v2, int* vr);

int main(int argc, char **argv)
{
	int lista_um[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, lista_dois[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, resultante[20] = {0};
	intercalar(lista_um, lista_dois, resultante);
	
	printf("Nova lista: ");
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", resultante[i]);
	}
	
	return 0;
}

void intercalar(int* v1, int* v2, int* vr)
{
	int contador = 0;
	for (int i = 0; i < 10; i++)
	{
		vr[contador] = v1[i];
		vr[contador + 1] = v2[i];
		contador = contador + 2;
	}
}
