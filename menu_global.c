#include <stdio.h>
#include "libs/menu_global.h"
#include "libs/conversor_potencia.h"

void executar_menu_global() {
    const char *opcoes_menu[] = {

      // adicionar mais opções conforme necessário
        "Conversor de Potência",
        "Sair"
    };

    int opcao;
    do {
        printf("\nEscolha uma funcionalidade:\n");
        for (int i = 0; i < 2; i++) {
            printf("%d. %s\n", i + 1, opcoes_menu[i]);
        }
        printf("\nDigite a opcao desejada: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Por favor, insira um numero.\n");
            while (getchar() != '\n'); // Limpar o buffer
            continue;
        }

        switch (opcao) {
            case 1:
                executar_menu_conversor_potencia();
                break;
            case 2:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida! Por favor, tente novamente.\n");
                break;
        }
    } while (opcao != 2);
}
