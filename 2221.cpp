#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,d1,l1,a2,d2,l2,b,n;
    float val1,val2;
    cin>>n;
    while(n--){
    cin>>b>>a1>>d1>>l1>>a2>>d2>>l2;
    val1=(a1+d1)/2.0;
    val2=(a2+d2)/2.0;
    if(l1%2==0)
    {
        val1=val1+b;
    }
    if(l2%2==0)
    {
        val2=val2+b;
    }
    if(val1>val2)
    {
        cout<<"Dabriel"<<endl;
    }
    else if(val1<val2)
    {
        cout<<"Guarte"<<endl;
    }
    else if(val1==val2)
    {
        cout<<"Empate"<<endl;
    }
    val1=0;
    val2=0;
    }
    //cout<<val1<<endl;
}
