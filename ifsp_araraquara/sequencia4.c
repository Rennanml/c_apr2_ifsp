#include <stdio.h>

void calcular();

int main(int argc, char const *argv[])
{
    calcular();
    return 0;
}

void calcular(){
    double a = 0, j = 1;
    while (a <= 2)
    {
        printf("I=%g J=%g\n", a, j);
        printf("I=%g J=%g\n", a, j + 1);
        printf("I=%g J=%g\n", a, j + 2);
        a += 0.2;
        j += 0.2;
    }
    
}