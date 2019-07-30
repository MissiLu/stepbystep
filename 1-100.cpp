//
//  1-100.cpp
//  
//
//  Created by Елена Свечникова on 28/07/2019.
//

#include "1-100.hpp"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int i;
    bool isprime;
    
    
    for (i=1;i<=100;i++)
    {isprime = true;
        for (n=2;n<=i/2; n++)
            if((i%n)==0) isprime=false;
        
        if (isprime)
            cout<< i <<"простое.\n";
       
      
    }
    return 0;
}
