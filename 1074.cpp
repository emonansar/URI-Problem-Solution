#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0 && a>0)
        {
            cout<<"EVEN POSITIVE"<<endl;
        }
        if(a%2!=0 && a>0)
        {
           cout<<"ODD POSITIVE"<<endl;
        }
        if(a%2==0 && a<0)
        {
          cout<<"EVEN NEGATIVE"<<endl;
        }
        if(a%2!=0 && a<0)
        {
           cout<<"ODD NEGATIVE"<<endl;
        }
        if(a==0)
        {
           cout<<"NULL"<<endl;
        }
    }
}
