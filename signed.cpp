//
//  signed.cpp
//  
//
//  Created by Елена Свечникова on 19/07/2019.
//

#include "signed.hpp"
#include <iostream>
//эта программа демонстрирует различие между целыми числами со знаками и без знака
using namespace std;
int main()
{
    short int i;
    short unsigned int j;
    j=50000;
    i=j;
    cout<<i<<" "<<j;
    
    return 0;
}
