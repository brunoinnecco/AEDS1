#include <stdio.h>
void media(int x[10]){
  int soma=0;
  for(int o=0;o<x[10];o++){
    soma += x[10] ;
  }
  soma /= 10;
  printf("Media das notas= %d",soma);
}
int main(void) {
  int x[10];
  for(int i=0;i<10;i++){ 
    printf("digite a nota ");
  scanf("%d",&x[10]);
   }

  media(x);
  return 0;
}
