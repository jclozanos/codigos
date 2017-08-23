#include <iostream>
int main (void)
{
  int a=0, b=0;
  std::cout<<"(a && b) = "<<(a && b)<<std::endl;
  std::cout<<"(a || b) = "<<(a || b)<<std::endl;
  std::cout<<"(a<b) ="<<!(a<b)<<std::endl;
  return 0;
}
