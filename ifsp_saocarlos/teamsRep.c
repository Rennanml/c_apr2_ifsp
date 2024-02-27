#include <stdio.h>

int main(int argc, char **argv)
{
    float peso, altura, altura_media = 0;
    int idade, equipes = 5, idade_media = 0, idade_menor_18 = 0, peso_maior_80 = 0;
    
    for (int i = 0; i < equipes; i++)
    {
        int idade_total = 0;
        
        for (int j = 0; j < 3; j++)
        {
            printf("Digite a idade, peso e altura do jogador %d da equipe %d: \n", j + 1, i + 1);
            scanf("%d %f %f", &idade, &peso, &altura);
            
            if (idade < 18)
            {
                idade_menor_18++;
            }
            
            if (peso > 80)
			{
				peso_maior_80++;
			}
            
            idade_total += idade;
            altura_media += altura;
        }
        
        idade_media = idade_total / 3;
        printf("A media de idade da equipe %d e %d\n", i + 1, idade_media);
    }
    
    altura_media /= (equipes * 3);
    printf("A media de altura de todos os jogadores e de %.2f\n", altura_media);
    printf("Jogadores com menos de 18 anos: %d\n", idade_menor_18);
    printf("Jogadores com mais de 80kg: %d\n", peso_maior_80);
    
    return 0;
}
