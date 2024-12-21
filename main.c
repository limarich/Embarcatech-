#include <stdio.h>
#include <locale.h>
#include <string.h>

// local libraries
#include "conversor_mps_kmh.h"

int main()
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  // Variables
  int op = 10;
  double area;
  char saida[3];
  char entrada[3];

  // Menu central da aplicação
  do
  {
    printf("\n=================================================================================================================\n");
    printf("=================================Bem vindo ao Sistema de conversão de unidades=====================================\n");
    printf("--------------------------------------------------- Embarca_kit ---------------------------------------------------\n");
    printf("Escolha a conversão desejada:");
    printf("1. Área (milímetros quadrados, centímetros quadrados, metros quadrados, hectômetros quadrados e quilômetro quadrados)");
    printf("2. Volume (metros cúbicos, litros, galões)");
    printf("3. Comprimento (metro, centímetro, milímetro) ");
    printf("4. Massa (quilograma, grama, tonelada)");
    printf("5. Temperatura (Celsius, Fahrenheit, Kelvin)");
    printf("6. Velocidade (km/h, m/s, mph)");
    printf("7. Energia (Watts, quilowatts, cavalos-vapor)");
    printf("8. tempo (segundos, minutos, horas)");
    printf("\n=================================================================================================================\n");
    scanf("%d", &op);

  } while (op != 0);

  /*float mps, kmh;

  printf("Digite a velocidade em metros por segundo (m/s): ");

  // Valida a entrada do usuÃ¡rio
  if (scanf("%f", &mps) != 1)
  {
    printf("Entrada inválida! Por favor, insira um número.\n");
    return 1;
  }

  kmh = metros_por_segundo_para_quilometros_por_hora(mps);

  printf("%.2f metros por segundo equivalem a %.2f quilômetros por hora.\n", mps, kmh);*/
  system("pause");
  return 1;
}
