#include <stdio.h>
void funcao (int x, int y,int *maiorPtr,int *menorPtr)
{
  if (x>y){
    maiorPtr=&x;
    menorPtr=&y;
  }
  else if (y>x)
  {
    maiorPtr=&y;
    menorPtr=&x;
  }
  
  
}

int main(void) {
  int num1,num2,*num1Ptr,*num2Ptr;
  num1Ptr=&num1;
  num2Ptr=&num2;
  printf ("Digite um numero ");
  scanf("%d",&num1);
  printf ("Digite outro numero ");
  scanf("%d",&num2);
  funcao(num1,num2,&num1,&num2);
  printf("Menor numero: %d\n",num1);
  printf("Maior numero: %d\n",num2);
  
  return 0;
}