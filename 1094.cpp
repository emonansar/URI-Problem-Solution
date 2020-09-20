#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sumanimal=0,total=0,c=0,r=0,s=0;
    float per1,per2,per3;
    cin>>n;
    int a[n];
    char b[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        sumanimal=sumanimal+a[i];
    }
    total=sumanimal;
    for(int i=1;i<=n;i++)
    {
        if(b[i]=='C')
        {
            c=c+a[i];
            per1=((float)c/total)*100;
        }
        if(b[i]=='R')
        {
            r=r+a[i];
            per2=((float)r/total)*100;
        }
        if(b[i]=='S')
        {
            s=s+a[i];
            per3=((float)s/total)*100;
        }
    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<per1<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<per2<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<per3<<" %"<<endl;
}
