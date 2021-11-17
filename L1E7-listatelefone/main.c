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
    printf("\n");
}

void excluir_pessoa(dados** VetorP, char name[maxSizename]){
    printf("entrei no excluir");
    int size = sizeof(VetorP) - 1;
    for(int i = 0; i < size; i++){
            printf("nome: %s \n", name);
            printf("nome da vez: %s \n", VetorP[i]->nome);
        if(VetorP[i]->nome == name){
            free(VetorP[i]);
            printf("Pessoa excluida! \n");
            agenda_telefonica(VetorP);
            break;
        }
    }
}

void ver_pessoa (dados *p){
    printf("----------------------------- \n");
    printf("Nome %s \n", p->nome);
    printf("Telefone %s", p->telefone);
}

void agenda_telefonica (dados** VetorP){
    printf("---------------- Agenda Telefonica ------------- \n");
    int tam = sizeof(VetorP);
    for(int i = 0; i < sizeof(VetorP) - 1; i++){
       ver_pessoa(VetorP[i]);
        printf("%d \n", i);
    }
}
void limpar_memoria(dados** VetorP){
          free(VetorP);
}

int main()
{
    int choice, i, choice2;
    i = 0;
    choice = 1;
    dados *pessoa;
    dados *VetorP[MaxSizeList];
    char name[maxSizename];

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

        agenda_telefonica(VetorP);
        printf("Deseja excluir uma pessoa? 1 p/ S e 0 p/ N \n ");
        scanf("%d", &choice2);
        if(choice2 == 1){
            printf("Digite o nome da pessoa que deseja excluir:");
            scanf("%s\n", &name);
            excluir_pessoa(VetorP, name);
            //acho que não entendi o conceito de ponteiro ainda nao
        }

    }
   if (i == 50){
        printf("Voce atingiu o limite de usuarios na agenda");
    }

   limpar_memoria(VetorP);

    return 0;
}
