#include "lista.h"
/**
 * Como essas structs vao ser incluidas em outros arquivos, voce precisa
 * criar um #ifndef para evitar multipla definicao das structs no seu projeto
 */

#ifndef _PILHA_
#define _PILHA_

/**
 * Essas definicoes voce ja fez no seu lista.h certo? Como eu falei no .c, o ideal
 * eh voce definir um .h com todas essas definicoes que sao utilizadas sempre. Por
 * enquanto, inclui "lista.h" aqui, mas nao eh ideal. Repara que aqui nao precisa de indicar a pasta,
 * porque ambos os .hs estao na mesma pasta.

    typedef char elem;

    typedef struct bloco no;
 */

typedef struct{
        no *topo;
}Pilha;

/**
 * Ta incompleto esse comando
    typedef Pilha;
    */ 

#endif

Pilha* create(void);

void push(Pilha* , elem* , int* );

void pop(Pilha*, elem* , int*);

int IsEmpty(Pilha*);

void destroy(Pilha*);



