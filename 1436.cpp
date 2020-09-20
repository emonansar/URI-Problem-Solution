#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[7],k,l,c=0;
    cin>>n;
    while(n--)
    {
        cin>>k;
        c++;
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        l=(k+1)/2;
        cout<<"Case "<<c<<": "<<a[l-1]<<endl;
        fill_n(a, k, 0);
    }
}
