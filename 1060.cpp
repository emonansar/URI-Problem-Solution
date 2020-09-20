#include<bits/stdc++.h>
using namespace std;
int main()
{
    float c=0,a;
    for(int i=1;i<=6;i++)
    {
        cin>>a;
        if(a>0)
        {
            c++;
        }
        a=0;
    }

    cout<<c<<" valores positivos"<<endl;
}
