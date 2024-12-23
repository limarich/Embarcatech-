// potencia.c
#include "conversor_potencia.h"

// Função para converter potência
// Aceita unidades: W (Watts), k (Kilowatts), c (Cavalos-vapor)
double conversor_potencia(double valor, char fromUnit, char toUnit) {
    double result = -1;

    // Converter de Watts para outras unidades
    if (fromUnit == 'W' || fromUnit == 'w') {
        if (toUnit == 'KW' || toUnit == 'kw'|| toUnit == 'Kw'|| toUnit == 'kW') {
            result = valor / 1000.0; // Watts para Quilowatts
        } else if (toUnit == 'CV' || toUnit == 'cv'|| toUnit == 'Cv'|| toUnit == 'cV') {
            result = valor / 735.5; // Watts para Cavalos-vapor
        } else if (toUnit == 'W' || toUnit == 'w') {
            result = valor; // Sem conversão
        }
    }

    // Converter de Quilowatts para outras unidades
    if (fromUnit == 'KW' || fromUnit == 'kw'|| fromUnit == 'Kw'|| fromUnit == 'kW') {
        if (toUnit == 'W' || toUnit == 'w') {
            result = valor * 1000.0; // Quilowatts para Watts
        } else if (toUnit == 'CV' || toUnit == 'cv'|| toUnit == 'Cv'|| toUnit == 'cV') {
            result = (valor * 1000.0) / 735.5; // Quilowatts para Cavalos-vapor
        } else if (toUnit == 'KW' || toUnit == 'kw'|| toUnit == 'Kw'|| toUnit == 'kW') {
            result = valor; // Sem conversão
        }
    }

    // Converter de Cavalos-vapor para outras unidades
    if (fromUnit == 'CV' || fromUnit == 'cv'|| fromUnit == 'Cv'|| fromUnit == 'cV') {
        if (toUnit == 'W' || toUnit == 'w') {
            result = valor * 735.5; // Cavalos-vapor para Watts
        } else if (toUnit == 'KW' || toUnit == 'kw'|| toUnit == 'Kw'|| toUnit == 'kW') {
            result = (valor * 735.5) / 1000.0; // Cavalos-vapor para Quilowatts
        } else if (toUnit == 'CV' || toUnit == 'cv'|| toUnit == 'Cv'|| toUnit == 'cV') {
            result = valor; // Sem conversão
        }
    }

    return result;
}
