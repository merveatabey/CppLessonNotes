//burada cout'un farklı kullanım şekillerini göreceğiz.
#include<iostream>
#include<string>
using namespace std;
int main ()
{
    cout<< "Merhaba" <<endl;
    cout<< "Bu bir C++ deneme yazısıdır" <<endl;

    // endl sonrasında gelen kodların alt satırdan devam etmesini sağlar. 

    string str1 = "Merhaba Dünya \n";
    string str2 = "Nasılsın \n";
    cout<<str1<<str2;

    // \n işareti sonrasında gelen kodların alt satırdan devam etmesini sağlar.

    string mystring;
    mystring = "İlk Değer";
    cout<<mystring<<endl;
    mystring = "Son Değer";
    cout<<mystring<<endl;
    ////////////////////////////////////////////////////////

    string str3 = "Merhaba \n";
    string str4 = "Bilgisayar Bölümü Öğrencileri \t";
    string str5 = "Nasılsınız";
    cout<< str3<< str4<< str5<< endl;
    return 0;

     // \t iki kelime arasında bir tab kadar boşluk bırakır.



}


