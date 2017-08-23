//Este programa halla raices de funciones de una variable mediante el método de bisección
#include <iostream>
#include <cmath>
int main(void)
{
  double x=0,m,a=0,b=0;
  //f=(x-1.666)^2;
  a=-7;
  b=7;
  while ((pow((m-1.666),2))<-0.0001 || (pow((m-1.666),2))>0.0001)
    {                       
      double m=(a+b)/2 ;
      
      if((pow((m-1.666),2))*(pow((a-1.666),2))>0) 
	{a=m;}
      
      else if ((pow((m-1.666),2))*(pow((b-1.666),2))>0)
	{b=m;}
     
      std::cout<<"La raiz de (x-1.666)² es "<<m<<"\n";
    }
  //std::cout<<"La raiz de x-3 es "<<m<<"\n";
  return 0;
}
  
