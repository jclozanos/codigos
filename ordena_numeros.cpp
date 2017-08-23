//Este programa pide tres números al usuario y los ordena e mayor a menor
#include <iostream>
int main (void)
{
  int x=0,y=0,z=0,temp=0;
  std::cout<<"Entre tres enteros"<<std::endl;
  std::cin>>x>>y>>z;
  if(y>x)
    {
      temp=x;
      x=y;
      y=temp;
    }
  if(z>x)
    {
      temp=x;
      x=z;
      z=temp;
    }
  if(z>y)
    {
      temp=y;
      y=z;
      z=temp;
    }
  std::cout<<x<<" "<<y<<" "<<z<<std::endl;
  return 0;
}
