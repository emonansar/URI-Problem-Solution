#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,c=0,i=1;
    cin>>x>>y;
    hell:
    while(1)
    {
        if(i>y)
        {
        return 0;
        }
        cout<<i;
        c++;
        if(c==x)
        {
            if(i>y)
            {
            return 0;
            }
            cout<<endl;
            c=0;
            i++;
            goto hell;
        }
        if(i>y)
        {
            return 0;
        }
        i++;
        cout<<" ";
    }
}
