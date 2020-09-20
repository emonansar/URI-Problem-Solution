#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n,sum=0,avg=0,c=0;
    while(1)
    {
        cin>>n;
        if(n<0)
        {
            avg=sum/c;
            cout<<fixed<<setprecision(2)<<avg<<endl;
            return 0;
        }
        sum=sum+n;
        c++;
    }
}
