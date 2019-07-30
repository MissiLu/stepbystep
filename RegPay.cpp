//
//  RegPay.cpp
//  
//
//  Created by Елена Свечникова on 28/07/2019.
//

#include "RegPay.hpp"
#include <iostream>
#include <cmath>
using namespace std;
 int main()
{
double Principal; //начальная сумма ссуды
double IntRate; //процентная ставка

double PayPerYear; //число платежей в год
double NumYears; // число лет

double Payment; //регулярный платеж
double numer, denom; //временные рабочие переменные
double b,e; //основание и порядок для вызова функции pow()

cout<< "Введите сумму ссуды: ";
cin>>Principal;

cout<<"Введите процентную ставку (например 0.075): ";
cin>>IntRate;

cout<<"Введите число платежей в год: ";
cin>>PayPerYear;

cout <<"Введите число лет: ";
cin>>NumYears;

numer=IntRate*Principal/PayPerYear;

e=-(PayPerYear*NumYears);
b=(IntRate/PayPerYear)+1;

denom=1-pow(b,e);

Payment=numer/denom;

cout<<"Платеж составляет "<<Payment;
    
    cout<<"Сумма выплаченных процентов составит:"<<((Payment*(-e))-(Principal));

return 0;

}


