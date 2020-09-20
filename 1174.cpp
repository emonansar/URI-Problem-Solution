#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x[100];
    for(int i=0;i<100;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<100;i++)
    {
        if(x[i]<=10)
        {
            cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<x[i]<<endl;
        }
    }
}
