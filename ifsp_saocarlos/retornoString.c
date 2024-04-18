#include <stdio.h>

int endereco(char *vstring, int tamanho);

int main(int argc, char **argv)
{
	char string[100];
	int tamanho = sizeof(string) / sizeof(string[0]);
	char *vstring = string;
	int retorno;
	char *p;
	
	printf("Digite a string: ");
	gets(string);
	
	retorno = endereco(vstring, tamanho);
	
	printf("endereco = %d\n", retorno);
	
	p = &vstring[retorno];
	
	printf("Segunda palavra: ");
	while (*p != '\0')
	{
		printf("%c", *p);
		p++;
	}
	
	return 0;
}

int endereco(char *vstring, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		if (*vstring == ' ')
		{
			return (int)(vstring + 1);
		}
		vstring++;

	}
	return 0;
}
