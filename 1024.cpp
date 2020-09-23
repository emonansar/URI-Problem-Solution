#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,n;
    string a;
    cin>>n;
    while(n>=0)
    {
        getline(cin,a);
        l=a.length();
        char b[l];
        for(int i=0;i<l;i++)
        {
            if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
            {
                a[i]=a[i]+3;
            }
            b[l-1-i]=a[i];
        }
        for(int i=0;i<l;i++)
        {
            if(i>=l/2)
            {
                b[i]=b[i]-1;
            }
            cout<<b[i];
            if(i==l-1)
            {
                cout<<endl;
            }
        }
        n--;
    }

}
