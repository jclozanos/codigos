//Este programa le pide al usuario ingresar un entero N, y realiza la suma desde 5^3 hasta 5^N
#include <iostream>
#include <cmath>
int main(void)
{
  double N=100,sum=0;
  //std::cout<<"Ente entero mayor o igual a 3 \n";
  //  std::cin>>N;
  for(int i=3; i<=N; i++)
    {
      sum+=pow(5,i);
      std::cout<<i<<"\t"<<sum<<"\n";
    }
  //std::cout<<"La suma es "<<sum<<"\n";
  return 0;
}
