//Este programa le pide al susuario ingresar los números del 8 al 23 usando un ciclo while
#include <iostream>
int main(void)
{
  int ii=8,a=0;
  while(ii<24)
    {
      std::cout<<"Entre el número "<<ii<<"\t";std::cin>>a;
      ++ii;
    }
  std::cout<<"¡Gracias!\n";
  return 0;
}
