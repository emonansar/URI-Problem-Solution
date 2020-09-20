#include <bits/stdc++.h>
using namespace std;
int main(){
int N,a,b,c;
cin>>N;
a=N/3600;
N=N%3600;
b=N/60;
c=N%60;
cout<<a<<":"<<b<<":"<<c<<endl;
return 0;
}
