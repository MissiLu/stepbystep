//
//  pif.cpp
//  
//
//  Created by Елена Свечникова on 19/07/2019.
//

#include "pif.hpp"
#include <iostream>
#include <cmath>
// использование теоремы пифагора для нахождения длины гипотенузы прямоугольника треугольника при заданных длинах двух его катетов
using namespace std;
int main()
{
    double x,y,z;
    x=5.0;
    y=4.0;
    z=sqrt(x*x+y*y);
    cout<<"Гипотенуза равна "<<z;
    
    return 0 ;
}
