//Este programa determina si un número ingresado por el usuario es o no primo
#include <iostream>
int main(void)
{
  int n=2,a=0;
  std::cout<<"Entre número entero\n";
  std::cin>>n;
  
  for (int i=1;i<=n;i++)
	{
	  if ((n%i)==0)
	    {
	      a++;
	    }
	}
      if(a==2)
	{
	  std::cout<<n<<" es primo\n";
	}
      else
	{
	  std::cout<<n<<" NO es primo\n";
  	}
      return 0;
}
