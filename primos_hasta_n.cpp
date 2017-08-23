//Este programa imprime los números primos que hay desde 1 hasta un número m determinado
#include <iostream>
int main(void)
{
  int n=2,p=0,m=1000000;
  //std::cout<<"Entre número entero\n";
  //std::cin>>m;
  
  for(int n=2;n<=m;n++)

    {
      int a=0;
      for (int i=1;i<=n;i++)
	{
	  if ((n%i)==0)
	    {
	      a++;
	    }
	}
      if(a==2)
	{
	  std::cout<<n<<"\t";
	  p++;
	}
    }
  std::cout<<"\nHay "<<p<<" primos de 1 a "<<m<<"\n";
  return 0;
}
