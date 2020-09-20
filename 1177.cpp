#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N[1000],T,m=0;
    cin>>T;
    for(int i=0;i<1000;i++)
    {
        if(m>=T)
        {
            m=0;
        }
        N[i]=m;
        m++;
    }
    for(int i=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
}
