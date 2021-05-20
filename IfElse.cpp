//Şartlı Operatör
//sonuç = şart ? sonuç1 : sonuç2;
//eğer şart doğru ise sonuç = sonuç1
//eğer şart doğru değilse sonuç = sonuç2

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int a = 5;
    int b = 6;
    string c;

    c = a == b ? " 5 eşittir 6 " : " 5 eşit değildir 6 " ;
    cout<<c<<endl;
    /////////////////////////////////////////////////////

    int x = 300;
    if(x > 100)
      cout<<"x 100'den büyük bir değere sahiptir."<<endl;
    ////////////////////////////////////////////////////

    int i = 1;
    if (i != 1)
    {
        cout<< " i sayısı 1'e eşittir.... : " <<endl;
        i++;     //dead code
    }
    else
    {
        cout<< " i sayısı 1'den farklıdır.... : " <<endl;
    }
    ///////////////////////////////////////////////////

    int p = 2;
    if(p != 2)
    {
        cout<< " p sayısı 2'ye eşittir... : " <<endl;
        p++;
        cout<<p<<endl;
    }
    else
    {
        cout<< " p sayısı 2'den farklıdır.... : " <<endl;
        p--;
        cout<<p<<endl;
    }
    // eğer p sayısı 2 ye eşit değilse if komutunun altındaki kod çalışır fakat burada sayı 2'ye eşit olduğundan else komutu çalışacaktır.
    int r = 1;
    i++;
    cout<< " i sayısı = " ;                
    if ( i == 1 )    
    {
        cout<< i++ <<endl;
    }
    else
    {
        cout<< i-- <<endl;
    }
    // i sayısını 1 olarak algıladıktan sonra if komutunun içi sağlandığı için sayıyı 1 artırıp ekrana 2 sayısını yazdırır.
   
   string product = "Elma";
   if(product == "Çilek")
   {
       cout<< "siparişiniz alınmıştır ! " <<endl;
   } 
   else
   {
       cout<< "seçiminizi tekrar kontrol ediniz ! " <<endl;

   }
   ///////////////////////////////////////////////////////

   int num1, num2;
   cout<< "Enter two numbers ? : " ;
   cin>>num1>>num2;       //kullanıcının sayı girmesini sağlar.

   if(num1 < num2)
   {
       cout<<num1<< " < " <<num2;
   }
   else
   {
       cout<<num1<< " > " <<num2;
   }
   //////////////////////////////////////////////////////

   int n = 0;
   cout<<"n sayısı = ";
   if(i == 0)
   {
      cout<< "n = 0"<<endl;
   } 
      else if(n < 0)
      {
        cout<< "n < 0"<<endl;
      }
      else
      {
         cout<< "n > 0"<<endl;
      }
   ////////////////////////////////////////
   int sayi1;
   cout<< " Bir sayı giriniz : "; 
   cin>>sayi1;
   if(sayi1 % 2 == 0)
   {
       cout<< " çift sayı " <<endl;
   }
   else if (sayi1 % 2 != 0)
   {
       cout<< " tek sayı " <<endl;
   }
   //girilen sayının 2 ile bölümünden kalana göre sayının çift ya da tek olduğunu döndüren program.

   return 0;
}