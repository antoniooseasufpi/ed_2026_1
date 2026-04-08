/*
Questao 1:
- desenvolver um algotimo que leia do telcado um valor X, o qual servirá como tamaho de um vetor vet;
- desenvolver uma funcao que faca a alocacao desse vetor para X posicoes e devolva o valor de memoria alocado;
- desenvolver uma funcao que preencha randomicamente esse vetor com numeros aleatorios
- funcao para mostrar o vetor lido
- libear a memoria alocada

Questao 2:
- aproveitando o escopo da questao 1, crie uma nova funcao que receebea o vetor oriignal, e faca um
redimensionamento utilziando realloc para um veotr que represente o dobro do tamanho do vetor original;
- com esse novo vetor duplicado, preencher nas novas posicoes valores lidos informados pelo usuário
- utilize a funcao de mostrar o vetor apenas para os novos valores;
- desenvolva uma funcao que receba o vetor e verique se um valor Y informado pelo usuario ocorre no vetor
e quantas vezes, ele ocorre
- crie uma funcao que a receba o vetor novo, e compute: a media dos valores lá contidos
*/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>


float **alocar_memoria_matriz
//alocacao de memoria
float *alocar_memoria(int x){
	// alocando a memoria em X posicoes
	float *vet = (float *) calloc(x, sizeof(float));
	
	//checar se a memoria alocada foi sucesso
	if (!vet)
	{
		printf("Alocacao falhou! \n");
		exit(1);
	}

	//retorna o bloco alocado
	return vet;
} 

//funcao para mostrar o vetor
void mostrar_vetor(float *vet, int x){
	for (int i = 0; i < x; i++)
		printf("%.1f ", vet[i]);
}

//alimentar o vetor
void preencher_vetor(float *vet, int x){
	for (int i = 0; i < x; i++)
		vet[i] = rand() % 999;
}

void liberar_memoria(void *vet){
	free(vet);
	printf("\nMemoria desalocada com sucesso! ");
}

int main()
{
	float *vet;
	int x;
	printf("Informe um valor para o tamanho do vetor ");
	scanf("%d", &x);
	vet = alocar_memoria(x);
	preencher_vetor(vet, x);
	mostrar_vetor(vet, x);
	liberar_memoria(vet);
	return 0;
}
