#include <iostream>
int main (void)
{
  using namespace std;
  cout<<"Entre número de horas"<<endl;
  double h,m,s,d,a,sem;
  cin>>h;
  m=60*h;
  s=60*m;
  d=h/24;
  sem=d/7;
  a=d/365;
  cout<<s<<" segundos"<<endl;
  cout<<m<<" minutos"<<endl;
  cout<<d<<" dias"<<endl;
  cout<<sem<<" semanas"<<endl;
  cout<<a<<" años"<<endl;
  return 0;

}
