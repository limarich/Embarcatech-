#include "conversor_mps_kmh.h"
#include <stdio.h>

int main()
{
    float mps, kmh;

    printf("Digite a velocidade em metros por segundo (m/s): ");

    // Valida a entrada do usuário
    if (scanf("%f", &mps) != 1)
    {
        printf("Entrada inválida! Por favor, insira um número.\n");
        return 1;
    }

    kmh = metros_por_segundo_para_quilometros_por_hora(mps);

    printf("%.2f metros por segundo equivalem a %.2f quilômetros por hora.\n", mps, kmh);
    return 0;
}
