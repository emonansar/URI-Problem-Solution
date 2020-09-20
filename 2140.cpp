#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6],flag=0,n,m,sum=0;
    while(1){
    cin>>n>>m;
    if(n==0 && m==0)
    {
        return 0;
    }
    a[0]=2;
    a[1]=5;
    a[2]=10;
    a[3]=20;
    a[4]=50;
    a[5]=100;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<=5;j++)
        {
            sum=a[i]+a[j];
            if(sum==(m-n))
            {
                flag=1;
                break;
            }
            sum=0;
        }
    }
    if(flag==1)
    {
        cout<<"possible"<<endl;
        flag=0;
    }
    else
    {
        cout<<"impossible"<<endl;
        flag=0;
    }
    sum=0;
    }
}
