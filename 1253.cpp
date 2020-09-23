#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,l,d,sq;
    cin>>sq;
    while(sq!=0)
    {
        string a;
    cin>>a;
    cin>>s;
    l=a.length();
    for(int i=0;i<l;i++)
    {
        d=a[i];
        a[i]=a[i]-s;
        if(a[i]<65)
        {
            d=d-65;
            a[i]=91-(s-d);
        }
    }
    cout<<a<<endl;
        sq--;
    }
}
