//birden çok karşılaştırmalarda switch kullanımı daha uygun olabilir.
#include<iostream>
using namespace std;
int main ()
{
    int i;
    cout<< " 1 ile 4 arasında bir sayı giriniz : "; 
    cin>>i;

    switch(i)
    {
        case1:
        cout<<"1 sayısını girdiniz"<<endl;
        break;
        case2:
        cout<<"2sayısını girdiniz"<<endl;
        break;
        case3:
        cout<<"3 sayısını girdiniz"<<endl;
        break;
        case4:
        cout<<"4 sayısını girdiniz"<<endl;
        break;
        default:
        cout<<"istenilenden farklı bir sayı girdiniz"<<endl;
    }
    
    //aynı örneği bir de if ile inceleyelim
    if (i == 1)
    cout<<"1 sayısını girdiniz"<<endl;
    else if (i == 2)
    cout<<"2 sayısını girdiniz"<<endl;
    else if (i == 3)
    cout<<"3 sayısını girdiniz"<<endl;
    else if (i == 4)
    cout<<"4 sayısını girdiniz"<<endl;
    else
    cout<<"istenilenden farklı bir sayı girdiniz"<<endl;

    /////////////////////////////////////////////////////

    int a = 5;
    switch(a)
    {
        case1:
        cout<<"sayı = 1"<<endl;
        break;
        case2:
        cout<<"sayı = 2"<<endl;
        break;
        case3:
        cout<<"sayı = 3"<<endl;
        break;
        default:
        cout<<"maalesef sayıyı tahmin edemiyorum"<<endl;
    }

    return 0;    
}