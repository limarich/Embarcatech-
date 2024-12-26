#include <stdio.h>
#include <string.h>

/*
  Projeto desenvolvido pelo: Subgrupo 4

  Biblioteca desenvolvida por: Emily Lorane da Silva Cerqueira <emilycerqueiraeng@gmail.com>
*/

double conversor_comprimento(double value, const char* unidadeAtual, const char* unidadeConversao)
{
  if (strcmp(unidadeAtual, "cm") == 0) { //centímetros
    value = strcmp(unidadeConversao, "m") == 0 ? value / 100 : value * 10;

  } else if (strcmp(unidadeAtual, "m") == 0){ //metros
    value = strcmp(unidadeConversao, "cm") == 0 ? value * 100 : value * 1000;

  } else if (strcmp(unidadeAtual, "mm") == 0){ //milímetros
    value = strcmp(unidadeConversao, "m") == 0 ? value / 1000 :  value / 10;

  } else { //entrada inválida
    printf("Unidade atual inválida.\n"); 
    return -1; //retornar erro
  }

  return value;
}
