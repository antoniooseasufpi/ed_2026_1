#ifndef ALUNO_H
#define ALUNO_H

typedef struct aluno Aluno;
Aluno *criar_aluno(char nome[], int matricula, float nota_final);
char *get_nome(Aluno *aluno);
int get_matricula(Aluno *aluno);
float get_nota_final(Aluno *aluno);
bool aluno_aprovado(Aluno *aluno);
void imprimir_aluno(Aluno *aluno);
void alterar_nota_final(Aluno *aluno, float nova_nota);
void liberar_memoria(Aluno *aluno);

#endif