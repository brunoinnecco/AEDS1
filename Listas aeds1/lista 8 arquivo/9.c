#include <stdio.h>//programa basico em switch 

int main(void) {
  char op;
  printf("Digite um símbolo:\n");
  scanf(" %c",&op);
  switch (op) {
    case '<':
    printf("Sinal de menor\n");
    break;
    case '>': 
    printf("Sinal de maior\n");
    break;
    case '=':
    printf("Sinal de igual\n");
    break;
    default:
    printf("Outro sinal\n");
    break;
  }
return 0;
}
