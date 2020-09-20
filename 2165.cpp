#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l=0;
    string a;
    getline(cin,a);
    l=a.length();
    if(l>140)
    {
        cout<<"MUTE"<<endl;
    }
    else if(l<=140)
    {
        cout<<"TWEET"<<endl;
    }
}
