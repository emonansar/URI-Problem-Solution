#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,c=0;
    hell:
    int i=1;
    cin>>x;
    while(1)
    {

     if(x==0)
     {
        return 0;
     }
     cout<<i;
     c++;
     if(c==x)
     {
        cout<<endl;
        c=0;
        goto hell;
     }
     cout<<" ";
     i++;
    }
}
