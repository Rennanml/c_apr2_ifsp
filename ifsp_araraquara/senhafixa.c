#include <stdio.h>

void processo();

int main(int argc, char const *argv[])
{
    processo();
    return 0;
}

void processo(){
    int senha;
    while (senha != 2002)
    {
        scanf("%d", &senha);
        if (senha != 2002)
        {
            printf("Senha Invalida\n");
        }else
        {
            printf("Acesso Permitido\n");
        }
        
        
    }
    
}