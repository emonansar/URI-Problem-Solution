#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d;
  double p,q,t,t1,t2;
  cin>>a>>b>>p;
  cin>>c>>d>>q;
  t1=b*p;
  t2=d*q;
  t=t1+t2;
  cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<t<<endl;
  return 0;

}
