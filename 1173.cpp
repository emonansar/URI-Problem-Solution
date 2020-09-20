#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[10],n,l;
    cin>>n;
    x[0]=n;
    for(int i=1;i<10;i++)
    {
        l=2*n;
        x[i]=l;
        n=l;
    }
    for(int i=0;i<10;i++)
    {
        cout<<"N["<<i<<"] = "<<x[i]<<endl;
    }
}
