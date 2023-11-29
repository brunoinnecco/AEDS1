#include <stdio.h>
#include <stdlib.h>
int negativo=0;
int v=0;

void valores(int v[10]) {
  
  for(int x=0;x<10;x++){ 
    v[x] =  rand()% 21 - 10; 
  if(v[x]<0){
    negativo++;
  } }
}


void vetornegativo(int x[10]) {
  int y[10],j=0;

  for(int i=0;i< 10;i++){
    if(x[i]<0){
      y[i] = x[i];
    }
  }
  printf("vetor y:\n");
  for(int i=0;i<10;i++){
    printf("%d ",y[i]);
  }
  printf("\n");
}

int main (void){
  int negativo;
  int v[10];
  valores(v);
  vetornegativo(v);
  
}
