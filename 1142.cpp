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
        cout<<i<<" "<<i+1<<" "<<i+2<<" PUM"<<endl;
        m=i+3;
        m++;
        if(c==n)
        {
            return 0;
        }
    }
}
