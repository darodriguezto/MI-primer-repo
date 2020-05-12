#include<iostream>
#include<cmath>
#include<vector>
#include<random>
#include<cstdlib>
#include<algorithm>


double traza(const std::vector<double> & data, int n);
int main(int argc, char*argv[])
{
  const int N=std::atoi(argv[1]);
  std::vector<double> A(N*N);
  std::mt19937 gen(0);
  std::normal_distribution<double> dis(0.0,1.0);
  // for (auto & x: A){
  // x=dis(gen);
    //} 
  for(int ii=0;ii<N;++ii){
    for(int jj=0;jj<N;++jj){
      A[ii*N+jj]=dis(gen);
      std::cout<<A[ii*N+jj]<<"  ";
    }
    std::cout<<"\n";
  }
  std::cout<<"La traza: "<<traza(A,N)<<std::endl;  
  return 0;
}
double traza(const std::vector<double> & data, int n){
  double suma=0.0;
  double t=std::sqrt(n);
  for (int ii=0;ii<n;++ii){
    int jj=ii;
    suma+=data[n*ii+jj];
  }
  return suma;
}
