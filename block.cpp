//
//  block.cpp
//  
//
//  Created by Елена Свечникова on 16/07/2019.
//

#include "block.hpp"

//демонстрация програмного блока

#include <iostream>
using namespace std;

int main() {
    double result, n, d;
    
    cout<<"Введите значение: ";
    cin>>n;
    
    cout<<"Введите делитель: ";
    cin>>d;
    
    // целевым объектом предложения if является блок
    
    if(d!=0) {
        cout<<"d не равно нулю, поэтому делить можно"<<"\n";
        result=n/d;
        cout<<n<<"/"<<d<<" равно"<< result<<"\n";
    }
    return 0;
}
