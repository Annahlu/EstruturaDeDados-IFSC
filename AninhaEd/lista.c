#include <stdio.h>
#include <stdlib.h>

/**
 * Esses arquivos .h nao estao na pasta raiz certo? Entao voce precisa indicar isso aqui tambem!
 * Parecido com o que a gente faz pra linkar imagem em html
 */
#include "./headers/pilha.h"
#include "./headers/loja.h"
#include "./headers/lista.h"

//Lista encadeada

//lista.c

/**
 * Como aqui voce quer retornar um ponteiro para o inicio da lista, o tipo do retorno precisa ser "Lista*"
 * nao "Lista"
 */
Lista* criar(void){
    Lista *Laux = (Lista*) malloc(sizeof(Lista));
    if (Laux == NULL){
        //Faltou ponto e virgula aqui
        return(NULL);
    }
    else{
        Laux -> inicio = NULL;
        Laux -> fim = NULL;
        return(Laux);
    }
}

void inserir(Lista *L, elem *x, int *erro){
    no *p;
    p = (no*)malloc(sizeof(no));
    if (p=NULL){
        *erro = 1;
    }
    else{
        *erro = 0;
        p -> info = *x; // (*p).info = *x
        p -> prox = NULL;
        if (L -> inicio == NULL){
            L->inicio=p;
            L->fim=p;
        }
        else{
            L->fim->prox=p;
            L->fim=p;
        }
    }
}

void finaliza(Lista *L){
    no *p;
    p = L->inicio;
    while (p != NULL){
        L ->inicio=L->inicio->prox;
        free(p);
        p=L->inicio;
    }
    L->fim=NULL;
    free(L);
}

Lista Ordenar(Lista *L){
   int menortamanho, r;
   no *p, *pProx;
   elem info1, info2; 
   p = L->inicio;
   pProx = p->prox;
   while (pProx != NULL){
    info1 = L->inicio->info;
    
    /**
     * Chamada pra funcao ta incompleta, ta faltando o primeiro termo
     * menortamanho = Min(, L->inicio->prox->info);  
     */
    
    p = L->inicio->prox;
    pProx = p->prox;
   }
  

}

/*void Min(){
  if(int tam1 >= tam2){

  }

}*/


/* no *p;
    p = (no*)malloc(sizeof(no));
    if (p=NULL){
        *erro = 1;
    }
    else{
        *erro = 0;
        p -> info = *x; // (*p).info = *x
        p -> prox = NULL;
        if (L -> inicio == NULL){
            L->inicio=p;
            L->fim=p;
        }
        else{
            L->fim->prox=p;
            L->fim=p;
        }
    } */