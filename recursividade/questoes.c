#include <stdlib.h>
#include <stdio.h>

int soma_vetor(int *vet, int n){
	if (n == 1)
		return vet[0];

	return vet[n-1] + soma_vetor(vet, n -1);
}

int main()
{
	int vet[] = {1, 2, 3, 4, 5};

	printf("%d \n", soma_vetor(vet, 5));
	return 0;
}