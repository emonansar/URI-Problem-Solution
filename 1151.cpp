#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=1,F=0,n;
    cin>>n;
    cout<<a<<" "<<b;
    for(int i=1;i<=n-2;i++)
    {
        F=a+b;
        cout<<" "<<F;
        a=b;
        b=F;
    }
    cout<<endl;
}
