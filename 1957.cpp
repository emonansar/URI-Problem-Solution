#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,k,temp,x;
    //int flag=0;
    cin>>a;
    temp=a;
    while(a>0)
    {
        a=a/16;
        c++;
        //cout<<c<<endl;
    }
    x=c;
    char e[c];
    while(temp>0)
    {
        b=temp%16;
        //cout<<b<<endl;
        if(b==10)
        {
            //cout<<"A";
            e[c]=65;
        }
        else if(b==11)
        {
            //cout<<"B";
            e[c]=66;
        }
        else if(b==12)
        {
            //cout<<"C";
            e[c]=67;
        }
        else if(b==13)
        {
            //cout<<"D";
            e[c]=68;
        }
        else if(b==14)
        {
            //cout<<"E";
            e[c]=69;
        }
        else if(b==15)
        {
            //cout<<"F";
            e[c]=70;
            //cout<<e[c];
            //cout<<c<<endl;
        }
        else
        {
            //flag=1;

            e[c]=48+b;
            //cout<<e[c];
            //cout<<c<<endl;

        }
        temp=temp/16;
        c--;
        //cout<<c<<endl;
    }
    //cout<<endl;
    //cout<<x<<endl;
    //cout<<e[2]<<endl;
    //cout<<e[1]<<endl;
    for(k=1;k<=x;k++)
    {
        cout<<e[k];
    }
    cout<<endl;
}
