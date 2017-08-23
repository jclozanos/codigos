//Este programa pide tres números al usuario e indica cuál es el mayor de ellos
#include<iostream>
int main(void)
{
  int a=0,b=0,c=0,temp=0;
  std::cout<<"Entre tres enteros"<<std::endl;
  std::cin>>a>>b>>c;
  if(b>a)
    {
      temp=a;
      a=b;
      b=temp;
      
    }
  if(c>a)
    {
      temp=a;
      a=c;
      c=temp;
    }
  std::cout<<"El mayor de los tres números es "<<a<<std::endl;
  return 0;
}
