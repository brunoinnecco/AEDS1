#include <stdio.h>
int media(){
  int nota1,nota2,nota3,media1,media2;
  char letra;
  printf("digite a nota 1: ");
  scanf("%d",&nota1);
  printf("digite a nota 2: ");
  scanf("%d",&nota2);
  printf("digite a nota 3: ");
  scanf("%d",&nota3);
  printf("digite a letra: ");
  scanf(" %c",&letra);
  switch (letra){
    case 'A':
    media1=(nota1+nota2+nota3)/3;
      printf("nota final: %d",media1);
    break;
    case 'P':
    media2= (nota1*5 + nota2*3 + nota3*2)/10;
    printf("nota final : %d",media2);
    }

    
    
  
}

int main(void) {
  int alunos; 
  printf("quantos alunos irao digitar: ");
  scanf("%d",&alunos);
  for(int x=1; x<=alunos; x++)
    media();
  
  
  }