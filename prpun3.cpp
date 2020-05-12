#include <iostream>
#include <cstdlib>
#include <random>

void fill_array(double * x, int n);
double mean(const double * x, int n);


int main(int argc, char *argv[])
{
  const int N = 1000;
  double data[N] = {0.0}; // static array 

  fill_array(data, N);
  std::cout << mean(data, N) << std::endl;
  
  return 0;
}

void fill_array(double * x, int n)
{
  // declare randon number generator, with seed 0
  std::mt19937 gen(0);
  std::uniform_real_distribution<double> dist(1.1, 5.0);

  // fill the array randomly
  for(int ii = 0; ii < n; ++ii) {
    x[ii] = dist(gen);
  }
}

double mean(const double * x, int n)
{
  double suma=0.0;
  for(int ii=0;ii<n;++ii){
    suma+=*(x+ii);
  }
  return suma/n;
}
