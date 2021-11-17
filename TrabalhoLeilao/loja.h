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
	Produto *inicio,*fim;
}Lista;

typedef struct elem{
  char nome[20];
  int valor;
  struct fila *prox;
}elem_fila;

typedef struct Fila{
  elem_fila *inic,*fim;
}Fila;


