#include <stdio.h>

void verifica_idade(int idade)
{
  if(idade>=5 && idade<=7)
  {
    printf("Categoria F");
  }
  else if(idade>=8 && idade<=10)
  {
    printf("Categoria E");
  }
  else if(idade>=11 && idade<=13)
  {
    printf("Categoria D");
  }
  else if(idade>=14 && idade<=15)
  {
    printf("Categoria C");
  }
  else if(idade>=16 && idade<=17)
  {
    printf("Categoria B");
  }
  else if(idade>=18)
  {
    printf("Categoria A");
  }
  else
  {
    printf("Numero invalido");
  } 
}
int main(void) 
{
  int id;
printf("Qual a sua idade? ");
scanf("%d", &id);
  verifica_idade(id);  
  return 0;
}