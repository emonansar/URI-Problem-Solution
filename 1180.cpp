#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s,a;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        a=x[0];
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]<a)
        {
            a=x[i];
            s=i;
        }
    }
    cout<<"Menor valor: "<<a<<endl;
    cout<<"Posicao: "<<s<<endl;
}
