//lista como pilha.c
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

/**
 * Esses arquivos .h nao estao na pasta raiz certo? Entao voce precisa indicar isso aqui tambem!
 * Parecido com o que a gente faz pra linkar imagem em html
 */
#include "./headers/lista.h"
#include "./headers/loja.h"

/**
 * Isso aqui voce ja definiu no seu "lista.h" certo? Como eh um tipo compartilhado por muitos arquivos
 * que nao necessariamente tem ligacao, voce pode (e eu recomendaria) fazer um arquivo que contem a definicao
 * dela e de outras definicoes que voce utilize no decorrer de todo o projeto e voce vai incluindo nos arquivos
 * (tanto .c quanto .h) conforme for necessario (eu geralmente tenho chamado ele de "defines.h", 
 * mas pode ser qualquer nome.)
 * Por enquanto, vou incluir o lista.h aqui
    typedef char elem;
    typedef struct bloco{
        elem info;
        struct bloco *prox;
    }no;
*/
#include "./headers/lista.h"

/**
 * Essa definicao ficaria melhor no .h certo? Ja que voce utiliza ela la tambem
    typedef struct{
        no *topo;
    }Pilha;
*/

Pilha* create(void){
    Pilha *P = (Pilha*)malloc(sizeof(Pilha));
    if (P != NULL){
        P ->topo=NULL;
        return(P);
    }
}
void push(Pilha *p, elem *x, int *erro){
    no *pont;
    pont=(no*)malloc(sizeof(no));
    if (pont=NULL){
        *erro=1;
    }
    else{
        pont->info=*x;
        /**
         * Lembra que C eh case sensitive. "P" eh diferente de "p"
         */
        pont->prox = p->topo;
        p->topo=pont;
        *erro=0;
    }
}

void pop(Pilha *P, elem *x, int *erro){
    no *pont;
    if (IsEmpty(P)){
        *erro=1;
    }
    else{
        /**
         * Esse campo "info" nao existe na struct. 
         *
            *x=P->topo->info;
         */ 
        pont=P->topo;
        P->topo=P->topo->prox;
        free(pont);
        *erro=0;
    }
}

int IsEmpty(Pilha *P){
    if (P->topo==NULL){
        return(1);
    }
    else return(0);
}

void destroy(Pilha *P){
    no *pont=P->topo;
    while (pont!=NULL)
    {
        P->topo=P->topo->prox;
        free(pont);
        pont=P->topo;
    }
    free(P);
}