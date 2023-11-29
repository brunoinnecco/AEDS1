#include <stdio.h>

int calculofat(double x)
{
  double fat;
  for(fat = 1; x > 1; x = x - 1)
  {
      fat = fat * x;
  } 
  return 0;
}
int main(void) 
{
double n,s,y=1;
  printf("Digite o valor de n: ");
  scanf("%lf", &n);
  for(y=1;y<=n;y++)
  {
  s= 1 + y/calculofat(y);
  }
  printf("%lf", s);
  return 0;
}