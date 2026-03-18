#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

void capturar(int n, float *vet){
	for (int i = 0; i < n; i++)
		vet[i] = rand() % 1000;
	}

float media(int n, float *vet){
	float soma = vet[0];

	for (int i = 1; i < n; i++)
		soma += *(vet + i);
	return soma / n;
}

float variancia(int n, float *vet, float media) {
    float soma_variancia = 0.0;
    for (int i = 0; i < n; i++) {
        float diferenca = vet[i] - media;
        soma_variancia += diferenca * diferenca;
    }
    return sqrt(soma_variancia / n);
}

void print_vetor(int n, float *vet){	
	for (int i = 0; i < n; i++)
		printf("%.1f ", vet[i]);
}

void inverter_vetores(int n, float *vet){
    for (int i = 0; i < n / 2; ++i)
    {
        float temp = vet[i];
        // O elemento da frente recebe o de trás
        vet[i] = vet[n - 1 - i];     
        // O de trás recebe o que estava na frente, ito é, Salvo em temp
        vet[n - 1 - i] = temp;       
    }
}


int main()
{
	srand(time(NULL)); // evitar numeros repetidos

	float vet[10], m, v;
	int n = 10;

	capturar(n, vet);

	m = media(n, vet);
	v = variancia(n, vet, m);

	printf("Vetor antes da troca \n");
	print_vetor(n, vet);
	// printf("\nMedia: %.2f \nVariance: %.2f ", m, v);
	inverter_vetores(n, vet);
	printf("\nVetor apos a troca \n");
	print_vetor(n, vet);

	return 0;
}