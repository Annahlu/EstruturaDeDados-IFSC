#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *v, int n){
    printf("entrou");
    int aux;
     for (int i = 0; i < n - 1 ; ++i){
        if(v[i] > v [i+1]){
            aux = v[i];
            v[i] =  v[i+1];
            v[i+1] = aux;
        }
    }
}

int main()
{
    int n, *v;

    printf("Digite o numero de elementos do vetor: \n");
    scanf("%d", &n);

    v = malloc (n * sizeof (int));
    for (int i = 0; i < n; ++i){
        scanf ("%d", &v[i]);
    }

    bubbleSort(v, n);
    // vetor não precisa colocar *v, só se for ponteiro para ponteiro

    printf("mostrando o vetor ordenado \n");
    for( int i = 0; i < n; i++){
    printf("%d ", v[i]);
    }


    return 0;
}
