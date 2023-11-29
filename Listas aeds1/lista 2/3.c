#include <stdio.h>//questaopara saber se um numero é divisivel pelos valores abaixo 

int main () {
 int rep=10,nov=0,doi=0,cinc=0,num;
  for(int x=0;x<rep;x++){
    printf("\ndigite um valor: ");
    scanf("%d",&num);
    if(num % 9 == 0){ 
      nov++;
      }else if (num % 2 == 0){
      doi++;
      }else if (num % 5 == 0){
      cinc++;
      }else{
      printf("\n o valor não é divisivel");
      }}
    printf("\nNumeros divisiveis por 3 e 9 %d",nov);
    printf("\nNumeros divisiveis por 2 %d",doi);
    printf("\nNumeros divisiveis por 5 %d",cinc);
    
  }
  
  