#include <stdio.h>
#include <stdlib.h> // para system pause
#include <locale.h>
#include <string.h>

// local libraries
#include "libs/conversor_mps_kmh.h"
#include "libs/conversor_unidade_tempo.h"
#include "libs/area.h"

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Variables
    int op = 10;
    double area, valorTempo;
    char saida[3];
    char entrada[3];
    char unidadeEntrada, unidadeSaida;

    // Menu central da aplicação
    do
    {
        printf("\n=====================================================================================================================\n");
        printf("=================================Bem vindo ao Sistema de conversão de unidades=======================================\n");
        printf("------------------------------------------------- Embarca_kit -------------------------------------------------------\n");
        printf("1. Área (milímetros quadrados, centímetros quadrados, metros quadrados, hectômetros quadrados e quilômetro quadrados)\n");
        printf("2. Volume (metros cúbicos, litros, galões)\n");
        printf("3. Comprimento (metro, centímetro, milímetro)\n");
        printf("4. Massa (quilograma, grama, tonelada)\n");
        printf("5. Temperatura (Celsius, Fahrenheit, Kelvin)\n");
        printf("6. Velocidade (km/h, m/s, mph)\n");
        printf("7. Energia (Watts, quilowatts, cavalos-vapor)\n");
        printf("8. tempo (segundos, minutos, horas)\n");
        printf("=====================================================================================================================\n");
        printf("Escolha a conversão desejada: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Qual a unidade da área de entrada (mm, cm, m, ha, km)? ");
            scanf("%s", entrada);
            printf("Qual a unidade da área de saída (mm, cm, m, ha, km)? ");
            scanf("%s", saida);
            if (strcmp(entrada, saida) == 0)
            {
                printf("As unidade de entrada e saída para conversão são iguais.\n");
                printf("Desculpe, mas a execução será finalizada!\n");
                op = 0;
                break;
            }
            printf("Informe o tamanho da área a ser convertida: ");
            scanf("%lf", &area);
            printf("\n");
            if (area <= 0)
            {
                printf("A área informada é menor que 0!\n");
                printf("Desculpe, mas a execução será finalizada!\n");
                op = 0;
                break;
            }
            else if (strcmp(saida, "mm") == 0)
            {
                printf("Área convertida, o valor retornado é: %.15lf\n", convert_to_millimeter(area, entrada));
                printf("O que deseja fazer? Digite:\n");
                printf("0. Para sair\n");
                printf("10. Para retornar ao menu principal\n");
                printf("Digite a escolha: ");
                scanf("%d", &op);
                break;
            }
            else if (strcmp(saida, "cm") == 0)
            {
                printf("Área convertida, o valor retornado é: %.15lf\n", convert_to_centimeter(area, entrada));
                printf("O que deseja fazer? Digite:\n");
                printf("0. Para sair\n");
                printf("10. Para retornar ao menu principal\n");
                printf("Digite a escolha: ");
                scanf("%d", &op);
                break;
            }
            else if (strcmp(saida, "m") == 0)
            {
                printf("Área convertida, o valor retornado é: %.15lf\n", convert_to_meters(area, entrada));
                printf("O que deseja fazer? Digite:\n");
                printf("0. Para sair\n");
                printf("10. Para retornar ao menu principal\n");
                printf("Digite a escolha: ");
                scanf("%d", &op);
                break;
            }
            else if (strcmp(saida, "ha") == 0)
            {
                printf("Área convertida, o valor retornado é: %.15lf\n", convert_to_hectare(area, entrada));
                printf("O que deseja fazer? Digite:\n");
                printf("0. Para sair\n");
                printf("10. Para retornar ao menu principal\n");
                printf("Digite a escolha: ");
                scanf("%d", &op);
                break;
            }
            else if (strcmp(saida, "km") == 0)
            {
                printf("Área convertida, o valor retornado é: %.15lf\n", convert_to_kilometers(area, entrada));
                printf("O que deseja fazer? Digite:\n");
                printf("0. Para sair\n");
                printf("10. Para retornar ao menu principal\n");
                printf("Digite a escolha: ");
                scanf("%d", &op);
                break;
            }
            break;

        case 2:
            break;

        case 8: // Conversão de tempo
            printf("Qual a unidade de entrada (s para segundos, m para minutos, h para horas)? ");
            scanf(" %c", &unidadeEntrada);

            printf("Qual a unidade de saída (s para segundos, m para minutos, h para horas)? ");
            scanf(" %c", &unidadeSaida);

            if (unidadeEntrada == unidadeSaida)
            {
                printf("As unidade de entrada e saída para conversão são iguais.\n");
                printf("Desculpe, mas a execução será finalizada!\n");
                op = 0;
                break;
            }

            printf("Informe o valor do tempo a ser convertido: ");
            scanf("%lf", &valorTempo);

            if (valorTempo <= 0)
            {
                printf("O valor informado é menor ou igual a 0!\n");
                printf("Desculpe, mas a execução será finalizada!\n");
                op = 0;
                break;
            }

            float resultadoTempo = conversor_de_tempo(unidadeEntrada, unidadeSaida, (float)valorTempo);

            if (resultadoTempo == -1)
            {
                printf("Unidade de tempo inválida. Verifique as unidades fornecidas.\n");
                break;
            }

            printf("Tempo convertido: %.2f %c\n", resultadoTempo, unidadeSaida);
            printf("O que deseja fazer? Digite:\n");
            printf("0. Para sair\n");
            printf("10. Para retornar ao menu principal\n");
            printf("Digite a escolha: ");
            scanf("%d", &op);
            break;
        default:
            printf("Opção inválida, digite:\n");
            printf("0. Para sair\n");
            printf("10. Para retornar ao menu principal\n");
            printf("Digite a escolha: ");
            scanf("%d", &op);
            break;
        }
    } while (op != 0);

    system("pause");
    return 1;
}
