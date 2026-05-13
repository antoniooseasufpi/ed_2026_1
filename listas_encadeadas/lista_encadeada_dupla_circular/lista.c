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

No *inserir_no_inicio(No *lista){
    No *novo = (No *)malloc(sizeof(No));
    
    printf("Digite a matrícula: ");
    scanf("%d", &novo->matricula);
    printf("Digite o nome: ");
    scanf("%s", novo->nome);

    if (lista == NULL) {
        novo->prox = novo->ant = novo;
        return novo;
    }

    No *ultimo = lista->ant; // Último nó da lista

    // Inserção no início
    novo->prox = lista;
    novo->ant = ultimo;
    ultimo->prox = novo;
    lista->ant = novo;

    return novo; // Novo nó se torna o primeiro da lista
}
