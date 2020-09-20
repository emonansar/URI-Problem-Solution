#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a=="Thor" && b>=1)
        {
            cout<<"Y";
        }
        else
        {
            cout<<"N";
        }
        cout<<endl;
    }
}
