#include <iostream>
int main(void)
{
  int a,b,c,orden;
  std::cout<<"Entre tres enteros"<<std::endl;
  std::cin>>a>>b>>c;
  if(a>b)
    {
      orden=a;
      a=b;
      b=orden;
    }
  if(a>c)
    {
      orden=a;
      a=c;
      c=orden;
    }
  if(b>c)
    {
      orden=b;
      b=c;
      c=orden;
    }
  std::cout<<a<<", "<<b<<", "<<c<<std::endl;
  return 0;
}
