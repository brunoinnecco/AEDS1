#include <iostream>
class equipamento{
private:
bool ligado;
public:
void liga() {
  ligado = true;
printf("equipamento ligado");
  }
void desliga() {
  ligado=false;
  printf("desligado");
  }
};
class equipamentosonoro: public equipamento{
public:
short volume; 
bool stereo;
short getvolume(){
  scanf("%i.e",&volume);
  return volume;}
void mono(){
  stereo = false; 
  printf("stereo desligado");
}
void estereo(){
  stereo= true;
  printf("stereo ligado");
}

};
int main() {
  equipamento central;
  central.liga();
  equipamentosonoro abc;
  abc.mono();
}