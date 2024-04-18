#include <stdio.h>
#include <string.h>
#include <ctype.h>

char firstUpper(int length, char *string);

int main(int argc, char **argv)
{
	char string[50] = {"renNan"};
	char *pstring;
	int length;
	
	length = strlen(string);
	
	pstring = string;
	
	*pstring = firstUpper(length, pstring);
	printf("%c", pstring);
	
	return 0;
}

char firstUpper(int length, char *string)
{
	for (int i = 0; i < length; i++)
	{
		if (isupper(string[i]))
		{
			return string[i];
		}
	}
	return '\0';
}	
	
