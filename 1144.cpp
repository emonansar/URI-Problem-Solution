

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=1,l,c=0;
    cin>>n;
    while(1)
    {
        int i=m;
        c++;
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        cout<<i<<" "<<i*i+1<<" "<<i*i*i+1<<endl;
        m++;
        if(c==n)
        {
            return 0;
        }
    }
}
