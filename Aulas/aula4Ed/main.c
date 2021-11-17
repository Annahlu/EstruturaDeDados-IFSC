#include <stdio.h>
#include <stdlib.h>
//iterativo
int Ifat(n){
    int fat;
    fat = 1;
    for(int i = 1; i <= n; i++) fat = i*fat;
    return fat;
}
//recursivo
int Rfat(n){
    if(n == 1){
        return 1;
    } else{
       return n*Rfat(n-1);
       n-=1;
    }
}
int main(void) {
  int n, fatr,fati;
  scanf("Digite um número:",&n);

  fatr = Rfat(n);
  printf(" fat recursivo: %d \n",fatr);

  fati = Ifat(n);
  printf("fat iterativo: %d",fati);
  return 0 ;
}
