#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c=0,d=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a>=10 && a<=20)
        {
            c++;
        }
        else{
            d++;
        }
    }
    cout<<c<<" in"<<endl;
    cout<<d<<" out"<<endl;
}
