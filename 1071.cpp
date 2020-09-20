#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y,sum=0;
    cin>>X>>Y;
    for(int i=Y+1;i<=X-1;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
}
