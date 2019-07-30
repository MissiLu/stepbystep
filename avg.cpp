//
//  avg.cpp
//  
//
//  Created by Елена Свечникова on 19/07/2019.
//

#include "avg.hpp"
#include <iostream>
#include <cmath> //в учебникае использована cstdlib, но в данной проге она не работает
using namespace std;
int main()
{
    int i;
    double avg,val;
    
    avg=0.0;
    for(i=0;i<5;i++) {
        cout<<"Введите значение: ";
        cin>>val;
        avg=avg+abs(val);
    }
    avg=avg/5;
    cout<<"Среднее значение абсолютных значений: "<<avg;
    return 0;
}
