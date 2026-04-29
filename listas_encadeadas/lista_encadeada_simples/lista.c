#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

struct no
{
	//informacoes uteis para o usuario
	char nome[100];
	int matricula;
	//apontador para o pro elemento
	struct no *prox;	
};


No *criar_lista(){
	return NULL;
}

No *inserir_no_inicio(No *lista){
	No *novo = (No*) malloc(sizeof(No));
	printf("Informe o nome \n");
	scanf("%s", novo->nome);
	printf("Informe a matricula de %s \n", novo->nome);
	scanf("%d", &novo->matricula);
	novo->prox = lista;
	return novo;
}
void mostrar_lista(No *lista){
	No *aux = lista;
	while(aux != NULL){
		printf("Nome: %s Mat: %d \n", aux->nome, aux->matricula);
		aux = aux->prox;
	}
}
void liberar_lista(No *lista){
	No *temp = NULL;
	while(lista != NULL){
		temp = lista;
		lista = lista->prox;	
		free(temp);
	}
}