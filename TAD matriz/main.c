#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

//exemplo simples de programa que fario uso do TAD
int main(int argc, char *argv[])
{
  float a,b,c,d;
  Matriz *M;

  printf("Comecando o programa...\n");

  // criação de uma matriz
  M = cria(5,5);

  // inserção de valores na matriz
  atribui(M,1,2,21);
  atribui(M,2,3,3);
  atribui(M,3,0,15);
  atribui(M,4,1,21);

  // verificando se a inserção foi feita corretamente
  a = acessa(M,1,2);
  b = acessa(M,2,3);
  c = acessa(M,3,0);
  d = acessa(M,4,1);

  printf("O valor da variavel a eh: %f\n", a);
  printf("Programa terminado\nParabens, voce arrasou!!!\n");

  system("PAUSE");
  return 0;
}
