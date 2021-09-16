#include <stdio.h>
//perguntar * e & no atendimento quarta
float media(int n,float *notas){
  float result, soma;
  for(int i = 0; i < n; i++){ // i só vai existir dentro do bloco em que ele foi declarado
    soma+= notas[i];
  }
  result = soma/n;
return result;
}

int main(void) {
  float notas[3],result;

  printf("Digite as notas dos alunos");
  for(int i = 0; i< 3; i++){
    scanf("%f",&notas[i]);
  }

  result = media(3,&notas);
  printf("a media da turma e %f",result);
  return 0; //sempre retornar alguma coisa mesmo na função main - boa prática
}
