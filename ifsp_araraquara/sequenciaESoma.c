#include <stdio.h>

void calcular();

int main(int argc, char const *argv[])
{
    calcular();
    return 0;
}

void calcular(){
    int m, n;
    while (1)
    {
        int soma = 0;
        scanf("%d %d", &m, &n);
        if (n == 0 || m == 0 || n < 0 || m < 0)
        {
            return 0;
        }
        
        if (m > n)
        {
            int temp = m;
            m = n;
            n = temp;
        }
        while (m <= n)
        {
            printf("%d ", m);
            soma += m;
            m++;
        }
        printf("Sum=%d\n", soma);
    }
    
}
