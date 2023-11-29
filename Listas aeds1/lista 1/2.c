#include <stdio.h> //comando para colocar condições sobre o resultado de uma soma

int main(void) {
  int a, b, soma, res;
  printf("Digite 2 números:\n");
  scanf("%d %d", &a, &b);
  soma=a+b;
  if (soma>=10) {
    res=soma+5;
  } else {
    res=soma+7;
  }
  printf("Resultado final: %d\n", res);
  return 0;
}
