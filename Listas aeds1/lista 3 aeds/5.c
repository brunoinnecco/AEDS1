#include <stdio.h>



int conceitof(float num)
{
  if(num>0 && num<=39)                
  {
    printf("Conceito F.\n");
  } 
  return 0;
}
int conceitoe(float num)
{
  if(num>39 && num<=59)             
  {
    printf("Conceito E.\n");
  } 
  return 0;
}
int conceitod(float num)
{
  if(num>59 && num<=69)             
  {
    printf("Conceito D.\n");
  } 
  return 0;
}
int conceitoc(float num)
{
  if(num>69 && num<=79)              
  {
    printf("Conceito C.\n");
  } 
  return 0;
}
int conceitob(float num)
{
  if(num>79 && num<=89)                
  {
    printf("Conceito B.\n");
  }
  return 0;
}
int conceitoa(float num)
{
  if(num>89)
  {
    printf("Conceito A.\n");            
  }
  if(num<0)
  {
    printf("Nota invalida.\n");        
  }
  return 0;
}
int main(void) 
{
  int alunos,
  x=0;
  float nota;
  
  printf("Quantos alunos irão participar? ");
  scanf("%d", &alunos);
  
  for(x=0;x<alunos;x++)
    {
      printf("Qual a sua nota?");
      scanf("%f", &nota);
      conceitoa(nota);
      conceitob(nota);
      conceitoc(nota);
      conceitod(nota);
      conceitoe(nota);
      conceitof(nota); 
    }  
  return 0;
}