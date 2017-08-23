//Este programa le pide ingresar al usuario todos los enteros desde 8 hasta 23 usando un ciclo for
#include<iostream>
int main (void)
{
  for (int i=8;i<=23;++i)
    {
      int a=0;
      std::cout<<"Entre el número "<<i<<"\t";std::cin>>a;
    }
  std::cout<<"¡Gracias!"<<std::endl;
  return 0;
}
