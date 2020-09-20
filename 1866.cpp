#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            cout<<0<<endl;
        }
        else if(a%2!=0)
        {
            cout<<1<<endl;
        }
    }
}
