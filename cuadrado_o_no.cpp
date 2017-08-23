#include <iostream>
int main(void)
{
  std:: cout<<"Entre el largo y ancho del rectágulo"<<std::endl;
  double n,m;
  std::cin>>n>>m;
  (n==m) ? std::cout<<"El rectángulo es un cuadrado"<<std::endl : std::cout<<"El rectángulo no es un cuadrado"<<std::endl;
  return 0;
}
