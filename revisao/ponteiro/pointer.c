#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v1, v2, *p1, *p2, temp;

	// aloca os enderecos de memoria
	p1 = &v1;
	p2 = &v2;
	
	scanf("%d",&v1);
	scanf("%d",&v2);

	printf("Antes da troca \n");
	printf("v1 = %d v2 = %d\n",v1,v2);

	temp = *p1; //salvo o valor inicial de contido em *p1
	
	// faz a troca
	*p1 = *p2;
	*p2 = temp;
	printf("Após da troca \n");
	printf("v1 = %d v2 = %d\n",v1,v2);

	return 0;
}