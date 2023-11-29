#include <stdio.h>//programa que utiliza de if/else if/else fora contas para calcular se um carro deve ser multado ou nao

int main(void) {
  int vmax, vmot, vr;
  printf("Digite a velocidade máxima permitida:\n");
  scanf("%d", &vmax);
  printf("Digite a velocidade com que o motorista estava dirigindo:\n");
  scanf("%d", &vmot);
  vr=vmot-vmax;
  if ((vr>0)&&(vr<=10)) {
    printf("Multa de 50 reais\n");
  } else if ((vr>10)&&(vr<=30)) {
    printf("Multa de 100 reais\n");
  } else if (vr>30) {
    printf("Multa de 200 reais\n");
  } else {
    printf("Motorista respeitou a lei\n");
  }
return 0;
}
