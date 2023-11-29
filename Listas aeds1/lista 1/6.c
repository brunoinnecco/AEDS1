#include <stdio.h>

int main(void) {
  float a, b, x;
  printf("Digite os coeficientes a e b, respectivamente:\n");
  scanf("%f %f", &a, &b);
  if (a!=0) {
    x=-b/a;
    printf("Raiz: %f\n", x);
  } else {
    printf("Equação inválida. Coeficiente 'a' não pode ser zero.\n");
  }
  return 0;
}
//fazer uma divisao onde a partir do if e else se define uma caracteristica no programa