#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,u;
    int n,sl,tl,m,l,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s>>t;
        sl=s.length();
        tl=t.length();
        m=sl+tl;
        if(sl>tl)
        {
           l=sl-tl;
           k=m-l;
           for(int i=0,j=0;i<k,j<tl;i+=2,j++)
           {
               u[i]=s[j];
           }
            for(int i=1,j=0;i<k,j<tl;i+=2,j++)
           {
               u[i]=t[j];
           }
           int i=0;
           while(l!=0)
           {
               l--;
               u[k+i]=s[tl+i];
               i++;
           }
        }
        if(sl==tl)
        {
            for(int i=0,j=0;i<m,j<sl;i+=2,j++)
           {
               u[i]=s[j];
           }
            for(int i=1,j=0;i<m,j<tl;i+=2,j++)
           {
               u[i]=t[j];
           }
        }
        if(sl<tl)
        {
           l=tl-sl;
           k=m-l;
           for(int i=0,j=0;i<k,j<sl;i+=2,j++)
           {
               u[i]=s[j];
           }
            for(int i=1,j=0;i<k,j<sl;i+=2,j++)
           {
               u[i]=t[j];
           }
           int i=0;
           while(l!=0)
           {
               l--;
               u[k+i]=t[sl+i];
               i++;
           }
        }
        for(int i=0;i<m;i++)
        {
            cout<<u[i];
        }
        cout<<endl;
    }
}
