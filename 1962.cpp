#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a,n,i,r;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a<2015)
        {
            r=2015-a;
            cout<<r<<" D.C."<<endl;
        }
        else if(a>=2015)
        {
            r=a-2015+1;
            cout<<r<<" A.C."<<endl;
        }
    }
}
