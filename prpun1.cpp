#include<iostream>
//EJEMPLO
void f1(int &e);
void f2(int *e);
int main(void){
  int a=9;
  int *bptr=nullptr;
  bptr= &a;
  f1(a);
  f2(bptr);
  return 0;
}
void f1(int &e){
  std::cout<<e<<std::endl;//Valor por referencia
  
}
void f2(int *e){
  std::cout<<e<<std::endl;//Puntero, adresse du valeur
  std::cout<<*e<<std::endl;//Valor de la dirección del puntero
  std::cout<<&e<<std::endl;//Dirección de memoria del puntero
}
