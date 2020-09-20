#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,l,h,sum=0;
    cin>>x>>y;
    if(x>y)
    {
        l=y;
        h=x;
    }
    if(x<y)
    {
        l=x;
        h=y;
    }
    for(int i=l;i<=h;i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
}
