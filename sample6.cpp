/* Эта программа иллюстрирует различия
типов int и double
*/
#include <iostream>
using namespace std;
int main()
{
 int ivar;
 double dvar;
 ivar=100;
 dvar=100.0;
 cout<<"Исходное значение ivar:"<<ivar<<"\n"   ;
 cout<<"Исходное значение dvar:"<<dvar<<'\n';
 cout<<"\n";
 ivar=ivar/3;
 dvar=dvar/3;
 cout<<"значение ivar после деления:"<<ivar<<"\n"   ;
 cout<<"значение dvar после деления:"<<dvar<<'\n';
 return 0;
}