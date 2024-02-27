#include <stdio.h>

double processar();

int main(int argc, char const *argv[])
{
    double nota1, nota2, media;
    int continuar = 0;

    while (1)
    {
        int i = 0;
        nota1 = processar();
        nota2 = processar();
        media = (nota1 + nota2) / 2;
        printf("media = %.2lf\n", media);
        while (i != 1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &continuar);
            if (continuar == 2)
            {
                return 0;
            }else if (continuar == 1)
            {
                i++;
            }else if (continuar != 1 && continuar != 2)
            {
                
            }
            

            }
        
        
        
    }
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

