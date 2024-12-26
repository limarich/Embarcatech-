#include <stdio.h>
#include <stdlib.h> // para system pause
#include <locale.h>
#include <string.h>

// local libraries
#include "libs/conversor_mps_kmh.h"
#include "libs/conversor_unidade_tempo.h"
#include "libs/area.h"
#include "libs/conversor_comprimento.h"
#include "libs/temperatura.h"
#include "libs/conversor_unidades_storage.h"
#include "libs/conversor_potencia.h"
#include "libs/conversor_de_volume.h"

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
        printf("2. Volume (metros cúbicos, litros, mililitros)\n");
        printf("3. Comprimento (metro, centímetro, milímetro)\n");
        // printf("4. Massa (quilograma, grama, tonelada)\n");
        printf("4. Temperatura (Celsius, Fahrenheit, Kelvin)\n");
        printf("5. Velocidade (km/h, m/s, mph)\n");
        printf("6. Potencia (Watts, quilowatts, cavalos-vapor)\n");
        printf("7. Tempo (segundos, minutos, horas)\n");
        printf("8. Armazenamento (Bits, Bytes, Kilobytes, Megabytes, Gigabytes, Terabytes)\n");
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
            if (area <= 0)
            {
                printf("A área informada é menor que 0!\n");
                printf("Desculpe, mas a execução será finalizada!\n");
                op = 0;
                break;
            }

            // Conversão da área
            if (strcmp(saida, "mm") == 0)
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
                printf("Área convertida, o valor retornado é:: %.15lf\n", convert_to_meters(area, entrada));
                printf("O que deseja fazer? Digite:\n");
                printf("0. Para sair\n");
                printf("10. Para retornar ao menu principal\n");
                printf("Digite a escolha: ");
                scanf("%d", &op);
                break;
            }
            else if (strcmp(saida, "ha") == 0)
            {
                printf("Área convertida, o valor retornado é:: %.15lf\n", convert_to_hectare(area, entrada));
                printf("O que deseja fazer? Digite:\n");
                printf("0. Para sair\n");
                printf("10. Para retornar ao menu principal\n");
                printf("Digite a escolha: ");
                scanf("%d", &op);
                break;
            }

            else if (strcmp(saida, "km") == 0)
            {
                printf("Área convertida, o valor retornado é:: %.15lf\n", convert_to_kilometers(area, entrada));
                printf("O que deseja fazer? Digite:\n");
                printf("0. Para sair\n");
                printf("10. Para retornar ao menu principal\n");
                printf("Digite a escolha: ");
                scanf("%d", &op);
                break;
            }
            break;

        case 2: // Nova opção para conversão de volume
        {
            float valor;
            char unidadeInicial[3], unidadeFinal[3];

            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            printf("Digite a unidade de origem (l, ml, m3): ");
            scanf("%s", unidadeInicial);

            printf("Digite a unidade de destino (l, ml, m3): ");
            scanf("%s", unidadeFinal);

            float resultadoVolume = conversor_volume(unidadeInicial, unidadeFinal, valor);
            if (resultadoVolume != -1)
                printf("O valor convertido é: %.8f %s\n", resultadoVolume, unidadeFinal);
            else
                printf("ERRO: Unidades inválidas ou conversão não suportada.\n");
        }
        break;

        case 3:
        {
            double value;
            char unidadeAtual[3], unidadeConversao[3];

            printf("Digite o valor a ser convertido: ");
            scanf("%lf", &value);

            printf("Digite a unidade de origem (mm, cm, m): ");
            scanf("%s", unidadeAtual);

            printf("Digite a unidade de destino (mm, cm, m): ");
            scanf("%s", unidadeConversao);

            double resultadoComprimento = conversor_comprimento(value, unidadeAtual, unidadeConversao);

            if (resultadoComprimento != -1)
                printf("O valor convertido é: %.6lf %s\n", resultadoComprimento, unidadeConversao);
            else
                printf("ERRO: Unidades inválidas ou conversão não suportada.\n");
        }
        break;

        case 4: // Conversão de temperatura
        {
            float inputTemp;
            char inputUnit, outputUnit;

            printf("Insira a temperatura e a unidade de origem (ex: 100 C): ");
            scanf("%f %c", &inputTemp, &inputUnit);

            printf("Para qual unidade você deseja converter? (C, F, K): ");
            scanf(" %c", &outputUnit);

            float convertedTemp = converterTemperatura(inputTemp, inputUnit, outputUnit);

            if (convertedTemp != -1)
                printf("A temperatura convertida é: %.2f %c\n", convertedTemp, outputUnit);
            else
                printf("ERRO: Unidades inválidas ou conversão não suportada.\n");
        }
        break;

        case 5: // Conversão de Velocidade
        {
            float mps, kmh;
            printf("Digite a velocidade em metros por segundo (m/s): ");

            // Valida a entrada do usuário
            if (scanf("%f", &mps) != 1)
            {
                printf("Entrada inválida. Por favor, insira um número.\n");
                break;
            }

            // Fórmula de conversão
            kmh = mps * 3.6;

            printf("%.2f metros por segundo equivalem a %.2f quilômetros por hora.\n", mps, kmh);
        }
        break;

        case 6: // Conversão de potência
        {
            double valorPotencia;
            char unidadeOrigem[3], unidadeDestino[3];

            printf("Digite o valor da potência a ser convertido: ");
            scanf("%lf", &valorPotencia);

            printf("Digite a unidade de origem (W, kW, cv): ");
            scanf("%s", unidadeOrigem);

            printf("Digite a unidade de destino (W, kW, cv): ");
            scanf("%s", unidadeDestino);

            double resultadoPotencia = conversor_potencia(valorPotencia, unidadeOrigem, unidadeDestino);

            if (resultadoPotencia != -1)
                printf("A conversão de %.2lf %s é %.2lf %s.\n", valorPotencia, unidadeOrigem, resultadoPotencia, unidadeDestino);
            else
                printf("ERRO: Conversão inválida ou não suportada.\n");
        }
        break;

        case 7: // Conversão de tempo
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
                printf("Unidade de tempo inválida. Verifique as unidades fornecidas.\n");
            else
                printf("Tempo convertido: %.2f %c\n", resultadoTempo, unidadeSaida);
            break;

        case 8: // Conversão de unidades de armazenamento
        {
            double value;
            int fromUnit, toUnit;

            printf("Digite o valor a ser convertido: ");
            scanf("%lf", &value);

            printf("Escolha a unidade de origem:\n");
            printf("0 - Bit\n1 - Byte\n2 - Kilobyte\n3 - Megabyte\n4 - Gigabyte\n5 - Terabyte\n");
            scanf("%d", &fromUnit);

            printf("Escolha a unidade de destino:\n");
            printf("0 - Bit\n1 - Byte\n2 - Kilobyte\n3 - Megabyte\n4 - Gigabyte\n5 - Terabyte\n");
            scanf("%d", &toUnit);

            double convertedValue = convert_storage(value, (StorageUnit)fromUnit, (StorageUnit)toUnit);

            if (convertedValue != -1)
                printf("Resultado: %.6f\n", convertedValue);
            else
                printf("ERRO: Unidades inválidas ou conversão não suportada.\n");
        }
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
