#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double r;
    cin>>n;
    r=(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
    cout<<fixed<<setprecision(1)<<r<<endl;
}
