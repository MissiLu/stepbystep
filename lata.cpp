//
//  lata.cpp
//  
//
//  Created by Елена Свечникова on 19/07/2019.
//

#include "lata.hpp"
#include <iostream>
//Эта программа выводит латинский алфавит
using namespace std;
 int main()
{
    char letter;
    for (letter='A'; letter<='Z';letter++)
        cout<<letter;
    return 0;
}
