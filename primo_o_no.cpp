//Este programa determina si un número ingresado por el usuario es o no primo
#include <iostream>
int main(void)
{
  int n=0,fac=1,m=0;
  std::cout<<"Entre número entero positivo\n";
  std::cin>>n;
  for(int i=1; i<n; i++)
    {
      fac=fac*i;
    }
  std::cout<<"factorial de "<<n-1<<" es "<<fac<<"\n";
  if((fac+1)%n==0)
    {
      std::cout<<n<<" es primo\n";  
    }
  else
    {
      std::cout<<n<<" NO es primo\n";
    }
  return 0;
}
