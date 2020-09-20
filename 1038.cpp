#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y;
    float p;
    cin>>X>>Y;
    if(X==1)
    {
        p=4.00*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<p<<endl;
    }
    else if(X==2)
    {
        p=4.50*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<p<<endl;
    }
      else if(X==3)
    {
        p=5.00*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<p<<endl;
    }
      else if(X==4)
    {
        p=2.00*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<p<<endl;
    }
     else if(X==5)
    {
        p=1.50*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<p<<endl;
    }
    return 0;
}
