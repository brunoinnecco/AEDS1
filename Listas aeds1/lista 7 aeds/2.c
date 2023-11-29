#include <stdio.h>

typedef struct Registro {
char nome[20];
int tel;
double preco;
} Registro;

int main(void) {
  int n = 3;
  double sum = 0, media = 0;
  Registro r[n];
  for (int i = 0; i < n; i++) {
    printf("\ndigite o nome da loja %d: ", i+1);
    scanf("%s", r[i].nome);
    printf("digite o telefone da loja: ");
    scanf("%d", &r[i].tel);
    printf("digite o preço de um eletrodoméstico: ");
    scanf("%lf", &r[i].preco);
    sum += r[i].preco;
  }
  media = sum/n;
  printf("\na média dos preços é: %.2lf\n", media);
  printf("\nlojas com preços abaixo da média:\n");
  for (int i = 0; i < n; i++) {
    if (r[i].preco < media) {
      printf("- %s, de telefone %d\n", r[i].nome, r[i].tel);
    }
  }
  return 0;
}
