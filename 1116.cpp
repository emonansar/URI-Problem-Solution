#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    float div;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>x>>y;
       if(y==0)
       {
        cout<<"divisao impossivel"<<endl;
       }
       else
       {
        div=(float)x/y;
        cout<<fixed<<setprecision(1)<<div<<endl;
       }
    }
}
