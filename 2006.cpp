#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[5],c=0;
    cin>>n;
    for(int i=0;i<=4;i++)
    {
        cin>>a[i];
        if(a[i]==n)
        {
            c++;
        }
    }
    cout<<c<<endl;

}
