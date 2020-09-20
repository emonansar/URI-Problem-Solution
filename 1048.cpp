#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,n_s;
    cin>>a;
    if(a>=0 && a<=400)
    {
        n_s=a+a*.15;
        a=n_s-a;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n_s<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(a>=400.01 && a<=800.00)
    {
        n_s=a+a*.12;
        a=n_s-a;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n_s<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(a>=800.01 && a<=1200.00)
    {
        n_s=a+a*.10;
        a=n_s-a;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n_s<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(a>=1200.01 && a<=2000.00)
    {
        n_s=a+a*.07;
        a=n_s-a;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n_s<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(a>2000.00)
    {
        n_s=a+a*.04;
        a=n_s-a;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n_s<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }


}
