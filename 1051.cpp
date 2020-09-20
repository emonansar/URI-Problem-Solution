#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a;
    if(a>=0.00 && a<=2000.00)
    {
        cout<<"Isento"<<endl;
    }
    else if(a>=2000.01 && a<=3000.00)
    {
        a=a-2000.00;
        a=a*.08;
        cout<<"R$ "<<fixed<<setprecision(2)<<a<<endl;
    }
    else if(a>=3000.01 && a<=4500.00)
    {
        a=a-2000.00;
        b=a-1000.00;
        a=a-b;
        a=a*.08;
        b=b*.18;
        cout<<"R$ "<<fixed<<setprecision(2)<<a+b<<endl;
    }
    else if(a>=4500.00)
    {
        a=a-2000.00;
        b=a-1000.00;
        c=b-1500.00;
        a=a-b;
        b=b-c;
        a=a*.08;
        b=b*.18;
        c=c*.28;
        cout<<"R$ "<<fixed<<setprecision(2)<<a+b+c<<endl;
    }
}
