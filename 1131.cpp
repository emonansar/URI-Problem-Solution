#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,e=0,g=0,i=0,x,c=0;
    hell:
    while(1)
    {
        cin>>a>>b;
        c++;
        if(a==b)
        {
            e++;
        }
        if(a>b)
        {
            i++;
        }
        if(a<b)
        {
            g++;
        }
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>x;
        if(x==1)
        {
            goto hell;
        }
        if(x==2)
        {
            cout<<c<<" grenais"<<endl;
            cout<<"Inter:"<<i<<endl;
            cout<<"Gremio:"<<g<<endl;
            cout<<"Empates:"<<e<<endl;
            if(i>g)
            {
                cout<<"Inter venceu mais"<<endl;
            }
            if(i<g)
            {
                cout<<"Gremio venceu mais"<<endl;
            }
            if(i==g)
            {
                cout<<"Nao houve vencedor"<<endl;
            }
            return 0;
        }
    }
}
