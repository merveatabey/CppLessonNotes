//burada c++'a işlemler yaptıracağız.
#include<iostream>
using namespace std;
int main()
{
    int a = 8;
    int b = 2 + (a = 5);
    cout<<"a = "<<endl<<"b = "<<endl;                //a ve b yi yazdırır ama karşısına değerini yazdırmaz.
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;         //a ve b yi denk gelen değeriyle birlikte yazdırır.

    cout<<"-------------------"<<endl; 

    a = b = -100;
    cout<<a<<endl<<b<<endl;        // a ve b birbirine eşit olan iki sayıdır,bunun çıktısı -100 şeklinde olacaktır.
    
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////

    a = 3; b = a++;        //çıktısı a = 4, b = 3 şeklindedir.  a++ a'yı yazdır sonra değerini bir arttır.
    a = 3; b = ++a;       //çıktısı a = 4, b = 4 şeklindedir.   ++a a'nın değerini bir arttır sonra yazdır.

    return 0;
}    