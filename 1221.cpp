#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
        {
            cout<<"Not Prime"<<endl;
        }
        else if(x==2)
        {
            cout<<"Prime"<<endl;
        }
        else
        {
            for(int i=2;i<=x/2+1;i++)
            {
                if(x%i==0)
                {
                    cout<<"Not Prime"<<endl;
                    break;
                }
                else
                {
                    flag++;
                }
            }
            if(flag==x/2)
            {
            cout<<"Prime"<<endl;
            }
        }
        flag=0;
    }
}
