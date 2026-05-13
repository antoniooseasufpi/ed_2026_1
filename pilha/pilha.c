#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

struct no{
    char nome[100];
    int mat;
    struct no* prox;
};

struct pilha{
    No* topo;
};

Pilha *criar_pilha() {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void push(Pilha* p) {
    No* novo_no = (No*) malloc(sizeof(No));
    printf("Digite o nome do aluno: ");
    scanf("%s", novo_no->nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &novo_no->mat);

    novo_no->prox = p->topo;
    p->topo = novo_no;
}

void pop(Pilha* p) {
    if (pilha_vazia(p)) {
        printf("Pilha vazia. Nao ha alunos para remover.\n");
        return;
    }
    No* temp = p->topo;
    p->topo = p->topo->prox;
    free(temp);
}

void mostrar_pilha(Pilha* p) {
    No* atual = p->topo;
    while (atual != NULL) {
        printf("Nome: %s, Matricula: %d\n", atual->nome, atual->mat);
        atual = atual->prox;
    }
}

void liberar_pilha(Pilha* p) {
    while (!pilha_vazia(p)) {
        pop(p);
    }
    free(p);
}

int pilha_vazia(Pilha* p) {
    return p->topo == NULL;
}

int topo(Pilha* p) {
    if (pilha_vazia(p)) {
        printf("Pilha vazia. Nao ha alunos no topo.\n");
        return -1; // Retorna -1 para indicar que a pilha está vazia
    }
    return p->topo->mat;
}
