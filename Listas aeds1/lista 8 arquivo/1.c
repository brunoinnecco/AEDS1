#include <stdio.h>

int main(void) {
int letra;
FILE *arquivo;
  arquivo=fopen("brener.txt","w+");
  printf("arquivo criado\n");
  printf("digite 10 numeros\n");
  for(int i=0;i<10;i++){
   scanf("%d",&letra);
    fprintf(arquivo, "%d\n", letra);
    }
  }
 