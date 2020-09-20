#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    float r;
    string a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        l=a.length();
        r=(l/100.00);
        cout<<fixed<<setprecision(2)<<r<<endl;
    }
}
