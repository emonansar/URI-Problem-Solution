#include <bits/stdc++.h>
using namespace std;
int main(){
int N,a,b,c;
cin>>N;
a=N/365;
N=N%365;
b=N/30;
c=N%30;
cout<<a<<" ano(s)"<<endl<<b<<" mes(es)"<<endl<<c<<" dia(s)"<<endl;
return 0;
}

