#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<a-b<<endl;
        }
        if(a>b)
        {
           for(int i=b+1;i<a;i++)
           {
               if(i%2!=0)
               {
                   sum=sum+i;
               }
           }
           cout<<sum<<endl;
           sum=0;
        }
        if(a<b)
        {
           for(int i=a+1;i<b;i++)
           {
               if(i%2!=0)
               {
                   sum=sum+i;
               }
           }
           cout<<sum<<endl;
           sum=0;
        }
    }
}
