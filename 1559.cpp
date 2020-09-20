#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a="Ho";
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<a<<"!"<<endl;
            break;
        }
        cout<<a<<" ";
    }
}
