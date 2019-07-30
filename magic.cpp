//
//  magic.cpp
//  
//
//  Created by Елена Свечникова on 29/07/2019.
//
// Программа магическое число
#include "magic.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int magic;//магическое число
    int guess;// догадка пользователя
    int i;
    for (i=1;i<=3;i++)
    {
    
    magic=rand();//получим случайное число
    
    cout<<"Введите вашу догадку: ";
    cin>>guess;
    
    if(magic==guess)
        cout<<"числа совпали, ура!";
    else
    {
        cout<<"вам не повезло Ж(";
        if(guess>>magic) cout<<"Ваше число слишком велико. \n";
        else cout<<"Ваше число слишком мало. \n";
    }
    }
    return 0;
}
