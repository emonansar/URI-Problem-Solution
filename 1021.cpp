#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    int T,a,S;
    cin>>N;

    S=N;
    T=N*100;

    //S=abs(T-N);
    cout<<"NOTAS:"<<endl;
        a=S/100;
        S=S%100;
        cout<<a<< " nota(s) de R$ 100.00"<<endl;

        a=S/50;
        cout<<a<< " nota(s) de R$ 50.00"<<endl;

        S=S%50;
        a=S/20;
        cout<<a<< " nota(s) de R$ 20.00"<<endl;

        S=S%20;
        a=S/10;
        cout<<a<< " nota(s) de R$ 10.00"<<endl;

        S=S%10;
        a=S/5;
        cout<<a<< " nota(s) de R$ 5.00"<<endl;

        S=S%5;
        a=S/2;
        cout<<a<< " nota(s) de R$ 2.00"<<endl;

        S=S%2;
        a=S/1;


     cout<<"MOEDAS:"<<endl;
        cout<<a<< " moeda(s) de R$ 1.00"<<endl;
        T=T%100;
        a=T/50;
        //S=fmod(S,.50);
        cout<<a<< " moeda(s) de R$ 0.50"<<endl;
        T=T%50;
        a=T/25;
        //S=fmod(S,.25);
        cout<<a<< " moeda(s) de R$ 0.25"<<endl;
        T=T%25;
        a=T/10;
        //S=fmod(S,.10);
        cout<<a<< " moeda(s) de R$ 0.10"<<endl;
        T=T%10;
        a=T/5;
        //S=fmod(S,.05);
        cout<<a<< " moeda(s) de R$ 0.05"<<endl;
        T=T%5;
        a=T/1;
        //S=fmod(S,.01);
        cout<<a<< " moeda(s) de R$ 0.01"<<endl;

    return 0;
    }


