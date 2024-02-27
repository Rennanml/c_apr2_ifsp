#include <stdio.h>

void calcular();

int main(int argc, char const *argv[])
{
    calcular();
    return 0;
}

void calcular(){
    double x = 0, y = 0;
    int n, i = 0;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%lf %lf", &x, &y);
        if (y == 0)
        {
            printf("divisao impossivel\n");
        }else
        {
            double divisao = 0;
            divisao = x / y;
            printf("%.1lf\n", divisao);
        }
        i++;
    }
}