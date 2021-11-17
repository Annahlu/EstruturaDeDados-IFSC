#include <stdio.h>
#include <stdlib.h>

#define maxSizename 100
#define true 1
#define false 0

typedef struct{
char nome[maxSizename];
char autor[maxSizename];
int status;
}livro;


int main()
{
    printf("Hello world!\n");
    return 0;
}
