#include <stdio.h> //questao para aprender a utilizar switch com um if else dentro dele 

int main(void) {
  float sal, novo;
  char op;
  printf("Digite seu salário atual:\n");
  scanf("%f", &sal);
  printf("Digite sua opção (A/B/C)\n");
  scanf(" %c",&op);
  switch (op) {
    case 'A': sal=sal*1.08;
    break;
    case 'B': sal=sal*1.11;
    break;
    case 'C':
    if(sal<=1000) 
      sal=sal+350;
     else 
      sal=sal+200;
      break;
    }
    printf("Seu salário será: %f\n", sal);
return 0;
}
