#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char word[30];
	int point = 0;
	int aux = 1;
	while(1)
	{
		printf("Digite uma palavra em maíusculo ou digite FIM para sair. \n");
		gets(word);
		if (strcmp(word, "FIM") == 0)
		{
			break;
		}
		for (int i = 0; i < strlen(word); i++)
		{
			aux = 1;
			switch (word[i])
			{
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				case 'L':
				case 'N':
				case 'S':
				case 'T':
				case 'R':
					point++;
					break;
				case 'D':
				case 'G':
					point += 2;
					break;
				case 'B':
				case 'C':
				case 'M':
				case 'P':
					point += 3;
					break;
				case 'F':
				case 'H':
				case 'V':
				case 'W':
				case 'Y':
					point += 4;
					break;
				case 'K':
					point += 5;
					break;
				case 'J':
				case 'X':
					point += 8;
					break;
				case 'Q':
				case 'Z':
					point += 10;
					break;
				default:
					printf("O caractere %c e invalido!\n", word[i]);
					aux = 0;
					break;
			}	
		}
		
		if (aux == 1)
		{
			printf("Pontuacao total da palavra: %d\n", point);
		}
		
		}
		printf("Fim do programa.");
	return 0;
}

