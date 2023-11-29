#include <stdio.h>

int main(void) {
  double fat = 1, E = 0;
  int valor;
  printf("difgite o valor: ");
  scanf("%d", &valor);
  for (int x = 1; x<=valor; x++) {
    E+=1/fat;
    fat *= x;
    printf("os valores sao: %d %lf %lf\n", x, fat,E);
  }
}