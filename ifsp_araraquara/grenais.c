#include <stdio.h>

void grenal();

int main(int argc, char const *argv[])
{
    grenal();
    return 0;
}

void grenal(){
    int continuar;
    int vitoriaInter = 0, vitoriaGremio = 0, empate = 0, grenais = 0;
    while (continuar != 2)
    {
        int golInter = 0, golGremio = 0;
        continuar = 0;
        scanf("%d %d", &golInter, &golGremio);
        if (golInter > golGremio)
        {
            vitoriaInter++;
            grenais++;
        }else if (golInter < golGremio)
        {
            vitoriaGremio++;
            grenais++;
        }else if (golInter == golGremio)
        {
            empate++;
            grenais++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &continuar);
    }    
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitoriaInter);
    printf("Gremio:%d\n", vitoriaGremio);
    printf("Empates:%d\n", empate);
    if (vitoriaGremio > vitoriaInter)
    {
        printf("Gremio venceu mais\n");
    }else if (vitoriaInter > vitoriaGremio)
    {
        printf("Inter venceu mais\n");
    }
    
    
}