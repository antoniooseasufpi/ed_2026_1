#ifndef LISTA_ENCADEADA_DUPLA_H
#define LISTA_ENCADEADA_DUPLA_H

typedef struct no No;

No *criar_lista();
No *inserir_no_inicio(No *lista);
void mostrar_lista(No *lista);
void liberar_lista(No *lista);

//funcoes para implementar posteriormente
void mostrar_lista_reversa(No *lista);
No *inserir_no_fim(No *lista);
No *remover_do_inicio(No *lista);
No *remover_do_fim(No *lista);
No *remover_por_matricula(No *lista, int matricula);
No *buscar_por_matricula(No *lista, int matricula);
No *inserir_no_ordenado(No *lista);

#endif