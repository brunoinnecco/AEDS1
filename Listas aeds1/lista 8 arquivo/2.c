
#include <stdio.h>
#include <stdlib.h>
int main(void) {
char letra[20];
FILE *arquivo;
  arquivo=fopen("brener.txt","w+");
  printf("arquivo criado\n");
  printf("digite uma frase\n");
   gets(letra);
    fprintf(arquivo, "%s", letra);
    
  }
 