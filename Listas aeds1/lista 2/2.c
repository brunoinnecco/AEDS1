

#include <stdio.h>

int main () {
  int neg=0, pos=0, zer=0, rep, P, total;//definindo as variaveis
  printf("Informe o número de repetições\n ");
  scanf("%d", &rep);//informando o numero de repetições
  
  for (int i = 0, n; i < rep; i++) {//o for entra pra fazer com que as repetições funcionem
    printf("Digite um número:\n ");
    scanf("%d", &n);
    if (n<0) {
      neg++;
    }
    if (n>0) {
      pos++;
    }
    if (n==0) {
      zer++;
    }//esse processo avalia e armazena o numero de acordo com sua categoria
  }
  total = neg + pos + zer;
  z+P = (neg*100) / total;
  printf("Porcentagem de negativos: %d %%\n",P);
  P = (pos*100) / total;
  printf("Porcentagem de positivos: %d %%\n", P);
  P = (zer*100) / total;
  printf("Porcentagem de zeros: %d %%\n", P);
 }//aqui se multiplica a quantidade presente em cada variavel por 100 e divide pelo total pra obter a porcentagem de cada