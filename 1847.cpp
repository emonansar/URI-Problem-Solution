#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(b<=c)
        {
            cout<<":)"<<endl;
        }
        if(b>c)
        {
            if(b-c<a-b)
            {
                cout<<":)"<<endl;
            }
            else if(b-c>=a-b)
            {
                cout<<":("<<endl;
            }
        }
    }
    else if(a<b)
    {
        if(b>=c)
        {
            cout<<":("<<endl;
        }
        else if(b<c)
        {
            if(c-b<b-a)
            {
                cout<<":("<<endl;
            }
            else if(c-b>=b-a)
            {
                cout<<":)"<<endl;
            }
        }
    }
    else if(a==b)
    {
        if(c>b)
        {
            cout<<":)"<<endl;
        }
        else if(c<=b)
        {
            cout<<":("<<endl;
        }

    }
}
