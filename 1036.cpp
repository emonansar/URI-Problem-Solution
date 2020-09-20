#include <bits/stdc++.h>
using namespace std;
int main(){
float A,B,C,x1,x2,p,q;
cin>>A>>B>>C;
q=pow(B,2)-4*A*C;

//cout<<p<<endl;
if (q>=0 && A!=0)
{
   p=sqrt(q);
   x1=(-B+p)/(2*A);
   x2=(-B-p)/(2*A);
   cout<<"R1 = "<<fixed<<setprecision(5)<<x1<<endl;
   cout<<"R2 = "<<fixed<<setprecision(5)<<x2<<endl;
}
else
{
    cout<<"Impossivel calcular"<<endl;
}



return 0;
}
