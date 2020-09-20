#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c[4],r;
    for(int i=0;i<4;i++)
    {
        cin>>c[i];
        if(c[i]==1)
        {
            r=i;
        }
    }
    cout<<r+1<<endl;
}
