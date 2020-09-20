#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ts=0,tb=0,ta=0,ts1=0,tb1=0,ta1=0,s,b,a,s1,b1,a1;
    double ps,pb,pa;
    string nn;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nn;
        cin>>s>>b>>a;
        cin>>s1>>b1>>a1;
        ts=ts+s;
        tb=tb+b;
        ta=ta+a;
        ts1=ts1+s1;
        tb1=tb1+b1;
        ta1=ta1+a1;
    }
    ps=(double)(ts1*100)/ts;
    pb=(double)(tb1*100)/tb;
    pa=(double)(ta1*100)/ta;
    cout<<"Pontos de Saque: "<<fixed<<setprecision(2)<<ps<<"%."<<endl;
    cout<<"Pontos de Bloqueio: "<<fixed<<setprecision(2)<<pb<<"%."<<endl;
    cout<<"Pontos de Ataque: "<<fixed<<setprecision(2)<<pa<<"%."<<endl;
}
