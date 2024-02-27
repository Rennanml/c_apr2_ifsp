#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void calcular();

int main(int argc, char const *argv[])
{
    calcular();
    return 0;
}

void calcular(){
    int n, i = 0, x, nmrCobaias, coelhos = 0, ratos = 0, sapos = 0, total = 0;
    char y;
    scanf("%d", &n);
    do
    {
        scanf("%d %c", &x, &y);
        getchar();
        if (y == 'S')
        {
            sapos = sapos + x;
        }else if (y == 'C')
        {
            coelhos = coelhos + x;
        }else if (y == 'R')
        {
            ratos = ratos + x;
        }
        total += x;
        i++;
        
        
    } while (i < n);

    double pc, pr, ps;
    pc = ((double)coelhos / total) * 100;
    pr = ((double)ratos / total) * 100;
    ps = ((double)sapos / total) * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", pc);
    printf("Percentual de ratos: %.2lf %%\n", pr);
    printf("Percentual de sapos: %.2lf %%\n", ps);
    
}