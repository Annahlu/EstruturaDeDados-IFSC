#include <stdio.h>
#include <stdlib.h>
#include "radio.h"

int main()
{
    char nome[10];
    printf("digite o nome de uma musica \n");
    scanf("%s", nome);
    add_musica(nome);

    free(nome);

    return 0;
}
