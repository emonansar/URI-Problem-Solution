#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,a=0,g=0,d=0;
    hell:
    cin>>x;
    while(1)
    {
     if(x==1)
     {
         a++;
     }
     if(x==2)
     {
         g++;
     }
     if(x==3)
     {
         d++;
     }
     if(x==4)
     {
         cout<<"MUITO OBRIGADO"<<endl;
         cout<<"Alcool: "<<a<<endl;
         cout<<"Gasolina: "<<g<<endl;
         cout<<"Diesel: "<<d<<endl;
         return 0;
     }
     else{
        goto hell;
     }
    }
}
