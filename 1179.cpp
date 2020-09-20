#include <bits/stdc++.h>
using namespace std;
int main()
{
    int par[5],impar[5],n[15],i=0,e=-1,o=-1,l=-1,m=-1;
    while(i<15)
    {
        cin>>n[i];
        i++;
    }
    for(int i=0;i<15;i++)
    {
        if(n[i]%2==0)
        {
            e++;
            par[e]=n[i];
            l++;
            if(e==4)
            {
                e=-1;
            }
        }
        if(l==4)
        {
            for(int i=0;i<=l;i++)
            {
                cout<<"par["<<i<<"] = "<<par[i]<<endl;
            }
            l=-1;
        }
        if(n[i]%2!=0)
        {
            o++;
            impar[o]=n[i];
            m++;
            if(o==4)
            {
                o=-1;
            }
        }
        if(m==4)
        {
            for(int i=0;i<=m;i++)
            {
                cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
            }
            m=-1;
        }

    }
        for(int i=0;i<=o;i++)
        {
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
        }
        for(int i=0;i<=e;i++)
        {
        cout<<"par["<<i<<"] = "<<par[i]<<endl;
        }
}
