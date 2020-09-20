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
      for(int i=0;i<11;i++)
    {
        for(int j=i+1;j<12;j++)
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
