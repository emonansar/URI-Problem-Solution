#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,sum=0;
    cin>>a;
    hell:
    cin>>n;
    if(n<=0)
    {
        goto hell;
    }
    for(int i=1;i<=n;i++)
    {
        sum=sum+a;
        a++;
    }
    cout<<sum<<endl;
}
