//
//  modul.cpp
//  
//
//  Created by Елена Свечникова on 23/07/2019.
//

#include "modul.hpp"
// демонастрация использования оператора %.
#include <iostream>
using namespace std;

int main()
{
    int x,y;
    x=10;
    y=3;
    cout<<x<<"/"<<y<<"равно"<<x/y<<"\n"<<"c остатком"<<x%y<<"\n";
    
    x=1;
    y=2;
    cout<<x<<"/"<<y<<"равно"<<x/y<<"\n"<<x<<"%"<<y<<"равно"<<x%y;
    return 0;
}
