#include <stdio.h>
#include "libs/menu_conversor_potencia.h"
#include "libs/conversor_potencia.h"

void executar_menu_conversor_potencia() {
    const char *opcoes_menu[] = {
        "Watts (W) para Quilowatts (kW)",
        "Watts (W) para Cavalos-vapor (hp)",
        "Quilowatts (kW) para Watts (W)",
        "Quilowatts (kW) para Cavalos-vapor (hp)",
        "Cavalos-vapor (hp) para Watts (W)",
        "Cavalos-vapor (hp) para Quilowatts (kW)",
        "Voltar"
    };

    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Potência:\n");
        for (int i = 0; i < 7; i++) {
            printf("%d. %s\n", i + 1, opcoes_menu[i]);
        }
        printf("\nDigite a opcao desejada: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Por favor, insira um numero.\n");
            while (getchar() != '\n'); // Limpar o buffer
            continue;
        }

        if (opcao == 7) {
            break;
        }

        printf("Digite o valor para conversao: ");
        if (scanf("%f", &valor) != 1) {
            printf("Entrada invalida! Por favor, insira um numero valido.\n");
            while (getchar() != '\n'); // Limpar o buffer
            continue;
        }

        resultado = realizar_conversao(opcao, valor);
        if (resultado >= 0) {
            printf("Resultado da conversao: %.2f\n", resultado);
        } else {
            printf("Opcao invalida! Por favor, tente novamente.\n");
        }
    } while (1);
}
