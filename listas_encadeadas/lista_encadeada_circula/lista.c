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

No *inserir_no_final(No *lista){
	No *novo = (No*) malloc(sizeof(No));
	printf("Informe o nome \n");
	scanf("%s", novo->nome);
	printf("Informe a matricula de %s \n", novo->nome);
	scanf("%d", &novo->matricula);
	if(lista == NULL){
		novo->prox = novo;
		return novo;
	}
	else{
		No *aux = lista;
		while(aux->prox != lista){
			aux = aux->prox;
		}
		aux->prox = novo;
		novo->prox = lista;
	return lista;
	}
}


void mostrar_lista(No *lista){
	if(lista == NULL){
		printf("Lista vazia \n");
	}
	else{
		No *aux = lista;
		do{
			printf("Nome: %s Mat: %d \n", aux->nome, aux->matricula);
			aux = aux->prox;
		}while(aux != lista);
	}
}