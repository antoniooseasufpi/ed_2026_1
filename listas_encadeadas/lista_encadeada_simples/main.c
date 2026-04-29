#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	No *lista_alunos;
	lista_alunos = criar_lista();
	
	lista_alunos = inserir_no_inicio(lista_alunos);
	lista_alunos = inserir_no_inicio(lista_alunos);
	lista_alunos = inserir_no_inicio(lista_alunos);
	
	mostrar_lista(lista_alunos);

	return 0;
}