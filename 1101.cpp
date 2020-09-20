#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,M,N,k,sum=0;
    cin>>M>>N;
    if(M>0 && N>0 && M>N)
    {
        i=N;
        k=M;
    }
    else if(M>0 && N>0 && M<N)
    {
        i=M;
        k=N;
    }
    else{
        return 0;
    }
    for(int j=i;j<=k;j++)
    {
        sum=sum+j;
        cout<<j<<" ";
    }
    cout<<"Sum="<<sum<<endl;

}
