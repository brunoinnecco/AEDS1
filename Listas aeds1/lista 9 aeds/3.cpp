
#include <iostream>
#include "pessoa.cpp"




int main() {
  Pessoa p[10];

  for(int i = 0; i < 10; i++){
    std::cout << "Pessoa " << (i + 1) << ":"<<"\n";
    p[i].getData();
  }
  
  for(int i = 0; i < 10; i++){
    std::cout << "Item Details : " << (i + 1) << "\n";
    p[i].putData();
  }
}



class Pessoa {
public:
  int codigo;
  char nome[50];
  int idade;
  char endereco[50];
  int numero;
  char complemento[50];
public:


  void getData(){
    std::cout << "Enter codigo : ";
    std::cin >> codigo;

    getchar();
    

    std::cout << "Enter nome : ";
    std::cin >> nome;

    getchar();
    getchar();

    std::cout << "Enter idade : ";
    std::cin >> idade;

    getchar();
    getchar();

    std::cout << "Enter endereco : ";
    std::cin >> endereco;

    getchar();
    getchar();

    std::cout << "Enter numero : ";
    std::cin >> numero;

    getchar();
    getchar();

    std::cout << "Enter complemento : ";
    std::cin >> complemento;

    getchar();
    getchar();
  }

 
  void putData() {
    std::cout << "Codigo: " << codigo;
    std::cout << "Nome: " << nome;
    std::cout << "Idade: " << idade;
    std::cout << "Endereco: " << endereco; 
    std::cout << "Numero: " << numero;
    std::cout << "Complemento: " << complemento;
  }
  

};
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete