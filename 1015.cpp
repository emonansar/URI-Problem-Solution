#include <bits/stdc++.h>
using namespace std;
int main(){
double x1,x2,y1,y2,d,s;
cin>>x1>>y1>>x2>>y2;
s=pow((x2-x1),2)+pow((y2-y1),2);
d=sqrt(s);

cout<<fixed<<setprecision(4)<<d<<endl;
return 0;
}
