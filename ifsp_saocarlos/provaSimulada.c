

//
// Questão 1 (2,0 pontos):
//
//
// NA PROVA DE VERDADE TERÁ UMA QUESTÃO TEÓRICO-PRÁTICA AQUI.
// RESPONDA COMO COMENTÁRIO LOGO ABAIXO, COMO INDICADO.
//
//

/*


          Digite sua resposta aqui...


                                                                  */

/////////////////////////////////////////////////////////////////////////////


//
// Questão 2 (1,0 ponto):
//
//
// NA PROVA DE VERDADE TERÁ UMA QUESTÃO TEÓRICO-PRÁTICA AQUI.
// RESPONDA COMO COMENTÁRIO LOGO ABAIXO, COMO INDICADO.
//
//

/*


          Digite sua resposta aqui...


                                                                  */

/////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>


//
// **PROIBIDO**  ALTERAR A DEFINIÇÃO DO TIPO DE DADOS ABAIXO:
//


typedef struct {

    char nome[31];
    char fabricante[31];
    int estoque;
    
} PRODUTO;



//
// CONTEXTO:
// Uma loja usa a estrutura acima para armazenar os dados de localização de produtos
// no estoque físico.
// Os dados são armazenados em uma matriz, onde:
//     linhas: número da estante.
//    colunas: prateleira daquela estante.
//
// Exemplo: estoque[3][4]
//          O produto está localizado na estante 3, prateleira 4.
//


/////////////////////////////////////////////////////////////////////////////


//
// Questão 3 (2,0 pontos):
//
// Crie a função criaMatriz() que receba por parâmetros o número de estantes
// e o número de prateleiras em cada estante, e retorne o endereço de memória
// de uma matriz com linhas=estantes, colunas=prateleiras, que armazene o tipo
// de dado PRODUTO. 
// A MATRIZ DEVE SER ALOCADA DINAMICAMENTE.
// Obrigatório testar se a alocação foi bem sucedida.
//


PRODUTO * * criaMatriz(int est, int prat)
{
	PRODUTO ** m = (PRODUTO**) malloc(est * sizeof(PRODUTO*));
	
	if (m == NULL)
	{
		printf("Erro na alocacao.");
		exit(1);
	}
	
	for (int i = 0; i < est; i++)
	{
		m[i] = (PRODUTO*) malloc(prat * sizeof(PRODUTO));
		if (m[i] == NULL)
		{
			printf("Erro na alocacao.");
			exit(1);
		}
	}

	return	m;

}


/////////////////////////////////////////////////////////////////////////////

//
// Questão 4 (2,0 pontos):
//
// Crie a função digitaMatriz() que receba por parâmetros o número de estantes,
// o número de prateleiras em cada estante, e o endereço de memória da matriz.
// A função não vai retornar nada.
//
// A função deve permitir digitar os dados de todos elementos da matriz.
//
// Ao FINAL DA DIGITAÇÃO, exibir os dados digitados.
// NAO PODE IR EXIBINDO ENQUANTO FOR DIGITANDO,
// PRECISA CONSULTAR A MATRIZ JÁ PREENCHIDA E EXIBIR OS DADOS !!!
//

void digitaMatriz(int est, int prat, PRODUTO ** m)
{
	for (int i = 0; i < est; i++)
	{
		for (int j = 0; j < prat; j++)
		{
			printf("Estante '%d' prateleira '%d': \n", i, j);
			printf("Digite o nome do produto: ");
			gets(m[i][j].nome);
			printf("Digite o fabricante: ");
			gets(m[i][j].fabricante);
			printf("Digite a quantidade no estoque: ");
			scanf("%d%*c", &m[i][j].estoque);
		}
	}
	printf("\nDados digitados:\n");
    for (int i = 0; i < est; i++) {
        for (int j = 0; j < prat; j++) {
            printf("Estante %d, Prateleira %d:\n", i, j);
            printf("Nome: %s\n", m[i][j].nome);
            printf("Fabricante: %s\n", m[i][j].fabricante);
            printf("Estoque: %d\n\n", m[i][j].estoque);
		}
	}
}


/////////////////////////////////////////////////////////////////////////////

//
// Questão 5 (2,0 pontos):
//
// Crie a função estoqueMinimo() que receba por parâmetros o número de estantes,
// o número de prateleiras em cada estante, o endereço de memória da
// matriz, e um número inteiro que representa um valor de "estoque mínimo" para cada produto.
// A função não vai retornar nada.
// Exiba os produtos que tem estoque MENOR que o estoque mínimo informado.
//

void estoqueMinimo(int est, int prat, PRODUTO ** m, int min)
{
	int flag = 0;
	printf("Produtos com estoque abaixo do esperado: ");
	for (int i = 0; i < est; i++)
	{
		for (int j = 0; j < prat; j++)
		{
			if (m[i][j].estoque < min)
			{
				flag = 1;
				printf("%s ", m[i][j].nome);
			}
		}
	}
	if (flag == 0)
	{
		printf("Nenhum.");
	}else
	{
		printf(".");
	}





}


/////////////////////////////////////////////////////////////////////////////

//
// Questão 6 (1,0 ponto):
//
// Faça o programa principal.
// Pergunte ao usuário quantas estantes e quantas prateleiras ele quer na matriz.
// Chame a função da questão 3 para criar a área de armazenamento.
// Chame a função da questão 4 para digitar e exibir os dados.
// Pergunte ao usuário qual o valor do estoque mínimo.
// Chame a função da questão 5 para exibir os produtos abaixo do estoque mínimo.
// Libere as áreas de memória alocadas dinamicamente.
//
   
    
int main()
{
	int estante, prateleira, estoque;
	printf("Digite a quantidade de estantes: ");
	scanf("%d%*c", &estante);
	printf("Digite a quantidade de prateleiras: ");
	scanf("%d%*c", &prateleira);
	PRODUTO ** m = criaMatriz(estante, prateleira);
	digitaMatriz(estante, prateleira, m);
	printf("Digite o valor minimo de produtos: ");
	scanf("%d%*c", &estoque);
	estoqueMinimo(estante, prateleira, m, estoque);
	
	for (int i = 0; i < estante; i++)
	{
		free(m[i]);
	}
	free(m);

    return 0;
}



