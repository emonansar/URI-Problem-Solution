#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n],maxx;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        maxx=a[0];
        for(int i=1;i<n;i++)
        {
            if(maxx<a[i])
            {
                maxx=a[i];
            }
        }
        if(maxx<10)
        {
            cout<<1<<endl;
        }
        else if(maxx>=10 && maxx<20)
        {
            cout<<2<<endl;
        }
        else if(maxx>=20)
        {
            cout<<3<<endl;
        }
    }
}
