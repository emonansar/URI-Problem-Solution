#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n,l,r=0,w=0;
    cin>>a>>n;
    l=a.length();
    for(int i=0;i<l;i++)
    {
        if(a[i]=='r' || a[i]== 'w')
        {
            r++;
            if(n>1 && r==n)
            {
               w++;
               r=0;
            }
            if(a[i]=='w')
            {
                w++;
                w=w+r;
                r=0;
            }
        }
    }
    if(r>0 && r<n)
    {
        r=1;
    }
    cout<<w+r<<endl;
}
