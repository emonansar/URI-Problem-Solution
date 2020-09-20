#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxx=0,i=0,m=0,t;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=maxx)
        {
            maxx=a[i];
        }
        else
        {
            m=i;
            //cout<<m<<endl;
            break;
        }
    }
    m=m+1;
    if(m>1)
    {
        cout<<m<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
