#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,sum=0,c=0,i=0;
    cin>>n;
    hell:
    cin>>x>>y;
    while(1)
    {
    if(x%2!=0)
    {
        c++;
        sum=sum+x;
        x++;
    }
    if(x%2==0)
    {
        x++;
    }
    if(c==y)
    {
        cout<<sum<<endl;
        sum=0;
        c=0;
        i++;
        if(i==n)
        {
            return 0;
        }
        else
        goto hell;
    }

    }

}
