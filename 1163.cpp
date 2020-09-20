#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double a,r,h,v,p1,p2,g;
    int n;
    //cin>>h>>p1>>p2>>a>>v;
    while(cin>>h>>p1>>p2){
    cin>>n;
    while(n--){
    cin>>a>>v;
    //cout<<a<<" "<<v<<endl;
    a=(a*3.14159)/180;
    g=9.80665;
    //cout<<sin(a)<<endl;
    //r=(v*v*sin(2*a))/9.80665;
    //r=((v*v)/(2*g))*(1+sqrt(1+(2*g*h)/(v*v*sin(a)*sin(a))))*sin(2*a);
    r=(v/g)*(sin(a)+sqrt((sin(a)*sin(a))+(2*g*h)/(v*v)))*v*cos(a);
    //cout<<fixed<<setprecision(5)<<r<<endl;
    if(r>=p1 && r<=p2)
    {
        cout<<fixed<<setprecision(5)<<r<<" -> DUCK"<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(5)<<r<<" -> NUCK"<<endl;
    }

    }

    }
}
