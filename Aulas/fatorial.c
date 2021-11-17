#include <stdio.h>
#include <stdlib.h>
//iterativo
long long int Ifat(n){
    int fat;
    fat = 1;
    for(int i = 1; i <= n; i++) fat = i*fat;
    return fat;
}
//recursivo
long long int Rfat(n){
    if(n <= 1){
        return 1;
    } else{
       return n*Rfat(n-1);
    }
}
int main(void) {
  int n;
  long long int fatr,fati;
  scanf("%d",&n);
  fatr = Rfat(n);
  printf(" fat recursivo: %d \n",fatr);

  fati = Ifat(n);
  printf("fat iterativo: %d",fati);

  return 0 ;
}
