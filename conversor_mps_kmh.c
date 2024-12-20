// conversor de velocidade
#include <stdio.h>
#include "conversor_mps_kmh.h"

// Implementação da função de conversão
void metros_por_segundo_para_kilometros_por_hora() {
    float mps, kmh;
    printf("Digite a velocidade em metros por segundo (m/s): ");

    // Valida a entrada do usuário
    if (scanf("%f", &mps) != 1) {
        printf("Entrada inválida. Por favor, insira um número.\n");
        return;
    }

    // Fórmula de conversão
    kmh = mps * 3.6;

    printf("%.2f metros por segundo equivalem a %.2f quilômetros por hora.\n", mps, kmh);
}