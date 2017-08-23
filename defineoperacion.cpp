#include <iostream>
#include <string>
int main (void)
{
  std::cout<<" Entre operación, número, número"<<std::endl;
  std::string operation;
  double n,m;
  std::cin>>operation>>n>>m;

  if(operation=="+")
    {
      std::cout<<n+m<<std::endl;
    }
  if(operation=="-")
    {
      std::cout<<n-m<<std::endl;
    }
  if(operation=="*")
    {
      std::cout<<n*m<<std::endl;
    }
  if (operation=="/")
    {
      std::cout<<n/m<<std::endl;
    }
  if (operation=="%")
    {
      std::cout<<(int)n%(int)m<<std::endl;
    }
  
  return 0;
}
