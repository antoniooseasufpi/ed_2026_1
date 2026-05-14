#include "fila.h"
#include <stdio.h>
#include <stdlib.h>


struct no {
    char nome[50];
    int mat;
    No *prox;
};

struct fila {
    No *inicio;
    No *fim;
};

Fila *criar_fila() {
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void inserir_fila(Fila *f) {
    No *novo = (No *)malloc(sizeof(No));
    printf("Digite o nome do aluno: ");
    scanf("%s", novo->nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &novo->mat);

    novo->prox = NULL;

    if (f->fim == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}

void mostrar_fila(Fila *f) {
    No *atual = f->inicio;
    while (atual != NULL) {
        printf("Nome: %s, Matricula: %d\n", atual->nome, atual->mat);
        atual = atual->prox;
    }
}

void liberar_fila(Fila *f) {
    No *atual = f->inicio;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(f);
}