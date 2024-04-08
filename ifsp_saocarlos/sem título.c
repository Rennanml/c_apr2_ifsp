#include <stdio.h>

int len(char *pstring);

int main()
{
    char string[50] = {"Rennan Marcile Lazarini"}, *pstring;
    int length;
    pstring = string;
    length = len(pstring);
    printf("%d", length);

}

int len(char *string)
{
    int cont = 0;
    for(int i = 0; string[i] != '\0'; i++)
		cont++;
    return cont;
}

