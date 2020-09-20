#include <bits/stdc++.h>
using namespace std;
int main()
{
    double M[12][12],sum=0,avg=0,n=0,d=6,f=6;
    char c;
    cin>>c;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>M[i][j];
        }
    }
    for(int i=7;i<=11;i++)
    {
        d--;
        f--;
        for(int j=d;j<=11-f;j++)
        {
            sum=sum+M[i][j];
            n++;
        }
    }
    if(c=='S')
    {
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    if(c=='M')
    {
        avg=sum/n;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }
}
