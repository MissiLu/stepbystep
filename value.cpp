//
//  value.cpp
//  
//
//  Created by Елена Свечникова on 29/07/2019.
//

#include "value.hpp"
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int i;
    for (i=1;i<=3;i++)
    {
    cout<<"Введите делимое: ";
    cin>>a;
    cout<< "Введите делитель: ";
    cin>>b;
    
    if(b>0) cout<<"Результат: "<<a/b<<"\n";
    else cout<<"Деление на ноль недопустимо. \n";
    }
    
    return 0;
    
}
