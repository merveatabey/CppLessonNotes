#include<iostream>

int a = 1 ;
int main ()
{
   a+=1;
   std::cout<<a<<"\n";
   a-=1;
   std::cout<<a<<"\n";
   a*=3;
   std::cout<<a<<"\n";
   a%=1;             //mod alma işlemi
   std::cout<<a<<"\n";
   a/=2;            //bölme işlemi
   std::cout<<a<<"\n";

   ////////////////////////////////////
   std::cout<<"----------"<<"\n";
   int x = 10;
   int y = x;
   std::cout<<y<<"\n";
   ///////////////////////////////////

   std::cout<<"----------"<<"\n";
   int m = 10;
   int z = m;
   z = z + 5;
   std::cout<<"m değişkeninin değeri : "<<m<<"\n";
   std::cout<<"z değişkeninin değeri : "<<z<<"\n";
   return 0;


}