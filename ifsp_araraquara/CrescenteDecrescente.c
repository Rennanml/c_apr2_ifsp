#include <stdio.h>

void processar();

int main(int argc, char const *argv[])
{
    processar();
    return 0;
}

void processar(){
    int x, y, contador = 0;
    while (contador == 0)
    {
        scanf("%d %d", &x, &y);
        if (x == y)
        {
            contador++;
        }else if (x > y)
        {
            printf("Decrescente\n");
        }else if (x < y)
        {
            printf("Crescente\n");
        }
    }    
}