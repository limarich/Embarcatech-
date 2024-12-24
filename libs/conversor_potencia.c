// potencia.c
#include "conversor_potencia.h"
#include <string.h> // Certifique-se de incluir essa biblioteca para usar strcmp

// Função para converter potência
// Aceita unidades: W (Watts), k (Kilowatts), c (Cavalos-vapor)
double conversor_potencia(double valor,  char fromUnit, char toUnit) {
    double result = -1;

    // Converter de Watts para outras unidades
    if (strcmp(fromUnit, "W") == 0 || strcmp(fromUnit, "w") == 0) {
        if (strcmp(toUnit, "KW") == 0 || strcmp(toUnit, "kw") == 0 || strcmp(toUnit, "Kw") == 0 || strcmp(toUnit, "kW") == 0) {
            result = valor / 1000.0; // Watts para Quilowatts
        } else if (strcmp(toUnit, "CV") == 0 || strcmp(toUnit, "cv") == 0 || strcmp(toUnit, "Cv") == 0 || strcmp(toUnit, "cV") == 0) {
            result = valor / 735.5; // Watts para Cavalos-vapor
        } else if (strcmp(toUnit, "W") == 0 || strcmp(toUnit, "w") == 0) {
            result = valor; // Sem conversão
        }
    }

    // Converter de Quilowatts para outras unidades
    if (strcmp(fromUnit, "KW") == 0 || strcmp(fromUnit, "kw") == 0 || strcmp(fromUnit, "Kw") == 0 || strcmp(fromUnit, "kW") == 0) {
        if (strcmp(toUnit, "W") == 0 || strcmp(toUnit, "w") == 0) {
            result = valor * 1000.0; // Quilowatts para Watts
        } else if (strcmp(toUnit, "CV") == 0 || strcmp(toUnit, "cv") == 0 || strcmp(toUnit, "Cv") == 0 || strcmp(toUnit, "cV") == 0) {
            result = (valor * 1000.0) / 735.5; // Quilowatts para Cavalos-vapor
        } else if (strcmp(toUnit, "KW") == 0 || strcmp(toUnit, "kw") == 0 || strcmp(toUnit, "Kw") == 0 || strcmp(toUnit, "kW") == 0) {
            result = valor; // Sem conversão
        }
    }

    // Converter de Cavalos-vapor para outras unidades
    if (strcmp(fromUnit, "CV") == 0 || strcmp(fromUnit, "cv") == 0 || strcmp(fromUnit, "Cv") == 0 || strcmp(fromUnit, "cV") == 0) {
        if (strcmp(toUnit, "W") == 0 || strcmp(toUnit, "w") == 0) {
            result = valor * 735.5; // Cavalos-vapor para Watts
        } else if (strcmp(toUnit, "KW") == 0 || strcmp(toUnit, "kw") == 0 || strcmp(toUnit, "Kw") == 0 || strcmp(toUnit, "kW") == 0) {
            result = (valor * 735.5) / 1000.0; // Cavalos-vapor para Quilowatts
        } else if (strcmp(toUnit, "CV") == 0 || strcmp(toUnit, "cv") == 0 || strcmp(toUnit, "Cv") == 0 || strcmp(toUnit, "cV") == 0) {
            result = valor; // Sem conversão
        }
    }

    return result;
}
