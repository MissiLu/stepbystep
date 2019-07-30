//
//  ifdemo.cpp
//  
//
//  Created by Елена Свечникова on 15/07/2019.
//

#include "ifdemo.hpp"
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    a=2;
    b=3;
    
    if (a<b) cout<<"a меньше чем b\n";
    
    if (a==b) cout<<"'это вы не увидите\n";
    
    cout<<"\n";
    
    c=a-b;
    
    cout<<"c содержит -1\n";
    if (c>=0) cout << "c неотрицательно\n";
    if (c<0) cout <<"c отрицательно\n";
    
    cout<< "\n";
    
    c=b-a;
    cout<<"c содержит 1\n";
    
    if (c>=0) cout << "c неотрицательно\n";
    if (c<0) cout << "c отрицательно\n";
    return 0;
    
}
