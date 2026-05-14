#include "fila.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    Fila *f = criar_fila();
    int op;

    do{
        printf("1. Inserir na fila\n");
        printf("2. Mostrar fila\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1: {
                inserir_fila(f);
                break;
            }
            case 2:
                mostrar_fila(f);
                break;
            case 3:
                liberar_fila(f);
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while(op != 3);
    return 0;
}