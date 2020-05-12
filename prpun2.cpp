#include<iostream>
int main(void){
   double data[]={1.0, 3.4, -9.8};
   double suma=0;
   for(int ii=0;ii<3;++ii){
     suma+=*(data+ii);
   }
   double prom=suma/3;
   std::cout<<prom<<std::endl;
   return 0;
}
