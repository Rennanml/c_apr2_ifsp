#include <stdio.h>

double processar();

int main(int argc, char const *argv[])
{
    double nota1, nota2, media;
    nota1 = processar();
    nota2 = processar();
    media = (nota1 + nota2) / 2;
    printf("media = %.2lf\n", media);
    return 0;
}

double processar(){
    double nota;

    while (1)
    {
        scanf("%lf", &nota);
        if (nota >= 0 && nota <= 10)
        {
            return nota;
        }else
        {
            printf("nota invalida\n");
        }
        
        
    }
        
}