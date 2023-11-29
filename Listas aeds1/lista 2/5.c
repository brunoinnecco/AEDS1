#include <stdio.h>

int main(void) {
  float sal = 0, saltotal = 0, media, hab = 0, familias = 0, filhos = 0,
        totfilhos = 0, maiorsal = 0, sal100 = 0;
  do {
    printf("digite seu salario: ");
    scanf("%f", &sal);
    if (0 > sal) {
      saltotal = saltotal;
      hab = hab - 1;
    } else {
      saltotal = sal;
      if (sal > maiorsal) {
        maiorsal = sal;
      }
      if (sal <= 100) {
        sal100++;
      }
    }
    hab++;
  } while (sal > 0);
  media = saltotal / hab;
  sal100 = (sal100 * 100) / hab;
  printf("\na media de salario é %.2f", media);
  printf("\n o maior salario é: %.2f", maiorsal);
  printf("\n o percentual de pessoas com salario ate R$:100,00 é %.2f%%",
         sal100);
  printf("\ndigite quantas familias estão participando: ");
  scanf("%f", &familias);
  for (int x = 0; x < familias; x++) {
    printf("\ndigite a quantidade de filhos: ");
    scanf("%f", &filhos);
    totfilhos += filhos;
  }
  totfilhos = totfilhos / familias;
  printf("\nA media de filhos por familia é %2.f", totfilhos);

  return 0;
}