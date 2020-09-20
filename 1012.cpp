#include <bits/stdc++.h>
using namespace std;
int main(){
double A,B,C,T,Cr,Tr,S,R;
double pi=3.14159;
cin>>A>>B>>C;
T=.5*A*C;
cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<T<<endl;
Cr=pi*pow(C,2);
cout<<"CIRCULO: "<<fixed<<setprecision(3)<<Cr<<endl;
Tr=.5*(A+B)*C;
cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<Tr<<endl;
S=pow(B,2);
cout<<"QUADRADO: "<<fixed<<setprecision(3)<<S<<endl;
R=A*B;
cout<<"RETANGULO: "<<fixed<<setprecision(3)<<R<<endl;
return 0;
}
