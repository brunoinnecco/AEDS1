#include <stdio.h>
void triangle(int x,int y,int z){
if((z+y > x) && (x+z > y) && (x+y > z)){
     if((x == y) && (y == z)){
      printf("Triângulo Equilátero.\n\n");
    }else if((x!= y) && (x != z) && (y!=z)){
      printf("Triângulo Escaleno.\n\n");
    }else{
       printf("Triângulo Isósceles.\n\n");
    }
  }else{
    printf("Não é triângulo.\n\n");
  }  
}
  int main(void) {
  int l1,l2,l3;
  while(1){
    printf("Digite os 3 lados do triângulo: \n");
    scanf("%d %d %d", &l1, &l2, &l3);
    triangle(l1, l2, l3);
  }
  
}