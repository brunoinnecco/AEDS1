#include <stdio.h> // programa para inroduzir o basico de else if 

int main(void) {
 int x, y;
  printf("Digite um valor de x:\n");
  scanf("%d", &x);
  if (x<=1) {
    y=1;
  } else if ((x>1)&&(x<=2)) {
    y=2;
  } else if ((x>2)&&(x<=3)) {
    y=(x*x);
  } else if (x>3) {
    y=(x*x*x);
  }
  printf("y=%d", y);
  return 0;
}
