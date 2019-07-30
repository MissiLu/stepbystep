//
//  bool.cpp
//  
//
//  Created by Елена Свечникова on 19/07/2019.
//

#include "bool.hpp"
#include <iostream>
using namespace std;
int main()
{
    bool b;
    b=false;
    cout<<"b равно "<<b<<"\n";
    b=true;
    cout<<"b равно "<<b<<"\n";
    
    if(b) cout<<"Это выполняется.\n";
    
    b=false;
     if(b) cout<<"Это не выполняется.\n";
    
    cout<<"10>9 есть "<<(10>9)<<"\n";
    return 0;
}
