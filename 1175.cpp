#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[20],N[20],x=19,l;
    for(int i=0;i<20;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<20;i++)
    {
        l=x;
        N[i]=A[l];
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
        l=x--;
    }
}
