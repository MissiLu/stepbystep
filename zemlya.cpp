//
//  zemlya.cpp
//  
//
//  Created by Елена Свечникова on 18/07/2019.
//

/*#include "zemlya.hpp" // код с задачей 13 стр 58
#include <iostream>
using namespace std;
int main()
{
    double f_e, f_m;
    int counter;//счетчик сторк
    counter=0;
    
    for (f_e=1; f_e<=100; f_e++){
        f_m=0.17*f_e;
        cout<<f_e<<" земных фунтов составляет"<<f_m<<"лунных фунтов.\n";
        counter++;
        if(counter==25) {
            cout<<"\n";
            counter=0;
        }
    }
    return 0;
        
}
*/

//код с задачей 14 стр 58

/*#include <iostream>
using namespace std;
int main()
{
    double t_upiter, t_zemlya;
    cout<<"введите количество лет, проведенных вами на Юпитере \n";
    cin>>t_upiter;
    t_zemlya=t_upiter*12;
    cout<<t_upiter<<" лет на Юпитере составляет "<<t_zemlya<<" земных лет.\n";
    return 0;
}
    
*/
//код с задачей 16 на стр 58
/*#include <iostream>
using namespace std;
int main()
{
    double a,b,c,d,e;
    int sum_count;
    cout<<"введите цифры вашей зарплаты за последние пять месяцев \n";
    cin>>a>>b>>c>>d>>e;
    sum_count=(a+b+c+d+e)/5;
    cout<<"Ваш средний доход составил "<<sum_count<<" рублей.\n";

    return 0;
}
*/

//код с последней задачей по учебнику

#include <iostream>
#include <cstdlib>
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
