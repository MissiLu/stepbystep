//
//  stairway.cpp
//  
//
//  Created by Елена Свечникова on 29/07/2019.
//
//демонстрация цепочки if-else-if
#include "stairway.hpp"
#include <iostream>
using namespace std;

int main()
{
    int x;
    
    for(x=0;x<6;x++)
    {
        if (x==1) cout<< "x равно единице.\n";
        else if(x==2) cout <<" х равно двум.\n";
        else if (x==3) cout <<"x равно трем.\n";
        else if (x==4) cout<<"x равно четырем.\n";
        else cout<<"x не находится между 1 и 4.\n";
    }
    return 0;
}
