#include <stdio.h>
#include <stdlib.h>
#include "loja.h"


int main()
{
    char NomeProduto[20], nome2[20];
    Lista *L; //NÃO ESQUECER QUE O ASTERISCO VEM ANTEEEEEEEEEEEEEEEEEEEEEEEEEEEEES
    int *erro, *nLista;

    nLista = 0;

    printf("Ta indo :) \n");
    scanf("%s \n", NomeProduto);
    scanf("%s \n", nome2);

    L = CriarLista();
    InserirLista(L, NomeProduto ,erro);
    InserirLista(L, nome2 ,erro);

    OrdemAlfabetica(nLista, L);
    printf("deu certo");
    return 0;
}
