#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        for(int i=1;i<x;i++)
        {
            if(x%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==x)
        {
            cout<<x<<" eh perfeito"<<endl;
        }
        else
        {
            cout<<x<<" nao eh perfeito"<<endl;
        }
        sum=0;
    }
}
