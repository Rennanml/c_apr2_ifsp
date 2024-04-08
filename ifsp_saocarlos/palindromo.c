#include <stdio.h>
#include <string.h>

int verificar(char palavra[15])
{
	char reverso[15];
	strcpy(reverso, palavra);
	strrev(reverso);
	if (strcmp(palavra, reverso) == 0)
	{
		return 1;
	}
	return 0;
}

int main(int argc, char **argv)
{
	char palavra[15];
	int resposta;
	printf("Digite uma palavra para verificar se e palindromon\n");
	scanf("%s", palavra);
	
	resposta = verificar(palavra);
	if (resposta)
	{
		printf("Palindromo");
	}else {
		printf("Nao palindromo");
	}
	
	
	return 0;
}

