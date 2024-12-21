#ifndef _AREA_H_
#define _AREA_H_
#include <stdio.h>
#include <string.h>
/*
  Projeto desenvolvido pelo: Subgrupo 4

  Biblioteca desenvolvida por: Jônatas da Silva <jonatas.silva.roots@gmail.com>
*/

/* Função de conversão de outras unidades de área para metros milimetro quadrado */
double convert_to_millimeter(double value, char *unit)
{
  if (strcmp(unit, "cm") == 0)
  {
    return (double)(value * 1e+2);
  }
  else if (strcmp(unit, "m") == 0)
  {
    return (double)(value * 1e+6);
  }
  else if (strcmp(unit, "km") == 0)
  {
    return (double)(value * 1e+12);
  }
  else if (strcmp(unit, "ha") == 0)
  {
    return (double)(value * 1e+10);
  }
}

/* Função de conversão de outras unidades de área para centímetros quadrado */
long double convert_to_centimeter(double value, char *unit)
{
  if (strcmp(unit, "mm") == 0)
  {
    return (long double)(value * 1e-2);
  }
  else if (strcmp(unit, "m") == 0)
  {
    return (long double)(value * 1e-4);
  }
  else if (strcmp(unit, "km") == 0)
  {
    return (long double)(value * 1e+10);
  }
  else if (strcmp(unit, "ha") == 0)
  {
    return (long double)(value * 1e+8);
  }
}

/* Função de conversão de outras unidades de área para metros quadrados */
double convert_to_meters(double value, const char *unit)
{
  if (strcmp(unit, "mm") == 0)
  {
    return (double)(value * 1e-6);
  }
  else if (strcmp(unit, "cm") == 0)
  {
    return (double)(value * 1e-4);
  }
  else if (strcmp(unit, "km") == 0)
  {
    return (double)(value * 1e+6);
  }
  else if (strcmp(unit, "ha") == 0)
  {
    return (double)(value * 1e+4);
  }
}

/* Função de conversão de outras unidades de área para quilômetros quadrados */
double convert_to_kilometers(double value, char *unit)
{
  double result = 0.0;
  if (strcmp(unit, "mm") == 0)
  {
    result = (double)value * 1e-12;
    return result;
  }
  else if (strcmp(unit, "cm") == 0)
  {
    result = (double)value * 1e-10;
    return result;
  }
  else if (strcmp(unit, "m") == 0)
  {
    result = (double)value * 1e-6;
    return result;
  }
  else if (strcmp(unit, "ha") == 0)
  {
    result = (double)value * 1e-2;
  }
  return (double)result;
}

#endif