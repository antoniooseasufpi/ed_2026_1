#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct aluno{
	char nome[100];
	int matricula;
	float nota_final;
};

Aluno* criar_aluno(char* nome, int matricula, float nota_final){
	Aluno* aluno = (Aluno*) malloc(sizeof(Aluno));
	if(aluno == NULL){
		return NULL;
	}
	
	strcpy(aluno->nome, nome);
	aluno->matricula = matricula;
	aluno->nota_final = nota_final;
	
	return aluno;
}

char* get_nome(Aluno* aluno){
	return aluno->nome;
}

int get_matricula(Aluno* aluno){
	return aluno->matricula;
}

float get_nota_final(Aluno* aluno){
	return aluno->nota_final;
}

bool aluno_aprovado(Aluno* aluno){
	return aluno->nota_final >= 6.0;
}

void alterar_nota_final(Aluno* aluno, float nova_nota){
	if (nova_nota >= 0.0 && nova_nota <= 10.0) {
		aluno->nota_final = nova_nota;
	}
	else {
		printf("Nota inválida. A nota deve ser entre 0.0 e 10.0.\n");
	}
}

void imprimir_aluno(Aluno* aluno){
	printf("Nome: %s\n", aluno->nome);
	printf("Matrícula: %d\n", aluno->matricula);
	printf("Nota Final: %.2f\n", aluno->nota_final);
}

void liberar_memoria(Aluno* aluno){
	free(aluno);
}