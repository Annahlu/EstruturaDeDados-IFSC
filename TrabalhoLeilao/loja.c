#include "lista.h"
#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>

typedef char produto;

typedef struct lance{
	produto prod[20]
	char nome[20];
	int valor;
	struct lance *prox;
}Lance;

typedef struct{
    Lance *topo;
}Pilha;

typedef struct prod{ //lista de produtos
	produto prod[20];
	struct prod *prox;
}Produtos;

typedef struct lista{
	Produtos *ini,*fim;
}Listagem;

typedef struct elem{
  char nome[20];
  int valor;
  struct fila *prox;
}elem_fila;

typedef struct Fila{
  elem_fila *begin,*end;
}Fila;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Listagem criar(void){
    Listagem *prods = (Listagem*)malloc(sizeof(Listagem));
    if (prods == NULL){
        return(NULL)
    }
    else{
        prods -> inicio = NULL;
        prods -> fim = NULL;
        return(prods);
    }
}

void inserir(Listagem *L, produto *x, int *erro){
    Produtos *p;
    p = (Produtos*)malloc(sizeof(Produtos));
    if (p=NULL){
        *erro = 1;
    }
    else{
        *erro = 0;
        p -> produto = *x; // (*p).info = *x
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

Pilha* create(produto *x){                                    //cria a pilha associada ao produto
    Pilha *P = (Pilha*)malloc(sizeof(Pilha));
    if (P != NULL){
        P -> topo=NULL;
        return(P);
    }
}
void push(Pilha *P, char *x, produto *y, int *valor, int *erro){                    //adiciona um lance para o cliente (na pilha de lances)
    Lance *pont;
    pont=(Lance*)malloc(sizeof(Lance));
    if (pont=NULL){
        *erro=1;
    }
    else{
        pont->nome = *x;
		pont->prod = *y;
		pont->valor = *valor;
        pont->prox=P->topo;
        P->topo=pont;
        *erro=0;
    }
}

void pop(Pilha *P, char *x, produto *y, int *valor, int *erro){
    Lance *pont;
    if (IsEmpty(P)){
        *erro=1;
    }
    else{
        *x = P->topo->nome;
		*y = P->topo->prod;
		*valor = P->topo->valor;
        pont=P->topo; //definindo o novo topo
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
