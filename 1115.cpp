#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a==0 || b==0)
        {
            return 0;
        }
        if(a>0 && b>0)
        {
            cout<<"primeiro"<<endl;
        }
        if(a<0 && b>0)
        {
            cout<<"segundo"<<endl;
        }
        if(a<0 && b<0)
        {
            cout<<"terceiro"<<endl;
        }
        if(a>0 && b<0)
        {
            cout<<"quarto"<<endl;
        }
    }
}
