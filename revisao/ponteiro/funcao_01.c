/*
Criar uma funcao, chamada `leitura_pointer` que leia 3 valores e os devolva para o metodo main. No metodo main, printar os 3 valores lidos a partir da funcao `leitura_pointer`.
*/

#include <stdlib.h>
#include <stdio.h>

void leitura_pointer(int *p1, int *p2, int *p3){
	scanf("%d", p1);
	scanf("%d", p2);
	scanf("%d", p3);
}

int main(){
	int a, b, c;
	
	leitura_pointer(&a, &b, &c);
	
	printf("%d %d %d \n",a, b, c);

	return 0;
}