#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char name[41];
	printf("Digite o nome: \n");
	gets(name);
	
	for (int i = 0; i < strlen(name); i++)
	{
		name[i] = toupper(name[i]);
	}
	
	printf("MAIUSCULO: %s\n", name);
	
	for (int i = 0; i < strlen(name); i++)
	{
		name[i] = tolower(name[i]);
	}
	
	printf("minusculo: %s", name);
	return 0;
}

