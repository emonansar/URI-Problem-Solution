#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,x;
    int c=1,t=0,r,a1,b1;
    while(true){
    cin>>a>>b;
    if(a==0 && b==0)
    {
        break;
    }
    else{
    //cout<<c<<endl;
     a1=a%10;
     b1=b%10;
    while(a!=0 || b!=0)
    {
        r=a1+b1;
        if(r>=10)
        {
            //cout<<a<<" "<<b<<endl;
            t++;
            a=a/10;
            b=b/10;
            a1=a%10;
            b1=b%10;
            a1++;

        }
        else{
            //cout<<a<<" "<<b<<endl;
            a=a/10;
            b=b/10;
            a1=a%10;
            b1=b%10;
        }
    }
    if(t==0)
    {
        cout<<"No carry operation."<<endl;
        t=0;
    }
    else if(t==1){
    cout<<t<<" carry operation."<<endl;
    t=0;
    }
    else
    {
        cout<<t<<" carry operations."<<endl;
        t=0;
    }
        }
    }
}
