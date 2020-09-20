#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,l,h;
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
    for(int i=l+1;i<h;i++)
    {
        if(i%5==2 || i%5==3)
        {
            cout<<i<<endl;
        }
    }
}
