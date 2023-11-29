#include <stdio.h>
double media;
float nota;
int notas(int x) {
if(x>=6){
  nota+=x;
  media++;
}
  
  return 0;
}
int main(void){
  int al,z, resultado;
  printf("digite a quantidade de alunos: ");
  scanf("%d",&al);
  for(int y=0;y<al;y++){
    printf("digite a nota: ");
    scanf("%d",&z);
    notas(z);
  }resultado= nota / media ;
  printf("a media das notas acima de 6 é: %d ",resultado);
}