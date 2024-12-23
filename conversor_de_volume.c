#include <stdio.h>
#include <string.h>
#include "conversor_de_volume.h"

// Unidades de volume (litro, mililitro, metros cúbicos)
//l = litros , ml = mililitros , m3= metros cubicos
float conversor_volume(char unidade_inicial[], char unidade_final[], float valor) {
    float resultado = 0;
    if (strcmp(unidade_inicial, "l") == 0) {
        if (strcmp(unidade_final, "ml") == 0) {
            resultado = valor * 1000;
        } else if (strcmp(unidade_final, "m3") == 0) {
            resultado = valor * 0.001;
        }
    } else if (strcmp(unidade_inicial, "ml") == 0) {
        if (strcmp(unidade_final, "l") == 0) {
            resultado = valor / 1000;
        } else if (strcmp(unidade_final, "m3") == 0) {
            resultado = valor / 1000000;
        }
    } else if (strcmp(unidade_inicial, "m3") == 0) {
        if (strcmp(unidade_final, "l") == 0) {
            resultado = valor * 1000;
        } else if (strcmp(unidade_final, "ml") == 0) {
            resultado = valor * 1000000;
        }
    } else {
        printf("conversão incorreta!\n");
    }
    printf("O resultado é: %.8f\n", resultado);

    return resultado;
}