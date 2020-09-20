#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,c;
    long double a;

    cin>>c;
    while(c--){
    cin>>a;
    while(a>1)
    {
        a=a/2;
        n++;
        //cout<<a<<endl;
    }
    cout<<n<<" dias"<<endl;
    n=0;
    }
}
