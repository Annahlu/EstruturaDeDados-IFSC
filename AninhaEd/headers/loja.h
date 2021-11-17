/**
 * Como essas structs vao ser incluidas em outros arquivos, voce precisa
 * criar um #ifndef para evitar multipla definicao das structs no seu projeto
 */

#ifndef _LOJA_
#define _LOJA_

typedef struct lance{
	char nome[20];
	int valor;
	struct lance *prox;
}Lance;

typedef struct{
    Lance *topo;
}Pilha;

typedef struct prod{
	char prod[20];
	struct prod *prox;
	Pilha *lances;
}Produto;

typedef struct{
	Produto *ini,*fim;
}Listagem;

typedef struct elem{
  char nome[20];
  int valor;
  struct fila *prox;
}elem_fila;

typedef struct Fila{
  elem_fila *inic,*fim;
}Fila;  

#endif