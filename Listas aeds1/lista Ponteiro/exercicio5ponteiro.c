#include <stdio.h>

int main(void) {
  int itr,*iPtr; // declaracao da variavel inteira, real e caractere e seus respectivos ponteiros
  float real,*rPtr;
  char cct,*cPtr;
  printf("Digite um inteiro: "); // leitura do valor das variaveis
  scanf("%d",&itr);
  printf("Digite um real: ");
  scanf("%f",&real);
  printf("Digite um caracter: ");
  scanf(" %c",&cct);
  iPtr=&itr; // atribuicao de ponteiros as variaveis
  rPtr=&real;
  cPtr=&cct;
  *iPtr=itr+10; // manipulacao dos valores das variaveis utilizando os ponteiros
  *rPtr=real+5;
  *cPtr='b'; 
  // resultados com novos valores das variaveis e respectivos enderecos de acordo com os ponteiros
  printf("inteiro apos alteracao: %d\n",itr);
  printf("Endereco do inteiro: %p\n",iPtr);
  printf("real apos alteracao: %f\n",real);
  printf("Endereco do real: %p\n",rPtr);
  printf("caractere apos alteracao: %c\n",cct);
  printf("Endereco do caractere: %p\n",cPtr);
  
  
  
  
  
  
  
  
  return 0;
}