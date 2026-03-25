#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int tamanho;
	scanf("%d", &tamanho);

	char *nome;
	nome = (char *) malloc(tamanho * sizeof(char));
	if (!nome){
		printf("Alocaca falhou\n");
		exit(1);
	}

	scanf("%s", nome);
	printf("Oi, seu nome é %s! Obg \n",nome);

	free(nome);
	return 0;
}