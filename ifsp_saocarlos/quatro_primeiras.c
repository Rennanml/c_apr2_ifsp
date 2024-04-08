#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char word[15];
	printf("Digite a palavra:\n");
	scanf("%s", word);
	
	for (int i = 0; i < 4; i++)
	{
		printf("%c", word[i]);
	}
	
	return 0;
}

