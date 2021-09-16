#include <stdio.h>
#include <stdlib.h>

#define maxSizename 100
#define telsixe 12
#define MaxSizeList 50

typedef struct{
char nome[maxSizename];
char telefone[12]
}dados;

void ler_dados (dados *p){
    printf("------ Você esta inserindo uma pessoa------- \n");
    printf("Nome: \n");
    scanf("%s",p->nome);
    printf("Telefone: \n");
    scanf("%s", p->telefone);
}

void ver_pessoa (dados *p){
    printf("----------------------------- \n");
    printf("Nome %s", p->nome);
    printf("Telefone %s", p->telefone);
}
void agenda_telefonica (dados* VetorP, int n){
    printf("---------------- Agenda Telefonica ------------- \n");
    for(int i = 0; i < n; i++){
        ver_pessoa(VetorP);
    }
}
void limpar_memoria(dados* VetorP, int i){
    for(int j = 0; j < i; j++){
          free(VetorP);
        }
}

int main()
{
    int choice, i;
    i = 0;
    choice = 1;
    dados *pessoa;
    dados *VetorP[MaxSizeList];

    printf("------ Bem vindo a agenda telefonica! ---------- \n");
    printf("------ Cadastre um usuario ---------- \n");

    while(choice != 0 || i >= 50){
        pessoa =  malloc(sizeof(dados));
        if (pessoa == NULL){
            printf("erro na alocação de memória \n");
            exit(1);
        }
        ler_dados(pessoa);
        printf("deseja cadastrar um novo usuário? 1 p/ S e 0 p/ N \n");
        scanf("%d", &choice);
        VetorP[i] = pessoa;
        i+=1;
    }

    printf("Deseja visualizar a agenda telefonica? 1 p/ S e 0 p/ N \n");
    scanf("%d", &choice);
    if(choice == 1){
        agenda_telefonica(VetorP, i);
    }

   if (i == 50){
        printf("Voce atingiu o limite de usuarios na agenda");
    }
    limpar_memoria(VetorP, i);
    return 0;
}
