//Проект 2-2 
// Реализация операции XOR с помощтю логических операторов C++.


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
bool p,q;

p=true;
q=true;

cout<<p<<"XOR"<<q<<" равно "<< ((p||q)&&!(p&&q))<<"\n";


p=false;
q=true;

cout<<p<<"XOR"<<q<<" равно "<< ((p||q)&&!(p&&q))<<"\n";

p=true;
q=false;

cout<<p<<"XOR"<<q<<" равно "<< ((p||q)&&!(p&&q))<<"\n";

p=false;
q=false;

cout<<p<<"XOR"<<q<<" равно "<< ((p||q)&&!(p&&q))<<"\n";

return 0;

}
