#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,a;
    cin>>N;
    cout<<N<<endl;

        a=N/100;
        N=N%100;
        cout<<a<< " nota(s) de R$ 100,00"<<endl;

        a=N/50;
        cout<<a<< " nota(s) de R$ 50,00"<<endl;

        N=N%50;
        a=N/20;
        cout<<a<< " nota(s) de R$ 20,00"<<endl;

        N=N%20;
        a=N/10;
        cout<<a<< " nota(s) de R$ 10,00"<<endl;

        N=N%10;
        a=N/5;
        cout<<a<< " nota(s) de R$ 5,00"<<endl;

        N=N%5;
        a=N/2;
        cout<<a<< " nota(s) de R$ 2,00"<<endl;

        N=N%2;
        a=N/1;
        cout<<a<< " nota(s) de R$ 1,00"<<endl;
    return 0;
    }


