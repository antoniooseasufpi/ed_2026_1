#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char nome[50];
	int mat, idade;
}Aluno;

int main()
{
	Aluno *classe;
	int n_alunos;
	printf("Informe a qtd de alunos \n");
	scanf("%d", &n_alunos);

	classe = (Aluno *) calloc(n_alunos, sizeof(Aluno));
	for (int i = 0; i < n_alunos; ++i)
	{
		printf("Nome: ");
		scanf("%s", classe[i].nome);
		printf("Informe idade e a matricula de %s ", classe[i].nome);
		scanf("%d%d",&classe[i].idade,&classe[i].mat);
	}

	for (int i = 0; i < n_alunos; ++i)
		printf("Nome: %s | Idade: %d Matricula: %d \n", classe[i].nome, classe[i].idade,classe[i].mat);
	
	free(classe);
	return 0;
}