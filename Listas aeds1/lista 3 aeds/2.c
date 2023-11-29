#include <stdio.h>
//questao basica que pode ser resolvida usando for,If, else if

int main(void) {

  double salat,
  media,
  total;
  int filhos
  , hab;
  for(hab=0;salat>0;hab++) {
printf("Qual o seu salario? (Digite 0 para parar) ");
    scanf("%lf", &salat);
    if(salat>0)
    {
      printf("Quantos filhos voce tem? ");
      scanf("%d", &filhos);
      total = total + salat;
      media = total/hab;
      }
    else if (salat == 0) {
      
      total = total;
      media=total/hab;
      }
    }
    printf("A média salarial da cidade é de %.2lf", media);
  return 0;
}
