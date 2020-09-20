#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,sum=0,c=0;
    hell:
    cin>>x;
    while(1)
    {
     if(x==0)
     {
        return 0;
     }
    if(x%2==0)
    {
        c++;
        sum=sum+x;
        x++;
    }
    if(x%2!=0)
    {
        x++;
    }
    if(c==5)
    {
        cout<<sum<<endl;
        sum=0;
        c=0;
        goto hell;
    }

    }

}
