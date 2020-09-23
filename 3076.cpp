#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    while(scanf("%d",&n)!=EOF)
    {
        if(n/100!=0)
        {
            d=n/100;
            if(n%100==0)
            {
                cout<<d<<endl;
            }
            else
            {
                cout<<d+1<<endl;
            }
        }
        else
        {
            cout<<1<<endl;
        }
    }
}
