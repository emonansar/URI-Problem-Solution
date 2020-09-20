#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,c=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
            c=c+2;
            }
            if(s[i]=='2' || s[i]=='3' || s[i]=='5')
            {
            c=c+5;
            }
            if(s[i]=='6' || s[i]=='9' || s[i]=='0')
            {
            c=c+6;
            }
            if(s[i]=='7')
            {
            c=c+3;
            }
            if(s[i]=='4')
            {
            c=c+4;
            }
            if(s[i]=='8')
            {
            c=c+7;
            }
        }
        cout<<c<<" leds"<<endl;
        c=0;
    }
}
