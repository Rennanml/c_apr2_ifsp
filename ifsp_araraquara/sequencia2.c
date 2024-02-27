#include <stdio.h>

void calcular();

int main(int argc, char const *argv[])
{
    calcular();
    return 0;
}

void calcular(){
    int i = 1, j = 7;
    while (i <= 9)
    {
        printf("I=%d J=%d\n", i, j);
        printf("I=%d J=%d\n", i, j - 1);
        printf("I=%d J=%d\n", i, j - 2);
        i += 2;
        j += 2;
    }
}