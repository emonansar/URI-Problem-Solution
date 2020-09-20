#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,l=1;
    cin>>a;
    while(a/10>0)
    {
        l++;
        cout<<a%10;
        a=a/10;
    }
    cout<<a<<endl;
}
