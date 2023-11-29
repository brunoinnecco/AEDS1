#include <stdio.h>



float teste(int N){
  float soma=0,resultado=0;
  
  for(int j = 1; j <= N; j++){
    
    soma = ((j*j)+1) / ((j + 3)); 
    
    resultado +=soma;
  }
  
  return(resultado);
}




int main(void) {
  int num;
  printf("\n Digite o numero: ");
  scanf("%d",&num);

  printf("%f", teste(num));

  return 0;
}