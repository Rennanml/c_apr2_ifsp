#include <stdio.h>

void calcular();

int main(int argc, char const *argv[])
{
    calcular();
    return 0;
}

void calcular(){
    int n, x ,y, i = 0;
    int j, k, soma = 0;
    scanf("%d", &n);
    while (i < n)
    {
        soma = 0;        
        
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        x++;
        while (x < y)
        {
            if (x % 2 != 0)
            {
                soma += x;
                
            }
            x++;
        }
        printf("%d\n", soma);
        i++;
        
    }
    
}
