#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char word[15];
	printf("Digite a palavra: \n");
	scanf("%s", word);
	
	printf("%ld", strlen(word));
	
	return 0;
}

