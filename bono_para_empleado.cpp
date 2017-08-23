//Este programa pide el número de años trabajados por un empleado en una compañía, y si este es mayor a 5 años. Si esto se cumple, pide el salario del empleado, y con respecto a este, da el monto de un bono del 5% que le dará la compañía
#include <iostream>
int main(void)
{
  std::cout<<"Ingrese el número de años laborados en la compañía"<<std::endl;
  int a;
  std::cin>>a;
  if(a>5)
    {
      std::cout<<"Ingrese el monto de su salario"<<std::endl;
      int s,b;
      std::cin>>s;
      b=s*0.05;
      std::cout<<"El valor de su bono es de "<<b<<std::endl;  
    }
  else
    {
      std::cout<<"Usted no aplica para el bono"<<std::endl;
    }
  return 0;
}
