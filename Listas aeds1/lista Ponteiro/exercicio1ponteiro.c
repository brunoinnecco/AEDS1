#include <stdio.h>

int main(void) {
  int num1,*num1ptr,num2,*num2ptr; // declaracao de variaveis e ponteiros
  printf("Digite um numero "); // leitura dos numeros
  scanf("%d",&num1);
    printf("Digite um numero ");
  scanf("%d",&num2);
  num1ptr = &num1; // atribuicao dos ponteiros
  num2ptr = &num2;
  if (*num1ptr>*num2ptr) // condicionais para escrever na tela e resultados 
  {
    printf("Maior numero digitado: %d\n",num1);
    
   
  }
   if (*num1ptr<*num2ptr)
  {
    printf("Maior numero digitado: %d\n",num2);
  }
  printf("Endereços: %p e %p",num1ptr,num2ptr); // enderecos que cada variavel foi registrada
  
  
  
  return 0;
}