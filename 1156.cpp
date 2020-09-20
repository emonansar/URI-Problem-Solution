#include <bits/stdc++.h>
using namespace std;
int main()
{
    float s=1,k=0;
    for(float i=3;i<=39;i+=2)
    {
        k++;
        s=s+i/pow(2,k);
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
}
