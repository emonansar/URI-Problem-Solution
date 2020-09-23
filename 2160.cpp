#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    string c;
    getline(cin,c);
    l=c.length();
    if(l<=80)
    {
        cout<<"YES"<<endl;
    }
    else if(l>80)
    {
        cout<<"NO"<<endl;
    }
}
