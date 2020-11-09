#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    long int n;
    while(cin>>a>>n)
    {
        int c[n];
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for(int k=0;k<n;k++)
        {
            for(int j=0;j<=26;j++)
            {
                if(j==c[k])
                {

                    cout<<a[j-1];
                }
            }
        }
        cout<<endl;
    }
}
