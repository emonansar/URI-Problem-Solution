#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s=0;
    cin>>a>>b;
    if(a>=b && a<=24 && b<=24)
    {
        s=24-a;
        s=s+b;
        cout<<"O JOGO DUROU "<<s<<" HORA(S)"<<endl;
    }
    else if(a<=b && a<=24 && b<=24)
    {
        s=b-a;
        cout<<"O JOGO DUROU "<<s<<" HORA(S)"<<endl;
    }
}





   else {
     m=d-b;
    if(m<0){
        //c=c-1;
        //s=c-a-1;
        m=60-b;
        m=m+d;
        cout<<"O JOGO DUROU 24 HORA(S) E "<<m<<" MINUTO(S)"<<endl;
           }
    else{
        //s=c-a;
        cout<<"O JOGO DUROU 24 HORA(S) E "<<m<<" MINUTO(S)"<<endl;
          }
    }
