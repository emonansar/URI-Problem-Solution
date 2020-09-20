#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q,r,maxx;
    cin>>a>>b;
    if(a<=0 && b>=0){
    for(int i=0;i>=a;i--)
    {
        if(i*b<=a)
        {
            maxx=i;
            //cout<<i<<endl;
            break;
        }

    }
    //cout<<maxx<<endl;
    r=a-(b*maxx);
    cout<<maxx<<" "<<r<<endl;
    }
    else if(a>=0 && b<=0){
    for(int i=0;i>=-a;i--)
    {
        if(i*b<=a)
        {
            maxx=i;
            //cout<<i<<endl;
            //break;
        }

    }
    r=a-(b*maxx);
    cout<<maxx<<" "<<r<<endl;
    }
    else if(a>=0 && b>=0)
    {
    r=a/b;
    q=a%b;
    cout<<r<<" "<<q<<endl;
    }
    else if(a<=0 && b<=0)
    {
    for(int i=0;i<=-a;i++)
    {
        if(i*b<=a)
        {
            maxx=i;
            //cout<<i<<endl;
            break;
        }

    }
    r=a-(b*maxx);
    cout<<maxx<<" "<<r<<endl;
    //cout<<r<<endl;
    }
}
