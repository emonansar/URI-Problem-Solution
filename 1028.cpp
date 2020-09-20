#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x,p;
    cin>>n;
    while(n--){
    cin>>a>>b;
    if(a>=b)
    {
        x=b;
        b=a;
        a=x;
    }
    while(true)
    {
        p=b%a;
        if(p==0)
        {
            cout<<a<<endl;
            break;
        }
        b=a;
        a=p;
    }
    //cout<<p<<endl;
    }
}
