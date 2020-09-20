#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X,c=0;
    cin>>X;
    for(int i=X;c<6;i++)
    {
        if(i%2!=0)
        {
            c++;
            cout<<i<<endl;
        }
    }
}
