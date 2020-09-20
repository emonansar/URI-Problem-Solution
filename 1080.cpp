#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],maxx,c=0;
    for(int i=1;i<=100;i++)
    {
        cin>>a[i];
        maxx=a[1];
    }
    for(int i=1;i<=100;i++)
    {
       if(a[i]>maxx)
       {
        maxx=a[i];
        c=i;
       }
    }
    cout<<maxx<<endl;
    cout<<c<<endl;
}
