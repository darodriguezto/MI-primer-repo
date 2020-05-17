#include<iostream>
#include<cmath>
double f(double w);
double angulo_fase(double w);

int main(void){
  const double W=35185.8377;
  double p=0.0;
  for (int ii=0;ii<5000;++ii){
    p=ii*0.0000001;
    std::cout<< p<<"\t"<<f(W)*std::sin(W*p-angulo_fase(W))<<std::endl;
  }
  return 0;
}
double f(double w){
  int V=12;
  double L=0.01;
  int R=200;
  double C=0.00000001;
  double w0= 100000;
  return (V*w)/(std::sqrt(std::pow(L*((w*w)-(w0*w0)),2)+std::pow(R*w,2)));
}
double angulo_fase(double w){
  int V=12;
  double L=0.01;
  int R=200;
  double C=0.00000001;
  double w0= 100000;
  return std::tan((-R*w)/L*((w*w)-(w0*w0)));
}
