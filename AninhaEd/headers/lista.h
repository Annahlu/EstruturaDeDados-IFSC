//lista.h
#ifndef _LISTA_
#define _LISTA_

typedef char elem;

/**
 * Voce tinha definido esse tipo no lista.c
 * So que, o lista .h tambem precisa desse tipo certo?
 * Entao o ideal aqui e voce inserir no .h a definicao da struct e importar o .h no .c 
 * (porque nao da pra importar o .c no .h)
 * Ai aqui voce precisa do ifnef, senao voce vai redefinir a sua struct varias vezes
 */
typedef struct bloco{
    elem info;
    struct bloco *prox;
} no;

typedef struct {
    no *inicio, *fim;
} Lista;

/**
 * Consequentemente isso aqui eh inutil:
 * typedef bloco no;
 */

/**
 * Isso aqui você nao pode fazer. "struct" nao eh um tipo pra voce dar typedef 
 * (eh diferente de "struct bloco" ou de "struct{uma definicao de tipos aqui dentro}", que seriam tipos).
 * typedef struct Lista;
 */
#endif

Lista criar(void);

void inserir(Lista* , elem *, int *);

void finaliza(Lista*);

Lista Ordenar(Lista*);