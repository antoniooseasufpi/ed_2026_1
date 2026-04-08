#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//alocar a parte inicial da matriz
int **alocar_matriz(int l, int c){
	int **mat;
	mat = (int**) calloc(l, sizeof(int*));
	if (mat == NULL){//verificar se a alocacao esta OK
		printf("Alocacao falhou!");
		exit(1);
	}
	//alocar a part mais interna, i. e., a parte das colunas para cada *int em mat(**)
	for (int i = 0; i < l; ++i){
		mat[i] = (int*) calloc(c, sizeof(int));
		if (mat[i] == NULL){//verificar se a alocacao esta OK
			printf("Alocacao falhou!");
			exit(1);
		}
	}
	return mat;
}

//preencher a matriz com numeros randomicos ate 200
void preencer_matriz(int **mat, int l, int c){
	for (int i = 0; i < l; ++i)
		for (int j = 0; j < c; ++j)
			mat[i][j] = rand() % 200;
}

//mostrar a matriz
void mostrar_matriz(int **mat, int l, int c){
	for (int i = 0; i < l; ++i){
		for (int j = 0; j < c; ++j)
			printf("%d ", mat[i][j]);
		printf("\n");
	}

}

//liberar memoria alocada
void liberar_memoria(int **mat, int linhas){
	for (int i = 0; i < linhas; ++i)
		free(mat[i]);
	free(mat);
}

int main()
{
	srand(time(NULL));
	int **mat, colunas, linhas, valor;

	printf("Infor o numero de linhas e colunas \n");
	scanf("%d%d",&linhas,&colunas);

	mat = alocar_matriz(linhas, colunas);
	preencer_matriz(mat, linhas, colunas);
	mostrar_matriz(mat, linhas, colunas);

	printf("INforme o valor a ser buscado na matriz");
	scanf("%d", &valor);

	for (int i = 0; i < linhas; ++i){
		for (int j = 0; j < colunas; ++j)
			if (mat[i][j] == valor)
			{
				printf("linha %d | coluna %d",i,j);
			}
	}

	liberar_memoria(mat, linhas);

	return 0;

}