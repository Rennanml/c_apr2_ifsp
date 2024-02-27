#include <stdio.h>

void calcular();

int main(int argc, char const *argv[])
{
    calcular();
    return 0;
}

void calcular(){
    int x = 0, y = 0, soma = 0;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    
    while (x <= y)
    {
        if (x % 13 != 0)
        {
            soma += x;
        }
        x++;
    }
    if (x == y && x % 13 == 0)
    {
        soma = x;
    }
    
    printf("%d\n", soma);
}