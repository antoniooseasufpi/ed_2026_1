#ifndef LISTA_H
#define LISTA_H

typedef struct no No;

No *criar_lista();
No *inserir_no_inicio(No *lista);

void mostrar_lista(No *lista);
void liberar_lista(No *lista);

//implementar as funcoes abaixo
No *inserir_no_final(No *lista);
int remover_no(No *lista, int matricula);
No *buscar_no(No *lista, int matricula);

//aluno é inserido pelo valor da matricula em ordem crescente
No *inserir_no_ordenado_matricula(No *lista);

#endif