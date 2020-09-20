#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,flag=0;
    cin>>n;
    hell:
    for(int i=1;i<=n;i++)
    {
        cin>>l;
        if(l==2)
        {
            cout<<l<<" eh primo"<<endl;
        }
        if(l>2)
        {
            for(int i=2;i<l;i++)
           {
            if(l%i==0)
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
           }
            if(flag==0)
            {
            cout<<l<<" nao eh primo"<<endl;
            }
            if(flag==1)
            {
            cout<<l<<" eh primo"<<endl;
            }

        }
    }
}
