#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,minn,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    minn=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<minn)
        {
            minn=a[i];
            m=i;
        }
    }
    cout<<m+1<<endl;
}
