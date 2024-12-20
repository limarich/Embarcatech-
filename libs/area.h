#ifndef _AREA_H_
#define _AREA_H_
#include <string.h>

float convert_to_meters(float value, const char *unit);
float convert_to_hectare(float value, const char *unit);
float convert_to_kilometers(float value, const char *unit);
float convert_to_millimeter(float value, const char *unit);
float convert_to_centimeter(float value, const char *unit);

#endif