#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,c=0,sum=0,avg;
    for(int i=1;i<=6;i++)
    {
        cin>>a;
        if(a>0)
        {
            sum=sum+a;
            c++;
        }
    }
    avg=sum/c;
    cout<<c<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<avg<<endl;
}
