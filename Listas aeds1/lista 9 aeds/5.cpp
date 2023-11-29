#include <iostream>
#include "eletro.cpp"
using namespace std;




int main() {
  float average = 0;
  int number = 3; 
  char nomeArq[8];
  char avgArq[10];
  float sum = 0;

  Eletrodomestico e[number];


  cout << "Choose the name of the data file: ";
  cin >> nomeArq;
  FILE *arqQ5 = fopen(nomeArq, "w");


  cout << "Choose the name of the average file: ";
  cin >> avgArq;
  FILE *avgFile5 = fopen(avgArq,"w");

 
  for(int i = 0; i < number; i++){
    cout << "Store n° " << (i+1);
    e[i].setData(arqQ5);
  }


  for(int i = 0; i < number; i++){
    sum += e[i].getPrice();
  }
  average = sum/number;

  fprintf(avgFile5,"The average price is: %.2f\n",average);
    

  cout << "Lojas que apresentam preço abaixo da média:\n";
  for(int i = 0; i < number; i++){
    if(e[i].getPrice() < average){
      fprintf(avgFile5,"-%s\n%s\n",e[i].name,e[i].phone);
    }
  }
}


class Eletrodomestico{
private:
  float price;

public:

  char name[15];
  char phone[9];

  void setData(FILE *arqQ5){
    cout << "\nName:";
    cin >> name;
  
    cout << "\nPhone:";
    cin >> phone;
  
    cout << "\nPrice:";
    cin >> price;
  
    getchar();
  
    fprintf(arqQ5,"%s %s %.2f",name,phone,price);  
  }

  float getPrice(){return price;}
};