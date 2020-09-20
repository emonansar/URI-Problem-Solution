#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
if (a>b)
{
    if(b>c)
    {
        if((c+b)>a)
        {
          cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
        }
        else
        {

            cout<<"Area = "<<fixed<<setprecision(1)<<(0.5*(a+b)*c)<<endl;
        }

    }
    else
    {
        if(a<c)
        {
        cout<<b<<endl;
        cout<<a<<endl;
        cout<<c<<endl;
        }

        else{
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<a<<endl;
        }
    }
}
if(a<b)
{
    if(b<c)
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    else
    {
        if(a>c){
        cout<<c<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        }
        else{
        cout<<a<<endl;
        cout<<c<<endl;
        cout<<b<<endl;
        }

    }
}
cout<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;

return 0;
}
