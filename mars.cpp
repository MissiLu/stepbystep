//
//  mars.cpp
//  
//
//  Created by Елена Свечникова on 20/07/2019.
//

#include "mars.hpp"

#include <iostream>
using namespace std;
int main()
{
    double dist,lspeed,delay,delay_min;
    dist=34000000;
    lspeed=186000;
    delay=dist/lspeed;
    cout<<"Временная задержка при разговоре с Марсом: "<<delay<<"секунд.\n";
    delay_min=delay/60;
    cout<<"Это составляет "<<delay_min<<"минут.\n";
    return 0;
}
