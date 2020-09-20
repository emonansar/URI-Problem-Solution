#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    double fs,stotal,finals;
    cin>>name;
    cin >>fs>>stotal;
    finals=fs+(stotal*.15);
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<finals<<endl;
    return 0;
}
