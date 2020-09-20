#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float a,b,c,avg;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        avg=(2*a+3*b+5*c)/10;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }
}
