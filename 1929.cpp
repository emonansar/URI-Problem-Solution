#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],temp=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(a[0]+a[1]>a[2] || a[1]+a[2]>a[3])
    {
        cout<<"S"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }
}
