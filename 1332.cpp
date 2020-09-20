#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b="one",c="two",d="three";
    int l,o=0,t=0,th=0,n;
    cin>>n;
    while(n--){
    cin>>a;
    l=a.length();
    if(l==3)
    {
        for(int i=0;i<l;i++)
        {
            if(a[i]==b[i])
            {
                o++;
            }
            if(a[i]==c[i])
            {
                t++;
            }
        }
        if(o>=2)
        {
            cout<<1<<endl;
        }
        if(t>=2)
        {
            cout<<2<<endl;
        }
    }
    else
    {
        for(int j=0;j<l;j++)
        {
            if(a[j]==d[j])
            {
                th++;
            }
        }
        if(th>=4)
        {
            cout<<3<<endl;
        }
    }
    o=0;
    t=0;
    th=0;
    }

}
