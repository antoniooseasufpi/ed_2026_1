#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


struct no {
    int matricula;
    char nome[50];
    No *prox, *ant;
};

No *criar_lista() {
    return NULL;
}

No *inserir_no_inicio(No *lista) {
    No *novo = (No *)malloc(sizeof(No));
    printf("Digite a matrícula: ");
    scanf("%d", &novo->matricula);
    printf("Digite o nome: ");
    scanf("%s", novo->nome);
    novo->ant = NULL;
    novo->prox = lista;
    if (lista != NULL) {
        lista->ant = novo;
    }
    return novo;
}

void mostrar_lista(No *lista) {
    No *atual = lista;

    if (atual->ant == NULL) 
        printf("NULL <- ");
   
    while (atual != NULL) {
        printf("[%d, %s] ", atual->matricula, atual->nome);
        if (atual->prox != NULL)
            printf("<-> ");
        
            atual = atual->prox;
    }
    printf(" -> NULL\n");
}


void liberar_lista(No *lista) {
    No *atual = lista;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }
}