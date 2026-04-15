#include "aluno.h"
#include <stdio.h>

int main()
{
    Aluno* aluno1 = criar_aluno("João Silva", 12345, 7.5);
    Aluno* aluno2 = criar_aluno("Maria Souza", 67890, 8.0);
    
    imprimir_aluno(aluno1);
    imprimir_aluno(aluno2);

    printf("Aluno %s\n", get_nome(aluno2));

    liberar_memoria(aluno1);
    liberar_memoria(aluno2);

    
    return 0;
}
