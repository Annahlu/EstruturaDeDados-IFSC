#include <stdlib.h>
#include <stdio.h>

/**
 * Esses arquivos .h nao estao na pasta raiz certo? Entao voce precisa indicar isso aqui tambem!
 * Parecido com o que a gente faz pra linkar imagem em html
 */
#include "./headers/lista.h"
#include "./headers/pilha.h"

/**
 * Todas essas definicoes ja estao no seu .h certo? Voce precisa entao incluir ele aqui
 * e nao definir de novo
 
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
    */
#include "./headers/loja.h"

typedef char produto;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 * Mesma coisa aqui do "lista.c" > voce esta tentando retornar um ponteiro do tipo "Listagem *"
 * quando na verdade o tipo de retorno da funcao ta definido como "Listagem" (nao ponteiro)
 * Precisa entao trocar pra retornar ponteiro.
 */
Listagem* criar(void){
    Listagem *prods = (Listagem*)malloc(sizeof(Listagem));
    if (prods == NULL){
        //Faltou ponto e virgula aqui
        return(NULL);
    }
    else{
        /**
         * Esse campo "inicio" nao ta definido na struct "Listagem". So tem "ini":
         * prods -> inicio = NULL;
         */
        prods -> fim = NULL;
        return(prods);
    }
}

void inserir(Listagem *L, produto *x, int *erro){
    /**
     * Voce nao definiu esse tipo "Produtos". Existe apenas "Produto" (nao plural)
     */
    Produto *p;
    p = (Produto*) malloc(sizeof(Produto));
    if (p=NULL){
        *erro = 1;
    }
    else{
        *erro = 0;
        /**
         * Esse campo "produto" nao existe dentro da definicao da struct "Produto"
         * p -> produto = *x; // (*p).info = *x
         */
        p -> prox = NULL;
        /**
         * Esses campos "inicio" nao estao definidos na struct "Listagem"
         * Coloquei o if vazio so para para de dar erro, mas precisa consertar aqui
            if (L -> inicio == NULL){
                L->inicio=p;
                L->fim=p;
            }
        */
        if(1)
            printf("TODO");
        else{
            L->fim->prox=p;
            L->fim=p;
        }
    }
}

/**
 * Essas coisas de pilha nao deviam estar no "pilha.c"?
 *
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

*/