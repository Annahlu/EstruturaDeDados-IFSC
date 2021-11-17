#include <stdlib.h> /* malloc, free, exit */
#include <stdio.h> /* printf */
#include "radio.h"
#include <string.h>

typedef struct musica {
  char nome[100];
  char artista[10];
  char horario;
  char data;
} musica;

void add_musica(char* nome){
    musica* M =  (musica*) malloc(sizeof(musica));
    printf("oi\n");
    /*o erro ta aqui*/
    strcpy(&M->nome, nome); /*Da string.h*/
    printf("o nome da musica eh: %s",M->nome);
    printf("oi\n");

    free(M);
}

