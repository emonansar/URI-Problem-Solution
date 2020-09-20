#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int l,k;
    while(getline(cin,a)){
    //cout<<a.length()<<endl;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=32)
        {
            b=b+a[i];
        }
    }
    for(int i=0,j=1;j<b.length(),i<b.length();j+=2,i+=2)
    {
        if(b[i]>=97 && b[i]<=122)
        {
            b[i]=b[i]-32;
        }
        if(b[j]>=65 && b[j]<=90)
        {
            b[j]=b[j]+32;
        }
        //cout<<i<<" "<<j<<endl;
        //cout<<b[i];
        //cout<<b[j];
    }
    //cout<<endl;
    l=0;
    k=a.length();
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=32)
        {
            a[i]=b[l];
            l++;
        }
        //cout<<a[i];
    }
    cout<<a<<endl;
    //cout<<a.length()<<endl;
    //cout<<endl;
    a.clear();
    //cout<<a.length()<<endl;
    b.clear();
    }
}
