#include<iostream>
#include<cmath>
int main(void)
{
  std::cout<<"Entre dos números"<<std::endl;
  double n,m;
  std::cin>>n>>m;

  if(n>m)
    {
      std::cout<<"El número más grande es "<<n<<std::endl;     
    }
  else if(m>n)
    {
      std::cout<<"El número más grande es "<<m<<std::endl;
    }
  else
    {
      std::cout<<"Los dos números son iguales"<<std::endl;
    }
   return 0;
}
