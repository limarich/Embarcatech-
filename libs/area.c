#ifndef _AREA_H_
#define _AREA_H_
#include <string.h>
/*
  Projeto desenvolvido pelo: Subgrupo 4
*/

// constantes para multiplicação
#define MM2_PARA_M2 0.000001
#define CM2_PARA_M2 0.0001
#define KM2_PARA_M2 1000000.0
#define HA_PARA_M2 10000.0

/* Função de conversão de outras unidades de área para metros quadrados */
float convert_to_meters(float value, const char *unit)
{
  if (strcmp(unit, "mm") == 0)
  {
    return value * MM2_PARA_M2;
  }
  else if (strcmp(unit, "cm") == 0)
  {
    return value * CM2_PARA_M2;
  }
  else if (strcmp(unit, "km") == 0)
  {
    return value * KM2_PARA_M2;
  }
  else if (strcmp(unit, "ha") == 0)
  {
    return value * HA_PARA_M2;
  }
}

#endif