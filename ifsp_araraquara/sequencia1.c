#include <stdio.h>

void calcular();

int main(int argc, char const *argv[])
{
    calcular();
    return 0;
}

void calcular(){
    int i = 1, j = 60;
    printf("I=1 J=60\n");
    while (j != 0)
    {
        i += 3;
        j -= 5;
        printf("I=%d J=%d\n", i, j);
    }
    
}