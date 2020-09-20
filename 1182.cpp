#include <bits/stdc++.h>
using namespace std;
int main()
{
    float M[12][12],ls,sum=0,avg=0;
    char c;
    cin>>ls>>c;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>M[i][j];
        }
    }
      for(int j=ls;j<=ls;j++)
    {
        for(int i=0;i<12;i++)
        {
            sum=sum+M[i][j];
        }
    }
    if(c=='S')
    {
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    if(c=='M')
    {
        avg=sum/12;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }
}
