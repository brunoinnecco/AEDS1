#include <stdio.h>



int ord(int num1, int num2, int num3)
{
  if(num1>num2 && num1>num3 && num2>num3)
  {
    printf("%d %d %d\n", num3,num2,num1);
  }
  else if(num1<num2 && num1>num3)
  {
    printf("%d %d %d\n", num3,num1,num2);
  }
  else if(num3>num1 && num3<num2)
  {
    printf("%d %d %d\n", num1,num3,num2);
  }  
  else if(num3<num1 && num3>num2)
  {
    printf("%d %d %d\n", num2,num3,num1);
  }
  else if(num3>num1 && num3>num2 && num2>num1)
  {
    printf("%d %d %d\n", num1,num2,num3);
  }
  else if(num3>num1 && num3>num2 && num2<num1)
  {
    printf("%d %d %d\n", num2,num1,num3);
  }
    return 0;
}
int main(void) {
int conj,
  x=1,
  nume1,
  nume2,
  nume3;
  printf("Quantos conjuntos serão digitados? ");
  scanf("%d", &conj);
  while(x<=conj)
  {
  printf("Digite 3 números inteiros:");
  scanf("%d %d %d", &nume1,&nume2,&nume3);
  ord(nume1,nume2,nume3);
  x++;
   }
  return 0;
}
 