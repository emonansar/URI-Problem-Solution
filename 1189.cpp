#include <bits/stdc++.h>
using namespace std;
int main()
{
    float M[12][12],sum=0,avg=0,n=0;
    char c;
    cin>>c;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>M[i][j];
        }
    }
    for(int j=0;j<=4;j++)
    {
        for(int i=j+1;i<=(11-j-1);i++)
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
