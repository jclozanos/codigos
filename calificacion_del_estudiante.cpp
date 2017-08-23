//Este programa pide al ususario ingresar la nota de quices, nota intermedia y nota final de un estudiante, calcula su promedio y conforme a este determina el grado de la calificación del estudiante
#include <iostream>
#include <string>
int main(void)
{
  float quiz=0, parcial1=0, parcial2=0, promedio=0;
  std::string grado="bajo"; 
  std::cout<<"Ingrese la nota del quiz"<<std::endl;
  std::cin>>quiz;
  std::cout<<"Ingrese la nota del primer parcial"<<std::endl;
  std::cin>>parcial1;
  std::cout<<"Ingrese la nota del segundo parcial"<<std::endl;
  std::cin>>parcial2;
  promedio=(quiz+parcial1+parcial2)/3;
  
  if(promedio>=4.6)
    {
      grado="superior";
      //std::cout<<"Desempeño superior"<<std::endl;
    }
  if(promedio<4.6 && promedio>=3.9)
    {
      grado="alto";
      //std::cout<<"Desempeño alto"<<std::endl;
    }
  if(promedio<3.9 && promedio>=3.0)
    {
      grado="básico";
      //std::cout<<"Desempeño básico"<<std::endl;
    }
  if(promedio<3.0)
    {
      grado="bajo";
      //std::cout<<"Desempeño bajo"<<std::endl;
    }
  std::cout<<"Desempeño "<<grado<<std::endl;
  return 0;
}
