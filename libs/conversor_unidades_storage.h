#ifndef CONVERSOR_UNIDADES_STORAGE_H
#define CONVERSOR_UNIDADES_STORAGE_H

typedef enum
{
    BIT,
    BYTE,
    KILOBYTE,
    MEGABYTE,
    GIGABYTE,
    TERABYTE
} StorageUnit;

double convert_storage(double value, StorageUnit fromUnit, StorageUnit toUnit);

#endif
