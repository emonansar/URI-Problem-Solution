#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,s=0,m=0;
cin>>a>>b>>c>>d;
if (a>c)
   {
    s=24-a;
    m=d-b;
    if(m<0){
        s=s+c-1;
        m=60-b;
        m=m+d;
        cout<<"O JOGO DUROU "<<s<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
           }
    else{
        s=s+c;
        cout<<"O JOGO DUROU "<<s<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
        }
   }
   else if(a<c)
   {
    m=d-b;
    if(m<0){
        s=c-a-1;
        m=60-b;
        m=m+d;
        cout<<"O JOGO DUROU "<<s<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
           }
    else{
        s=c-a;
        cout<<"O JOGO DUROU "<<s<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
          }
   }
   else if(a==c)
   {
       m=d-b;
       if(m==0)
       {
          cout<<"O JOGO DUROU 24 HORA(S) E "<<m<<" MINUTO(S)"<<endl;
       }
       else if(m<0)
       {
        s=24-a;
        s=s+c-1;
        m=60-b;
        m=m+d;
        cout<<"O JOGO DUROU "<<s<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
       }
       else
       {
          cout<<"O JOGO DUROU 0 HORA(S) E "<<m<<" MINUTO(S)"<<endl;
       }
   }


}
