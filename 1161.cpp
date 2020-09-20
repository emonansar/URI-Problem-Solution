#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,fact=1,fact1=1,i,j;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        //cout<<a<<" "<<b<<endl;
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
            //fact1=fact1*j;
        }
        for(j=1;j<=b;j++)
        {
            //fact=fact*i;
            fact1=fact1*j;
        }
        cout<<fact+fact1<<endl;
        fact=1;fact1=1;
    }
}
