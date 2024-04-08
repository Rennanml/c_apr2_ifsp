#include <stdio.h>
#include <string.h>

void olaMundo(){
	printf("Ola mundo!\n");
}

void doisInt(){
	int a, b;
	printf("Digite dois numeros inteiros: \n");
	scanf("%d %d%*c", &a, &b);
	printf("%d", a+b);
}

void duasStrings(){
	char string1[30], string2[30];
	printf("Digite a string 1\n");
	gets(string1);
	printf("Digite a string 2\n");
	gets(string2);
	strcat(string1, " ");
	strcat(string1, string2);
	puts(string1);
	
}

double maiorEntre(double x, double y){
	return (x > y) ? x : y;
}

int maiorArray(){
	int valores[4] = {1, 4, 99, 0};
	int maior = valores[0];
	for (int i = 0; i < 4; i++)
	{
		if (valores[i] > maior)
		{
			maior = valores[i];
		}
	}
	return maior;
}

typedef struct{
	char autor[30];
	char titulo[60];
	int ano;
} Livro;

void printarStru(Livro livro){
	printf("Titulo: %s\n", livro.titulo);
	printf("Autor: %s\n", livro.autor);
	printf("Ano: %d\n", livro.ano);
}

typedef struct
{
	int id;
	double saldo;
	char titular[50];
	
}Banco;

Banco maisRico(Banco conta1, Banco conta2)
{
	return (conta1.saldo > conta2.saldo) ? conta1 : conta2; 
}

typedef struct{
	char nome[50];
	float nota1;
	float nota2;
	char email[70];
	float media;
}Aluno;


Aluno alunos(Aluno aluno)
{
	strcpy(aluno.nome, "Rennan");
	strcpy(aluno.email, "rennan.lazarini@ifsp.com");
	aluno.nota1 = 10;
	aluno.nota2 = 8;
	aluno.media = (float) (aluno.nota1 + aluno.nota2) / 2;
	
	return aluno;
}

int main(int argc, char **argv)
{
	//int maior;
	//olaMundo();
	//doisInt();
	//duasStrings();
	//maior = maiorArray();
	//printf("%d", maior);
	//printf("%.2lf", maiorEntre(6, 12));
	
	
	
	//Livro livro;
	
	//livro.ano = 2024;
	//strcpy(livro.autor, "Rennan");
	//strcpy(livro.titulo, "O retorno do nana");
	
	//printarStru(livro);



	//Banco rennan, ellon;
	
	//rennan.id = 10;
	//ellon.id = 5;
	//rennan.saldo = 1000000000000;
	//ellon.saldo = 1000000;
	//strcpy(rennan.titular, "Rennan");
	//strcpy(ellon.titular, "Ellon musk");
	//printf("%s o mais rico de todos!\n", maisRico(rennan, ellon).titular);

	
	Aluno aluno;
	
	aluno = alunos(aluno);
	
	printf("Nome: %s\n", aluno.nome);
	printf("Email: %s\n", aluno.email);
	printf("Media: %.1f", aluno.media);
	

	
	return 0;
}

