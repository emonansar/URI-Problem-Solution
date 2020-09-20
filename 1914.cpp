#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,sum=0,n;
    string name1,p1,name2,p2,parname,imparname;
    cin>>n;
    while(n--){
    cin>>name1>>p1>>name2>>p2>>a>>b;
    sum=a+b;
    if(p1=="PAR")
    {
        parname=name1;
        imparname=name2;
    }
    else
    {
        imparname=name1;
        parname=name2;
    }
    if(sum%2==0)
    {
        cout<<parname<<endl;
    }
    else if(sum%2!=0)
    {
        cout<<imparname<<endl;
    }
    }
}
