#include <iostream>
#include <math.h>
int main(void)
{
  int val1, val2, max, min;
  std::cout<<"Entre dos enteros"<<std::endl;
  std::cin>>val1>>val2;
  double sum=val1+val2;
  double mul=val1*val2;
  int mod=val1%val2;
  double div=(double)val1/(double)val2;
  std::cout<<"La suma de los dos enteros es "<<sum<<std::endl;
  std::cout<<"La multiplicación de los dos enteros es "<<mul<<std::endl;
  std::cout<<"La división de los dos enteros es "<<div<<std::endl;
  std::cout<<"El módulo de los dos enteros es "<<mod<<std::endl;

  if (val1>val2)
    {
      max=val1;
      min=val2;
    }
  else
    {
      max=val2;
      min=val1;
    }
  std::cout<<"El mayor de los dos enteros es "<<max<<std::endl;
  std::cout<<"El menos de los dos enteros es "<<min<<std::endl;
  return 0;
}
