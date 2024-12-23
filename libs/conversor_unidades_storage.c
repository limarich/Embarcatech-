#include "conversor_unidades_storage.h"

// Tabela de conversão
static const double conversionFactors[] = {
    1.0,                            // BIT
    8.0,                            // BYTE
    8.0 * 1024,                     // KILOBYTE
    8.0 * 1024 * 1024,              // MEGABYTE
    8.0 * 1024 * 1024 * 1024,       // GIGABYTE
    8.0 * 1024 * 1024 * 1024 * 1024 // TERABYTE
};

double convert_storage(double value, StorageUnit fromUnit, StorageUnit toUnit)
{
    if (fromUnit < 0 || fromUnit > TERABYTE || toUnit < 0 || toUnit > TERABYTE)
    {
        return -1; // Erro: Unidade inválida
    }

    // Converte a unidade atual para bits
    double valueInBits = value * conversionFactors[fromUnit];

    // Converte de bits para unidade escolhida
    double convertedValue = valueInBits / conversionFactors[toUnit];

    return convertedValue;
}
