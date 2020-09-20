#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,z,sum=0,c=0;
    cin>>x;
    hell:
    cin>>z;
    while(1)
    {
        if(z<=x)
        {
            goto hell;
        }
        if(z>x)
        {
            for(int i=x;i<=z;i++)
            {
                sum=sum+i;
                c++;
                if(sum>z)
                {
                    cout<<c<<endl;
                    return 0;
                }
            }
        }
    }
}
