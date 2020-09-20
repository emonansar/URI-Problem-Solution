#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a==61) cout<<"Brasilia"<<endl;
    if(a==71) cout<<"Salvador"<<endl;
    if(a==11) cout<<"Sao Paulo"<<endl;
    if(a==21) cout<<"Rio de Janeiro"<<endl;
    if(a==32) cout<<"Juiz de Fora"<<endl;
    if(a==19) cout<<"Campinas"<<endl;
    if(a==27) cout<<"Vitoria"<<endl;
    if(a==31) cout<<"Belo Horizonte"<<endl;
    else if(a!=61 && a!=71 && a!=11 && a!=21 && a!=32 && a!=19 && a!=27 && a!=31)
        cout<<"DDD nao cadastrado"<<endl;
}
