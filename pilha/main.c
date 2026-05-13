#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    Pilha* p = criar_pilha();
    int op;
    do{
        printf("1 - Adicionar aluno\n");
        printf("2 - Mostrar alunos\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        
        switch(op){
            case 1:
                push(p);
                break;
            case 2:
                mostrar_pilha(p);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }while (op != 3);
    
    return 0;
}
