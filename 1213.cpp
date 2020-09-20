#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=1,n,c=1;
    //int n,c=1;
    while(scanf("%lld",&n)!=EOF)
    {
        while(a%n!=0)
            {
                a=(a*10+1)%n;
                c++;
                //flag=1;
            }
        //cout<<a<<endl;
        //cout<<flag<<endl;
        cout<<c<<endl;
        a=1;
        c=1;
        //flag=0;
    }
}
