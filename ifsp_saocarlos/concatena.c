#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char name[15], lastname[15];
	printf("Digite o nome: \n");
	scanf("%s", name);
	printf("Digite o sobrenome:\n");
	scanf("%s", lastname);
	
	strcat(name, " ");
	strcat(name, lastname);
	
	printf("Nova string: %s\nNmr de caracteres: %ld\nPrimeira letra: %c\nUltima letra: %c", name, strlen(name), name[0], name[strlen(name) - 1]);
	
	return 0;
}

