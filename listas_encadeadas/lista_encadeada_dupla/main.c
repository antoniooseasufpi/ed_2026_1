#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    No *lista = criar_lista();
    int opcao;

    do {
        printf("1. Inserir no início\n");
        printf("2. Mostrar lista\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lista = inserir_no_inicio(lista);
                break;
            case 2:
                mostrar_lista(lista);
                break;
            case 3:
                liberar_lista(lista);
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 3);

    return 0;
}