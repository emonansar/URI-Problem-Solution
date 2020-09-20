#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,z;
    cin>>a>>b>>c;
    z=a+b+c;
    if(z>=24)
    {
        z=z-24;
        cout<<z<<endl;
    }
    else if(z<0)
    {
        z=24+z;
        cout<<z<<endl;
    }
    else if(z>=0 && z<24)
    {
        cout<<z<<endl;
    }
}
