#include <stdio.h>

int main(void) {
 int n=0,p=0,z=0,x, rep;//definindo os valores das variaveis
    printf("informe a quantidade de valores que vc vai digitar: \n");
  scanf("%d",&rep); // informar e guardar a quantidade de valores
    for(int f=0; f<rep; f++){ 
      printf("digite um valor:");
  scanf("%d",&x); // informar e guardar os valores informados
    if (x>0){
      p++;//se o valor for positivo se adiciona 1 a variavel p
    }else if (x<0) {
      n++;//se o valor for negativo se adiciona 1 a variavel n
    }else if (z==0){
      z++;// se o valor for igual a 0 se adiciona um a variavel z
    }}
    
    
    printf("quantidade de numeros positivos %d\n",p);
    printf("quantidade de numeros negativos %d\n",n);
   printf("quantidade de numeros nulos %d\n",z);
  // informar quantos valores existem em cada variavel 
  }
  
  
  
    