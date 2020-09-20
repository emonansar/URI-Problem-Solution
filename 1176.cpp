#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        if(m==0)
        {
            cout<<"Fib(0) = "<<0<<endl;
        }
        if(m==1)
        {
            cout<<"Fib(1) = "<<1<<endl;
        }
        else if(m>1)
        {
            long long a=0,b=1,F=0;
            for(int i=2;i<=m;i++)
            {
                F=a+b;
                a=b;
                b=F;
            }
            cout<<"Fib("<<m<<") = "<<F<<endl;
        }
    }
}
