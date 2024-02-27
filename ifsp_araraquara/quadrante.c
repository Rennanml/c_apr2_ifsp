#include <stdio.h>

void processo();

int main(int argc, char const *argv[])
{
    processo();
    return 0;
}

void processo(){
    int x, y;
    do
    {
        scanf("%d %d", &x, &y);
        if (x > 0 && y > 0)
        {
            printf("primeiro\n");
        }else if (x > 0 && y < 0)
        {
            printf("quarto\n");
        }else if (x < 0 && y < 0)
        {
            printf("terceiro\n");
        }else if (x < 0 && y > 0)
        {
            printf("segundo\n");
        }  
    } while (x != 0 || y != 0);
    
}
