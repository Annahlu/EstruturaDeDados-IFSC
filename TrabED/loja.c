#include<stdlib.h>
#include<string.h>
#include "loja.h"

Lista* CriarLista(void){
    Lista *prods = (Lista*)malloc(sizeof(Lista));
    if (prods == NULL){
        printf("Alguma coisa deu errado: Alocação de memória inválida \n");
        return(NULL);
    }
    else{
        printf("Criou a lista\n");
        prods -> inicio = NULL;
        prods -> fim = NULL;
        return(prods);
    }
}

void InserirLista(Lista *L, char x[20], int* nLista,  int *erro){
    Produto *p;
    p = (Produto*) malloc(sizeof(Produto));
    if (p == NULL){
        *erro = 1;
    }
    else{
        *erro = 0;
        nLista+=1;
        strcpy(p->prod, x); // copiar uma string para dentro da outra
        p -> prox = NULL;
         if (L -> inicio == NULL){
                L -> inicio= p;
                L -> fim= p;
        } else{
            L->fim->prox=p;
            L->fim=p;
        }
    }
}
/*------------------------- x -------------------------*/

void OrdemAlfabetica(Lista *L){
  int cmp;
  Produto *p, *aux;

  p = L->inicio;
  while(p->prox != NULL){
    cmp = 0;
    cmp = strcmp(p, p->prox);
    if (cmp < 0){
        printf("troca\n");
        aux = p;
        p = p->prox;
        p->prox = aux;
    }
    p = p->prox;
  }
}

