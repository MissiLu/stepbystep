//
//  FtoMTable.cpp
//  
//
//  Created by Елена Свечникова on 16/07/2019.
//

#include "FtoMTable.hpp"
/* проект 1-2
 
 эта программа выводит на экран таблицу преборазования футов в метры.
 */

#include <iostream>
using namespace std;
int main()
{
    double f,m;
    int counter;
    
    counter=0;
    
    for(f=1.0;f<=100;f++) {
        m=f/3.28;
        cout<<f<<" футов составляет "<<m<<" метров.\n";
        counter++;
        if (counter==25){
            cout<<"\n";
            counter=0;
        }
    }
    return 0;
}
