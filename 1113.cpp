#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a==b)
        {
            return 0;
        }
        if(a<b)
        {
            cout<<"Crescente"<<endl;
        }
        if(a>b)
        {
            cout<<"Decrescente"<<endl;
        }
    }
}
