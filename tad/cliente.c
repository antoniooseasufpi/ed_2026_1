#include "calculadora.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	
	int x, y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	// printf("%s ", argv[1]);

	printf("Soma: %d\n", soma(x, y));
	printf("Subtracao: %d\n", sub(x, y));
	printf("Multiplicacao: %d\n", mult(x, y));
	printf("Divisao: %.2f\n", divisao(x, y));

	return 0;
}