#include <bits/stdc++.h>
using namespace std;
int main()
{
    //string b;
    int a,c;
    while(scanf("%d:%d", &a, &c)!=EOF){
    if(a<8 && c+60>=60)
    {
        a=a+1;
        //cout<<a<<b<<c<<endl;
        if(a==8)
        {
            cout<<"Atraso maximo: "<<c<<endl;
        }
        else if(a<8)
        {
            cout<<"Atraso maximo: 0"<<endl;
        }
    }
    else if(a>=8)
    {
        a=a-8;
        a=a*60;
        c=a+c+60;
        cout<<"Atraso maximo: "<<c<<endl;
    }
    }
}
